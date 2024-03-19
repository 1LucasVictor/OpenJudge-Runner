#include<stdio.h>
int main()
{
    int A,B;
    int a,b,c;
    scanf("%d%d",&A,&B);
    a=A+B;
    b=A*B;
    c=A-B;
    if(a>b&&a>c){
        printf("%d",a);
    }
    else if(b>c){
        printf("%d",b);
    }
    else{
        printf("%d",c);
    }
    return 0;
}
