#include <stdio.h>
#define NUMBER 10000

int main(void)
{
    int h,n;
    int s[NUMBER] = {0};
    int i;
    int c = 0;
    
    scanf("%d %d",&h,&n);
    for (i = 0;i < n;i++){
        scanf("%d",&s[i]);
    }
    for (i = 0;i < n;i++){
        c = c + s[i];
    }
    
    if (c >= h)
        printf("Yes\n");
    else
        printf("No\n");
    
    return 0;
}
