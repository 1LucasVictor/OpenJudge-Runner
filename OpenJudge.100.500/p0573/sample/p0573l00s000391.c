#include<stdio.h>

int main(void){
  char array[4] ;
  char x,y;
  int count_x = 1, count_y = 1;

  scanf("%s",array);
  x = array[0]; // x:1文字目

  if(x != array[1]){ // 1文字目と2文字目が違う
    y = array[1];
    for(int i=0 ; i<2 ; i++){
    if(x == array[i+2])
      count_x++;
    else if(y == array[i+2])
      count_y++;
    }
  }
  else{              // 1文字目と2文字目が同じ 
    count_x++;
    y = array[2];
    if(y == array[3]){
      count_y++;
      if(x == y)   //全て同じ文字のとき
	count_x--; //後の条件から外す
    }
  }


  if(count_x == 2 && count_y == 2)
    printf("Yes\n");
  else
    printf("No\n");


  return 0;
}
