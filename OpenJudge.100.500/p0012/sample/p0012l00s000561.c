#include<stdio.h>

int main(){

  int data[100], in, i, j;

  i = 0;


  while(scanf("%d",&in) != EOF){
    if(in != 0){
      data[i] = in;
      i++;
    }else{
      i--;
      printf("%d\n",data[i]);
    }
  }


  return 0;

}