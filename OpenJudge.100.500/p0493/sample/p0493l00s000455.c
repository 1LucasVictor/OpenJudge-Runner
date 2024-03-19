#include<stdio.h>

int main(void){
  int n,c=0,h=0;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    c++;
    if(c==500){
      h+=1000;
      c-=500;
    }else if((n-i)<500 && c==5){
      h+=5;
      c-=5;
    }
  }
  printf("%d\n",h);
  return 0;
}
      
      
      
