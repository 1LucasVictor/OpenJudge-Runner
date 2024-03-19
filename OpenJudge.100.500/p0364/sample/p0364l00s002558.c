#include<stdio.h>

int main(){
    int w,h,x,y,r;
    scanf("%d %d %d %d %d",&w,&h,&x,&y,&r);
    x = x + r;
    y = y + r;


    
    if (x < 0||y < 0){
        printf("No\n");

        
    }else if (x > w || x > h || y > w || y > h)
    {
        printf("No\n");
    }else
    {
        printf("Yes\n");
    }
    
    
    
    return 0;
}

