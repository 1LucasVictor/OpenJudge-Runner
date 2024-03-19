#include<stdio.h>
int main(void){
  char a[4];
  int check;
  scanf("%s",a);
  if(a[0] == a[1]){
    if(a[2] == a[3]){
      check = 1;
    }else{
      check = 0;
    }
  }else if(a[0] == a[2]){
    if (a[1] == a[3]){
      check = 1;
    }else{
      check = 0;
    }
  }else if(a[0] == a[3]){
    if(a[1] ==a[2]){
      check = 1;
    }else{
      check = 0;
    }
  }else{
    check = 0;
  }
  
  if (check == 0){
    printf("No");
  }else{
    printf("Yes");
  }
  return 0;
}
