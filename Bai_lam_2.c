#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    int choice;
    printf("\n------------MENU------------\n");
    printf("1. Chuyen toan bo ki tu thanh chu hoa\n");
    printf("2. Chuyen toan bo ki tu thanh chu thuong\n");
    printf("Nhap lua chon: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            for (int i = 0; i < strlen(str); i++) {
                if (str[i] >= 'a' && str[i] <= 'z') {
                    str[i] = str[i] - 32;
                }
            }
            printf("Chuoi sau khi chuyen chu hoa: %s\n", str);
            break;
        case 2:    
            for (int i = 0; i < strlen(str); i++) {
                if (str[i] >= 'A' && str[i] <= 'Z') {
                    str[i] = str[i] + 32;
                }
            }
            printf("Chuoi sau khi chuyen chu thuong: %s\n", str);
            break;
        default:
        	printf("Lua chon khong hop le");
    }
    return 0;
}
