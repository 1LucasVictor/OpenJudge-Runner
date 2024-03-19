#include <stdio.h>
int main(){
    int i=0;
    int j;
    char s[20];
    scanf("%s",&s);
    while(s[i]!=NULL)i++;
    for(j=i-1;j>=0;j--)printf("%c",s[j]);
    printf("\n");
    return 0;
}