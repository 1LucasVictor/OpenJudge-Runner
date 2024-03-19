#include<stdio.h>
int main(void){
    int h,n;
    int num = 0;
    scanf("%d%d",&h,&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        num = num + a[i];
    }
    if (h <= num)
    {
        printf("Yes\n");
    }else
    {
        printf("No\n");
    }
    
}