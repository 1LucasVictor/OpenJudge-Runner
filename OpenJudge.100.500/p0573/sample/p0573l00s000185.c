
#include <stdio.h>
#include <stdlib.h>
int compare(const void *a,const void *b){
    if(*(int *)a>*(int *)b)return 1;
    return -1;
}
int main()
{   char s[5];
    scanf("%s",s);
    int a[4];
    a[0]=s[0]-'A';
    a[1]=s[1]-'A';
    a[2]=s[2]-'A';
    a[3]=s[3]-'A';
    qsort(a,4,sizeof(int),compare);
    if(a[0]==a[1]&&a[2]==a[3]&&a[1]!=a[2])
    printf("Yes");
    else printf("No");

    return 0;
}
