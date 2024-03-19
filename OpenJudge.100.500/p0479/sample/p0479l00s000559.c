#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ll long long 
int b[100100] = {0};
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 1; i < n; i++)
        scanf("%d",&a[i]);
    for(int i = 1; i < n; i++)
        b[a[i]] ++;
    for(int i = 1; i <= n; i++)
        printf("%d\n",b[i]);
    return 0;
}