#include <stdio.h>
int main(){
int w,h,x,y,r;
scanf("%d%d%d%d%d",&w,&h,&x,&y,&r);
    if(0<=x-r)
    {
        if(x+r<=w)
        {
            if(0<=y-r)
            {
                if(y+r<=h)
                    printf("Yes\n");
               
                else
                    printf("No\n");
            }
                
        }
        else
            printf("No\n");
    }
    else
        printf("No\n");

}

