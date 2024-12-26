1) libmysyslog

Основная библиотека, предоставляющая API для работы с логами. С ее помощью можно задать сообщение, уровень важности, драйвер, формат и путь к файлу журнала через параметры командной строки. Она проверяет переданные аргументы и вызывает функцию mysyslog для записи лога.


Параметры:
msg — текст сообщения.

level — уровень важности: отладка (0), информация (1), предупреждение (2), ошибка (3), критическая ошибка (4).

driver — идентификатор драйвера.

format — формат записи: текстовый (0) или JSON (1).

path — путь к файлу журнала.


Аргументы командной строки:

-m — сообщение.

-l — уровень важности.

-d — идентификатор драйвера.

-f — формат записи.

-p — путь к файлу.

Пример использования:

./mysyslog_program -m "Hello, World!" -l 1 -d 0 -f 0 -p /var/log/myapp.log

2) libmysyslog-text

Функция для записи текстовых сообщений в лог-файл. Формат записи всегда устанавливается как текстовый, а драйвер — как 0.


Параметры:

message — текст сообщения.

level — уровень важности: отладка (0), информация (1), предупреждение (2), ошибка (3), критическая ошибка (4).

log_path — путь к файлу журнала.

3) libmysyslog-json

Функция для записи сообщений в формате JSON с использованием библиотеки libmysyslog-json. Возвращает 0 при успешной записи или ненулевое значение в случае ошибки.


Параметры:

msg — сообщение в формате JSON.

level — уровень важности: отладка (0), информация (1), предупреждение (2), ошибка (3), критическая ошибка (4).

path — путь к файлу журнала.

4) libmysyslog-client

Программа, демонстрирующая использование библиотеки libmysyslog для работы с логами. Через параметры командной строки задаются сообщение, уровень важности, драйвер, формат и путь к файлу журнала.


Аргументы командной строки:

-m — сообщение.

-l — уровень важности.

-d — идентификатор драйвера.

-f — формат записи.

-p — путь к файлу журнала.


Параметры:

msg — текст сообщения.

level — уровень важности: отладка (0), информация (1), предупреждение (2), ошибка (3), критическая ошибка (4).

driver — идентификатор драйвера.

format — текстовый (0) или JSON (1).

path — путь к файлу журнала.


Пример использования:

./mysyslog_program -m "Hello, World!" -l 1 -d 0 -f 0 -p /var/log/myapp.log

5) libmysyslog-daemon

Фоновая программа для периодической записи логов с использованием библиотеки libmysyslog. Демон работает с настройками из конфигурационного файла, где указываются путь к файлу журнала, формат записи (текстовый или JSON) и драйвер.Программа обрабатывает сигналы завершения (например, SIGTERM и SIGINT), что позволяет корректно завершить ее работу. Она предназначена для записи логов в заданном формате в фоновом режиме.
