#include <stdio.h>
int main() {
    char word[100];
    int i,j,count;
    printf("Enter a word: ");
    scanf("%s", word);
    printf("\n Character frequency:\n");
    for(i =0;word[i]!='\0';i++) {
        count=1;
        if(word[i]=='0')
            continue;
        for(j=i+1;word[j]!='\0';j++) {
            if(word[i]==word[j]) {
                count++;
                word[j]='0';
            }
        }
        printf("%c = %d\n", word[i], count);
    }
    return 0;
}
