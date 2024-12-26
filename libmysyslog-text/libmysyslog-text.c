#include "libmysyslog-text.h"

/* Запись текстового сообщения в лог-файл */
text_log (const char *message, int level, const char *log_path)
{
    return mysyslog (message, level, /* driver */ 0, /* format */ 0, log_path);
}
/* Вызов функции text_log */
int main(void)
{
    if (text_log("Hellow!, World!", LOG_INFO, "logfile.txt") != 0)
    {
        fprintf(stderr, "Не удалось записать в лог-файл.\n");
        return 1;
    }

    if (text_log("Ошибка приложения", LOG_ERROR, "logfile.txt") != 0)
    {
        fprintf(stderr, "Не удалось записать в лог-файл.\n");
        return 1;
    }

    return 0;
}
