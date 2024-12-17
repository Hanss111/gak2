#include <stdio.h>
#include <string.h>

void insertLineInFile(const char *filename, const char *newLine, int lineNum) {
    FILE *file;
    FILE *tempFile;
    char buffer[256];
    int currentLine = 1;

    file = fopen(filename, "r");
    if (file == NULL) {
        return;
    }

    tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL) {
        fclose(file);
        return;
    }

    while (fgets(buffer, sizeof(buffer), file)) {
        if (currentLine == lineNum) {
            fprintf(tempFile, "%s\n", newLine);
        }
        fprintf(tempFile, "%s", buffer);
        currentLine++;
    }

    if (currentLine <= lineNum) {
        fprintf(tempFile, "%s\n", newLine);
    }

    fclose(file);
    fclose(tempFile);

    remove(filename);
    rename("temp.txt", filename);
}

int main() {
    const char *filename = "test.txt";
    const char *newLine = "Це новий рядок, який буде вставлений.";
    int lineNum = 3;

    insertLineInFile(filename, newLine, lineNum);

    return 0;
}
