#include <stdio.h>

int main() {
    int a;
    printf("Enter integer: ");
    scanf("%d", &a);

    for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= 7; j++) {
            if (i == 1 || i == 7 || j == 1 || j == 7) {
                printf("%d ", a);
            }
            else if ((i == 2 && j >= 2 && j <= 6) || (i == 6 && j >= 2 && j <= 6) ||
                     (j == 2 && i >= 2 && i <= 6) || (j == 6 && i >= 2 && i <= 6)) {
                printf("%d ", a - 1);
            }
            else if ((i == 3 && j >= 3 && j <= 5) || (i == 5 && j >= 3 && j <= 5) ||
                     (j == 3 && i >= 3 && i <= 5) || (j == 5 && i >= 3 && i <= 5)) {
                printf("%d ", a - 2);
            }
            else{
                printf("%d ", a - 3);
            }
        }
        printf("\n");
    }

    return 0;
}
