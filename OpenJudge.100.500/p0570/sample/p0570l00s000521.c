#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);

    c=a+b;
    if(c%2==0){
        printf("%d",c/2);
    }
    else{
        printf("IMPOSSIBLE");
    }





    return 0;
}
