#include <stdio.h>

int main() {
    int number = 42;
    int input;

  
    do {
        printf("Nh?p m?t s?: ");
        scanf("%d", &input);
    } while (input != number);

    printf("Ch�c mung! Ban d� nhap d�ng so %d.\n", number);
    
    return 0;
}

