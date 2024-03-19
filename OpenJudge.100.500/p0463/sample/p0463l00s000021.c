#include<stdio.h>


#include<string.h>
int main()
{
    long long int ch[1000];
    char arr[1000];
    long long  int a,b,c,d,e=0,i=0,tep=0,temp=0,j=0,k=0,l=0,m=0,n=0;
    arr[0]=0;
    ch[0]=0;
    scanf("%lld",&a);
    if(a%10==2 || a%10==4 || a%10==5 || a%10==7 || a%10==9)
        printf("hon\n");
    if(a%10==0 || a%10==1 || a%10==6 || a%10==8)
        printf("pon\n");
    if(a%10==3)
        printf("bon\n");


    return 0;
}