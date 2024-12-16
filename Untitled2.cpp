#include <stdio.h>

int main() {
    int number = 42;
    int input;

  
    do {
        printf("Nh?p m?t s?: ");
        scanf("%d", &input);
    } while (input != number);

    printf("Chúc mung! Ban dã nhap dúng so %d.\n", number);
    
    return 0;
}

