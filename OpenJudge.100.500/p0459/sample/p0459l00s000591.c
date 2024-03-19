#include<stdio.h>

int main(void){

  int x,y;
  int turu;

    scanf("%d %d",&x,&y);

  if((1<=x)&&(x<=100)){
    if((1<=y)&&(y<=100)){

      turu=4*x-y;

      if(y<=4*x){

      if(turu%2==0){
        printf("Yes\n");
      }else{printf("No\n");
    }

}else{printf("No\n");
}


    }
  }

  return 0;
}
