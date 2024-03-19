#include<stdio.h>
int main(void){
    int cat,un,x;
    scanf("%d %d %d",&cat,&un,&x);
    if(cat<=x && x-cat<=un){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}

