#include<stdio.h>

int main(void){

  int x,y;
  int count=0;

    scanf("%d %d",&x,&y);

  if((1<=x)&&(x<=100)){
    if((1<=y)&&(y<=100)){



      if(y<=4*x){

        for (int i = 0; i < x; i++) {
          if(4*x-2*i==y){
            count++;
          }
        }

        if(count>=0){
          printf("Yes\n");
        }else{printf("No\n");
      }


    }else{
      printf("No\n");
    }



    }
  }

  return 0;
}