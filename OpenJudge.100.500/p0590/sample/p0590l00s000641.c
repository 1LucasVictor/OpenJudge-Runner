#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
long long MAX(long long A,long long B){
    return A>B?A:B;
}
long long MIN(long long a,long long b){
    return a<b?a:b;
}
int compare(const void *a,const void *b){
    if(*(long long *)a>*(long long *)b)return 1;
    return -1;
}
int main()
{   int a,b,c,d,e,x,y,n,m,k,i;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&k);
    if(e-a>k)
    printf(":(");
    else printf("Yay!");
    return 0;
}
