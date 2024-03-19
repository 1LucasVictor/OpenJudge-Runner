#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){

    int tomadas_atuais,tomadas_vazias,cont=0;

    scanf("%d %d",&tomadas_atuais,&tomadas_vazias);

    for(int i=1;i<30;i++){
      if((tomadas_atuais*i)-(i-1)>=tomadas_vazias){
        printf("%d\n",i);
        break;
      }
    }
    return 0;
}
