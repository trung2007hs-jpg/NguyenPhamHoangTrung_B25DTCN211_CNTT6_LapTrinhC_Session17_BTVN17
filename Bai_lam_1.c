#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);    
	int length = strlen(str);
	if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }
    int isPalindrome = 1;
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome == 1) {
        printf("La palindrome\n");
    } else {
        printf("Khong phai palindrome\n");
    }
    return 0;
}

