#include<stdio.h>
int main() {
    int n;
    int sum=0;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum=sum+a[i];
    }
    printf("Sum of elements = %d", sum);
    return 0;
}
