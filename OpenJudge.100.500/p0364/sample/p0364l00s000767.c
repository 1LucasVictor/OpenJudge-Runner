#include <stdio.h>
int main(void){
    int w,h,x,y,r,f;
    
    scanf("%d %d %d %d %d",&w,&h,&x,&y,&r);
    
    f=0;
    if(x+r>w)f=1;
    if(y+r>h)f=1;
    if(r>y)f=1;
    
    if(f==0)
    printf("Yes\n");
    else
    printf("No_n");
    
    return 0;
    
}
