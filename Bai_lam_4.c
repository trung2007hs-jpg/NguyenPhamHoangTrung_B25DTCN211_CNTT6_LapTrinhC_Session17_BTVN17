#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    char ch;
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str)-1] == '\n') {
        str[strlen(str)-1] = '\0';
    }
    printf("Nhap ky tu can xoa: ");
    scanf("%c", &ch);
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ch) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
    printf("Chuoi sau khi xoa ky tu '%c': %s\n", ch, str);
    return 0;
}




