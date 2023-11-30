#include <stdio.h>

int main() {
    int i,j;
    char ch = 'A'; 
    
    for (i = 1; i <= 5; i++) {
        char temp = ch + i - 1;
        for (j = 1; j <= i; j++) {
            printf("%c ", temp);
            temp--;
        }
        printf("\n");
    }
    
    return 0;
}
