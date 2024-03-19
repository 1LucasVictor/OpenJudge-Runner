#include<stdio.h>

int main(void){
    int x,y;
    //int ka = 4,tu = 2;
    scanf("%d %d",&x,&y);
    /*if(x < 1 || x > 100 || y < 1 || y > 100){
        goto end;
    }*/
    int k,t,flag = 0;
    for(k = 0;k <= x;k++){
        for(t = 0;t <= x;t++){
            if(k + t != x){
                continue;
            }
            if(k * 4 + t * 2 == y){
                flag++;
                goto end;
            }
        }
    }
end:
    if(flag == 1){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}
