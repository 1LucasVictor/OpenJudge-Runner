#include<stdio.h>
int main(){
  int a,b,flag = 0;
  scanf("%d%d",&a,&b);
  for(int i = a;i > 1;i--){
    if(b%i == 0){
     flag = 1;
    }
  }
  if(flag == 1){
     printf("%d",a+b);
  }else{
    printf("%d",b-a);
  }
}
