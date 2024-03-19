#include <stdio.h>
int main(void){
    
    int i,j=0,a,b,c,d,e[101]={0},f[101]={0};
    
    scanf("%d%d",&a,&b);
    for(i=a;i<b;i++) e[i]=1;
    scanf("%d%d",&c,&d);
    for(i=c;i<d;i++) f[i]=1;
    
    for(i=0;i<101;i++)
        if((e[i]==f[i])&&(e[i]==1))
            j++;
    
    printf("%d\n",j);
    
    return 0;
}
