#include <stdio.h>
int main()
{
    int x, y, ans, swap;

    scanf("%d %d",&x,&y);
    
    if(x < y){
        swap = x;
        y = x;
        x = swap;
    }
    
    while((x%y)!=0){
        swap = x%y;
        x = y;
        y = swap;
    }
    printf("%d\n",y);
    return 0;
}

