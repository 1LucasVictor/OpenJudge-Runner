#include <stdio.h>

#define NUMBER 100000

int sum_at(int n,int a[])
{
    int i;
    int c = 0;
    for (i = 0;i < n;i++){
        c = c + a[i];
    }
    return c;
}

int main(void)
{
    int h,n;
    int a[NUMBER];
    int i;
    
    scanf("%d %d",&h,&n);
    for (i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    
    if (h > sum_at(n,a)){
        printf("No\n");
    }
    
    else
        printf("Yes\n");
    return 0;
}
