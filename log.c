/**
* author: asif_102
* created: 2022-12-13 01:18:25
**/
#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
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
        fprintf(logFile, "%c %s", ch, asctime(tm));
    }
    return 0;
}