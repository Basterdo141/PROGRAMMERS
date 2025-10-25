#include <stdio.h>
#include <stdlib.h>
int marks_summation(int* marks, int n, char gender) {
    int sum=0;
    if(gender=='b') {
        for(int i=0;i<n;i+=2)
            sum+= marks[i];
    } else if(gender=='g') {
        for(int i=1;i<n;i+=2)
            sum +=marks[i];
    }
    return sum;
}

int main() {
    int n;
    char gender;
    printf("Enter number of students: ");
    scanf("%d", &n);
    int *marks = malloc(n * sizeof(int));
    printf("Enter marks: ");
    for(int i=0;i<n;i++)
        scanf("%d",&marks[i]);
    printf("Enter gender (b/g): ");
    scanf(" %c",&gender);
    int total=marks_summation(marks, n, gender);
    printf("Sum of marks = %d",total);
    free(marks);
    return 0;
}
