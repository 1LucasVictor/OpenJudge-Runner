#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int f = 0;
    if(n % 10 == 7)
        f = 1;
    n /= 10;
    if(n % 10 == 7)
        f = 1;
    n /= 10;
    if(n == 7)
        f = 1;
    if(f)
        puts("Yes");
    else
    {
        puts("No");
    } 
    return 0;
}