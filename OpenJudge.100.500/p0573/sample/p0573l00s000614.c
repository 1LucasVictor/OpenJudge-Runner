#include <stdio.h>
#include <stdlib.h>
int asc(const void *a,const void *b){
    return *(char*)a-*(char*)b;
}
int main(void){
    char s[5];
    scanf("%s",s);
    qsort(s,4,sizeof(char),asc);
    if(s[0]==s[1] && s[2]==s[3] && s[0]!=s[2]) printf("Yes");
    else printf("No");
}
