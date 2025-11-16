#include <stdio.h>
#include <string.h>
int main() {
    char str1[1000], str2[1000];
    int i = 0;
    int same = 1;
    printf("Nhap chuoi thu nhat: ");
    fgets(str1, sizeof(str1), stdin);
    if (str1[strlen(str1) - 1] == '\n') {
        str1[strlen(str1) - 1] = '\0';
    }
    printf("Nhap chuoi thu hai: ");
    fgets(str2, sizeof(str2), stdin);
    if (str2[strlen(str2) - 1] == '\n') {
        str2[strlen(str2) - 1] = '\0';
    }
    while (str1[i] != '\0' && str2[i] != '\0') {
        char c1 = str1[i];
        char c2 = str2[i];
        if (c1 >= 'A' && c1 <= 'Z') c1 = c1 + 32;
        if (c2 >= 'A' && c2 <= 'Z') c2 = c2 + 32;
        if (c1 != c2) {
            same = 0;
            break;
        }
        i++;
    }
    if (str1[i] != '\0' || str2[i] != '\0') {
        same = 0;
    }
    if (same) {
        printf("Giong nhau\n");
    } else {
        printf("Khac nhau\n");
    }
    return 0;
}


