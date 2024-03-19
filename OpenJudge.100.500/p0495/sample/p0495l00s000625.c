#include <stdio.h>
#include <stdlib.h>
int asc(const void*a,const void *b){
    return *(char*)a-*(char*)b;
}
int main(void){
    char s[4];
    scanf("%s",s);
    qsort(s,3,sizeof(char),asc);
    if(s[0]==s[2]) printf("No");
    else printf("Yes");
}