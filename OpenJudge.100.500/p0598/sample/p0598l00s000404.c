#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d",&a,&b);
    c=a+b;
    d=b-a;
    if(b%a==0){
        printf("%d\n",c);
    }
    else{
        printf("%d\n",d);
    }
}
