#include <stdio.h>

int main() {
	int i,j;
    int rows = 5; 
    char ch = 'A';
    int count = 1; 

    for ( i = 1; i <= 5; i++) {
        for ( j = 1; j <= i; j++) {
            if (i % 2 == 0) {
                printf("%d ", count);
                count++;
            } else {
                printf("%c ", ch);
                ch++;
            }
        }
        printf("\n");
    }

    return 0;
}
