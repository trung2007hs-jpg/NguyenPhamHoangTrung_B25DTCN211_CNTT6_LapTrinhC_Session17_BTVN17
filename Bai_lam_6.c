#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    char longest[100] = "";
    int maxLen = 0;
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            char word[100];
            int j = 0;
            while (str[i] != ' ' && str[i] != '\0') {
                word[j++] = str[i++];
            }
            word[j] = '\0';
            if (j > maxLen) {
                maxLen = j;
                strcpy(longest, word);
            }
        } else {
            i++;
        }
    }
    printf("Tu dai nhat: %s\n", longest);
    printf("Do dai: %d\n", maxLen);
    return 0;
}


