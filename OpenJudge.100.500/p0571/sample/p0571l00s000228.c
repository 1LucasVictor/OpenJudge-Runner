#include<stdio.h>
int main(){
  int a,b,c;
  
  scanf("%d %d %d",&a,&b,&c);
  
  if(a*b < c){
    printf("%d\n",a*b);
  }else{
    printf("%d\n",c);
  }
  return 0;
}