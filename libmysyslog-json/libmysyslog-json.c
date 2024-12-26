#include "libmysyslog.h"

int json_log(const char* msg, int level, const char* path) {
	return mysyslog(msg, level, 1, 1, path);
}
int main() {
    const char *msg = "{\"event\":\"start\",\"status\":\"success\"}";
    int level = 2; // Уровень логирования (например, WARNING)
    const char *path = "/var/log/myapp.log";

    if (json_log(msg, level, path) != 0) {
        fprintf(stderr, "Ошибка записи лога\n");
        return 1;
    }

    return 0;
}
