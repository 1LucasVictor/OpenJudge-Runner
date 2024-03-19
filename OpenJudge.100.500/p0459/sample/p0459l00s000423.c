#include <stdio.h>
int main(void){
    int x, y;
    
    scanf("%d%d",&x,&y);
    
    if((y>(x*4))||(y<(x*2))){
        printf("No\n");
    }
    else{
        if((y%x)%2==0) printf("Yes\n");
        else          printf("No\n");
    }
    return 0;
}