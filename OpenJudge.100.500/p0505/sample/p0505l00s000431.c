#include<stdio.h>

int main(void)
{
    int h,n;
    int i;
    int waza[10000]={0},damage=0;
    
    scanf("%d%d",&h,&n);
    for(i=0; i<n; i++){
        scanf("%d",&waza[i]);
    }
    for(i=0; i<n; i++){
        damage += waza[i];
    }
    if(h<damage){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}