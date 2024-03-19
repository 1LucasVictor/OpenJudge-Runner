#include <stdlib.h>
#include <string.h>
#include <stdio.h>
long long MAX(long long a,long long b){
    return a>b?a:b;
}
long long MIN(long long a,long long b){
    return a<b?a:b;
}
int compare(const void *a,const void *b){
    if(*(long long *)a>*(long long*)b)return 1;
    return -1;
}
int main()
{   int a,b,n,k,m,x,y,i,t;
    scanf("%d%d%d",&a,&b,&t);
    
    printf("%d",t/a*b);

    return 0;
}
