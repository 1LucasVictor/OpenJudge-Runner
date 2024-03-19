#include<stdio.h>

int main(void){
  char array[4] ;
  char a,b;
  int flag = 1;

  scanf("%s",array);
  a = array[0];

  if(a != array[1]){
    b = array[1];

  if(a != array[2] && b != array[2])
    flag = 0;

  if(a != array[3] && b != array[3])
    flag = 0;

  if(a == b)
    flag = 0;
  }
  else {
    b = array[2];
    if(b != array[3])
      flag = 0;
    if(a == b)
      flag = 0;
  }

  if(flag == 0)
    printf("No\n");
  else
    printf("Yes\n");


  return 0;
}
