#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    if((a+b)%2==0){
            c=(a+b)/2;
        printf("%d",c);
    }
    else{
        printf("IMPOSSIBLE\n");
    }
}
