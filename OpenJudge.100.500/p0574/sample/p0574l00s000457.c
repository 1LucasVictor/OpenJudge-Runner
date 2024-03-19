#include<stdio.h>

int main(void)
{
    int n,i;
    int a,b,c,d;
    scanf("%d",&n);
    a=n%10;
    b=n/10%10;
    c=n/100%10;
    d=n/1000;

    if(a==b||a==c||a==d||b==c||b==d||c==d){
    printf("Bad");}
        else
        {
            printf("Good");
            }
    return 0;
    }