# Тестовые вопросы

Результаты можно присылать либо ссылкой на github/bitbucket/где-ещё-удобно с решениями задач (те, которые не требуют кода, можете просто описать в README.md), либо просто в tar-архиве.

На всякий случай:

- всё уметь не обязательно
- незаконченные, но начатые задачи - лучше чем их отсутствие
- если совсем тяжело сделать что-то на предложенном языке программирования - можете сделать на привычном вам

## Сети и виртуализация в Linux

Виртуальная машина KVM и LXC-контейнер c CentOS 6.7 на борту находятся в одном бридже br1. Назовём их X (KVM) и Y (LXC).

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

Вопросы:
- из-за чего они недоступны?
- как это исправить?

## С и тестирование

Задание и шаблон проекта в папке [unit_testing_example](https://github.com/carbonsoft/test_sys_dev/tree/master/unit_testing_example).

Вкратце - написать unit-тест к функции func и написать в main.c вывод подсказки по аргументам, при передаче --help или просто неправильных аргументов.

## Shell-скриптинг

1. Выведите IP адрес под которым машина отправляет запросы к 8.8.8.8 (учитывать NAT после выхода пакета из машины не нужно, нужен IP адрес с которым пакет покидает машину).
2. Напишите команду для поиска в текстовом файле (абстрактном в вакууме) всех нечётных чисел от 1 до 100, записанных отдельным словом. Можно использовать заранее сгенерированные временные файлы.
3. Выведите список сетевых карт в формате: "название сетевой карты в системе, например eth1" "модель сетевой карты, например Intel Corporation 82540EM Gigabit Ethernet Controller"

## Python 2

Напишите утилиту, которая принимает на stdin кириллические домены в кодировках utf-8 и cp1251 (заранее неизвестно какая именно, при этом разные строки могут быть в разных кодировках) и выводят их закодированными по IDNA (плохойсайтик.рф -> xn--80aqbbgbvagyn4a.xn--p1ai). Учтите, что домены могут быть не только в зоне .рф.

## Гляньте документацию

Вообще о том, чем придётся заниматься в проекте - довольно хорошо говорит документация. Можете её глянуть, она в открытом доступе - http://docs.carbonsoft.ru/pages/viewpage.action?pageId=51380250

В принципе и сам продукт над которым предстоит работать тоже можно взять и установить, пощупать. Разве что возможно настройка схемы [тестовый абонент] -> [carbon reductor с режиме роутера с nat] -> [интернет] займёт много времени.

Подумайте заранее, точно ли это то, чем вы готовы заниматься хотя бы полгода-год.
