#include<stdio.h>

int main(void){
  int a,b,t;
  scanf("%d %d %d",&a,&b,&t);
  int s=1,k=0;
  
  for(int i=0;i<t+0.5;i++){
    if(i==s*a){
      s++;
      k+=b;
    }
  }
  printf("%d",k);
return 0;
}
      
