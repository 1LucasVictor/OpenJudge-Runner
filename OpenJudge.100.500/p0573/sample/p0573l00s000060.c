#include<stdio.h>

int main(void){
  char a,b,c,d;

  scanf("%c%c%c%c",&a,&b,&c,&d);

  if((a==b)&&(c==d)){
    if(a!=c){
      printf("Yes\n");
    }
    else{
      printf("No\n");
    }
  }
  else if((a==c)&&(b==d)){
    if(a!=b){
      printf("Yes\n");
    }
    else{
      printf("No\n");
    }
  }
  else if((a==d)&&(b==c)){
    if(a!=b){
      printf("Yes\n");
    }
    else{
      printf("No\n");
    }
  }
  else {
    printf("No\n");
  }

  return 0;
}
