#include <stdio.h>
#include <stdlib.h>
void update(int *a,int *b){
    int p=*a;
    int q=*b;
    *a=p+q;
    *b=abs(p-q);
}
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    update(&a,&b);
    printf("Sum = %d\n",a);
    printf("Absolute Difference = %d\n",b);
    return 0;
}
