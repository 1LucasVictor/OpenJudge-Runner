#include<stdio.h>
int main(void){
    int a,b,k;
    scanf("%d%d%d",&a,&b,&k);
    int p[k],q=a>b?b:a;
    for(int i=0;k>i;++i)
    p[i]=0;
    int c=0;
    for(int i=0;q>i;++i)
    if(a%(i+1)==0&&b%(i+1)==0){
        p[c]=i+1;
        ++c;
    }
    printf("%d",p[k-1]);
    return 0;
}