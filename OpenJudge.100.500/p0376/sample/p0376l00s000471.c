#include <stdio.h>

int main(void){
    int n,i,line[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&line[i]);
    for(i=n-1;i>=0;i--)
        printf("%d%s",line[i],i==0?"\n":" ");
    return 0;
}