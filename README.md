# Тестовые вопросы

## Сети в Linux

Две виртуальные машины находятся в одном бридже br1. Назовём их X и Y.

    [root@x ~]# ip -4 a show eth1
    3: eth1: <BROADCAST,MULTICAST,NOARP,UP,LOWER_UP> mtu 1500 qdisc pfifo_fast state UP qlen 1000
        inet 10.30.30.1/24 brd 10.30.30.255 scope global eth1
    
    [root@y ~]# ip -4 a show eth1
    21: eth1: <BROADCAST,MULTICAST,UP,LOWER_UP> mtu 1500 qdisc pfifo_fast state UP qlen 1000
        inet 10.30.30.3/24 brd 10.30.30.255 scope global eth1
    
Проблема: они недоступны друг для друга.

    [root@x ~]# ping -c 1 10.30.30.3
    PING 10.30.30.3 (10.30.30.3) 56(84) bytes of data.
    --- 10.30.30.3 ping statistics ---
    1 packets transmitted, 0 received, 100% packet loss, time 10000ms
    
    [root@y ~]# ping -c 1 10.30.30.1
    PING 10.30.30.1 (10.30.30.1) 56(84) bytes of data.
    From 10.30.30.3 icmp_seq=1 Destination Host Unreachable
    --- 10.30.30.1 ping statistics ---
    1 packets transmitted, 0 received, +1 errors, 100% packet loss, time 3000ms

Вопрос: из-за чего они недоступны?
