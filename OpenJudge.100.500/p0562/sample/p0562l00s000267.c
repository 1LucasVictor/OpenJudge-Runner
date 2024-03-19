#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){

    int tomadas_atuais,tomadas_vazias,cont=0;

    scanf("%d %d",&tomadas_atuais,&tomadas_vazias);
    if(tomadas_atuais>tomadas_vazias){
      printf("0\n");
      return 0;
    }
    for(int i=0;i<30;i++){
      if(tomadas_atuais*i>=tomadas_vazias){
        printf("%d\n",i);
        break;
      }
    }
    return 0;
}
