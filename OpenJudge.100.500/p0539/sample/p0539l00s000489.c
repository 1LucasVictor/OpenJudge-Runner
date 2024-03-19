#include <stdio.h>

int main(void)
{

        int a,i,j,b;

        scanf("%d",&a);

        for(i=0; i<=9; i++){
                for(j=0; j<=9; j++){
                                b=i*j;
                        if(a==b) return printf("Yes\n");
        }
                }
        printf("No\n");

        return 0;
}