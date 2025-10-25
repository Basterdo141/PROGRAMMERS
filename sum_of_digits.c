#include<stdio.h>
int main(){
    printf("Enter five digit integer:");
    int a;
    scanf("%d",&a);
    int c=0;
    int s=0;
    while(c<5){
        s=s+(a%10);
        a=a/10;
        c++;
    }
    printf("%d",s);
    return 0;

}
