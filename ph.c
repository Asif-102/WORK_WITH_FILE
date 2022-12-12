/**
* author: asif_102
* created: 2022-12-13 00:52:12
**/
#include <stdio.h>

int main() {
    FILE* inputFile = fopen("input.txt", "r");
    FILE* outputFile = fopen("output.txt", "w");
    if(inputFile == NULL || outputFile == NULL){
        printf("file not found...");
        return 0;
    }
    while (1) {
        char ch = fgetc(inputFile);
        if(ch == EOF)
            break;
        fputc(ch, outputFile);
    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}