#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a=n/100;
    int b= n%100;
    if(a==b) printf("Good\n");
    else printf("Bad\n");
    return 0;
}
