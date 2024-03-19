#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define yes "Yes\n"
#define no "No\n"
//int m,n;
int i,j,k,l;
//int a,b,c,d,e,f,g;
//int sum,total;
//long long int ;
//float ;
//double ;
//char a[101],b[101],s[101],t[101],u[101];
int h,n,a[100000],sum;
int main(void){
    scanf("%d %d",&h,&n);
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    if (sum<h)
    {
        printf(no);
    } else
    {
        printf(yes);
    }
    return 0;
}