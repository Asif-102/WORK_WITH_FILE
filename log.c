/**
* author: asif_102
* created: 2022-12-13 01:18:25
**/
#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    FILE* logFile = fopen("log.txt", "a");
    FILE* input = fopen("input.txt", "r");
    if (input == NULL) {
        printf("file not found...");
        return 0;
    }
    while (1) {
        char ch = fgetc(input);
        if (ch == EOF)
            break;
        fprintf(logFile, "%c -> now: %d-%02d-%02d %02d:%02d:%02d\n", ch, tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
    }
    return 0;
}