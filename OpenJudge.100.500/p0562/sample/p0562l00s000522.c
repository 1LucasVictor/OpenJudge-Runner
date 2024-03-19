#include<stdio.h>

int main(void)
{
        int a,b,n,cnt ;
    
        scanf("%d %d",&a,&b);

        n = 0 ; 
        while(n*(a-1)+1 < b){ 
                n++;
        }   

        printf("%d\n",n);

        return 0;
}
