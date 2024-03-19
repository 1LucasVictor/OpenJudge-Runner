#include<stdio.h>

int main(void)
{
    int h,n;
    int i;
    int waza,damage=0;
    
    scanf("%d%d",&h,&n);
    for(i=0; i<n; i++){
        scanf("%d",&waza);
        damage+=waza;
    }
    if(h<=damage){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}