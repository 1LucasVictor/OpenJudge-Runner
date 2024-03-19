#include<stdio.h>

int main(void){
  int a[5];
  int k;
  int m;


  for(m = 0; m <= 4; m++){

    scanf("%d",&a[m]);

  }

  scanf("%d",&k);

  int i;
  int hantei = 0;
  for(i = 0; i < 4; i++){

    if( (a[4]-a[i]) > k ){
      hantei ++;
    }

  }


  for(i = 0; i < 3; i++){

    if( (a[3]-a[i]) > k ){
        hantei ++;
      }

    }

  for(i = 0; i < 2; i++){

      if( (a[2]-a[i]) > k ){
          hantei ++;
        }

      }

    if( (a[1]-a[0]) > k ){
        hantei ++;
          }


  if(hantei == 0){
    printf("Yay!");
  }else{
    printf(":(");
  }


  return 0;
}