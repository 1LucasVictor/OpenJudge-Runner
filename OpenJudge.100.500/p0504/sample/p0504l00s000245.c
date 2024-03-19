#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define yes "Yes\n"
#define no "No\n"
//int m,n;
//int i,j,k,l;
int a,b,c,d,e,f,g,h;
//int sum,total;
//long long int ;
//float ;
//double ;
//char a[101],b[101],s[101],t[101],u[101];
int main(void)
{
    scanf("%d %d",&h,&a);
    b=h/a;
    if (h%a==0)
    {
        printf("%d\n",b);
    }else
    {
        printf("%d\n",b+1);
    }
    
    
    return 0;
}