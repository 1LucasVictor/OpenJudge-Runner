#include<stdio.h>
int main(void)
{
    int a,b,c,i,n,j;
    int x[10];
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d%d%d",&a,&b,&c);
        if((a*a)+(b*b)==(c*c) || (a*a)+(c*c)==(b*b) || (c*c)+(b*b)==(a*a))
        x[i]=1;
        else x[i]=2;
    }for(j=0; j<n; j++){
        if(x[j]==1)
        printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}