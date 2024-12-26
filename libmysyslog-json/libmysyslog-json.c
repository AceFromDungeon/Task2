#include "libmysyslog.h"

int json_log(const char* msg, int level, const char* path) {
	return mysyslog(msg, level, 1, 1, path);
}
/*
//Пример вызова text_log
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
*/
