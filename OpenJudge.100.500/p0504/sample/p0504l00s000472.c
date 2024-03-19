#include<stdio.h>

int main(){
    int life,atack,i=0;
    scanf("%d",&life);
    scanf("%d",&atack);

    while(life>0){
        i++;
        life = life-atack;
    }

    printf("%d",i);
    return 0;
}
