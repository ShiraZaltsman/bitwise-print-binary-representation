#include <stdio.h>

int main() {

    printf("please enter a number: ");
    int n;
    scanf("%d", &n);
    while (n) {
        if (n & 1)
            printf("1");
        else
            printf("0");

        n >>= 1;
    }
    printf("\n");

    return 0;
}
