#include<stdio.h>

int main(){

  int a,b,c;

  scanf("%d %d %d",&a,&b,&c);


  if(a<=c && b<=c){
    if (a<=b){
      printf("%d %d %d\n",a,b,c);
    }
    else{
      printf("%d %d %d\n",b,a,c);
    }
  }
  else if(b<=a && c<=a){
    if(b<=c){
      printf("%d %d %d\n",b,c,a);
    }
    else{
      printf("%d %d %d\n",c,b,a);
    }
  }
  else if(a<=b && c<=b){
    if (a<=c){
      printf("%d %d %d\n",a,c,b);
    }
    else {
      printf("%d %d %d\n",c,a,b);
    }
  }
  return 0;
}