#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    int character;

    inputFile = fopen("Input.txt", "r");
    if (inputFile == NULL) {
        printf("Error: Could not open input file\n");
        return 1;
    }

    outputFile = fopen("Output.txt", "w");
    if (outputFile == NULL) {
        printf("Error: Could not open output file\n");
        fclose(inputFile);
        return 1;
    }

    while ((character = fgetc(inputFile)) != EOF) {
        if (character >= 'a' && character <= 'z') {
            character = character - ('a' - 'A');
        }
        fputc(character, outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
