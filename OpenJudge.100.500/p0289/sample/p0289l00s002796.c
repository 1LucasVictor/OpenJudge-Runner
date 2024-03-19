#include<stdio.h>
int main(){
  int a,b,c,d;
  scanf("%d%d",&a,&b);
  if(a>b){
    d=a%b;
    while(d!=0){
      a=b;
      b=d;
      d=a%b;
    }
    printf("%d",b);
  }
  else if(a<b){
    d=b%a;
    while(d!=0){
      b=a;
      a=d;
      c=a%d;
    }
    printf("%d",a);
  }
  else{
    printf("%d",a);
  }
  return 0;
}

