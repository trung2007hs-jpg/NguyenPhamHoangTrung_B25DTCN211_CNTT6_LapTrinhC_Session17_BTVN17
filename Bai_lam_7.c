#include <stdio.h>
#include <string.h>
int main() {
    char a[200];
    char b[200];
    printf("Nhap chuoi A: ");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")]='\0';
    printf("Nhap chuoi B: ");
    fgets(b, sizeof(b), stdin);
    b[strcspn(b, "\n")]='\0';
    if (strstr(a, b)!=NULL) {
        printf("Co\n");
    } else {
        printf("Khong\n");
    }
    return 0;
}




