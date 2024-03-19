#include<stdio.h>

int main(){

  int a,b,c,i = 1;
  scanf("%d %d",&a,&b);


  c = a;

  if( b != 1 ){
    while(c < b){
      c = c + a;
      c--;
      i++;
    }
  }

  printf("%d\n",i);

  return 0;

}
