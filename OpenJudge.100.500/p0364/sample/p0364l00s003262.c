#include <stdio.h>
int main(void){
    int w,h,x,y,r;

    scanf("%d %d %d %d %d",&w,&h,&x,&y,&r);

    if(w>=0 && h>=0){
        if(x+r<=w && y+r<=h){
            printf("Yes\n");
        }else {
            printf("No\n");
        }
    }else if(w<0 && h>0){
        if(x+r>w && y+r<h){
                printf("Yes\n");
            }else{
                printf("No\n");
            }
    }else if(w<0 && h<0){
        if(x+r>w && y+r>h){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }else if(w<0 && h<0){
        if(x+r<w && y+r>h){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
    
    
return 0;

}

