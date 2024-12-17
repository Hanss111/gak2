#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 1000

int hasDoubleLetters(char *word) {
    for (int i = 1; word[i] != '\0'; i++) {
        if (word[i] == word[i - 1]) {
            return 1;
        }
    }
    return 0;
}

void removeDoubleLettersWords(char *str) {
    char result[MAX_LENGTH];
    int j = 0;

    char word[MAX_LENGTH];
    int wordIndex = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i]) || str[i] == '\0') {
            word[wordIndex] = '\0';
            if (!hasDoubleLetters(word)) {
                for (int k = 0; word[k] != '\0'; k++) {
                    result[j++] = word[k];
                }
                if (isspace(str[i])) {
                    result[j++] = ' ';
                }
            }
            wordIndex = 0;
        } else {
            word[wordIndex++] = str[i];
        }
    }
    result[j] = '\0';
    strcpy(str, result);
}

int countWords(char *str) {
    int count = 0;
    char word[MAX_LENGTH];
    int wordIndex = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i]) || str[i] == '\0') {
            if (wordIndex > 0) {
                count++;
                wordIndex = 0;
            }
        } else {
            word[wordIndex++] = str[i];
        }
    }

    if (wordIndex > 0) {
        count++;
    }

    return count;
}

int main() {
    char text[MAX_LENGTH];

    printf("Введіть текст: ");
    fgets(text, MAX_LENGTH, stdin);
    text[strcspn(text, "\n")] = '\0';

    removeDoubleLettersWords(text);
    printf("Текст після видалення слів з подвоєними літерами:\n%s\n", text);

    int wordCount = countWords(text);
    printf("Кількість слів у тексті: %d\n", wordCount);

    return 0;
}
