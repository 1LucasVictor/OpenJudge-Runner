#include <stdio.h>
int main(){
  int a,b,c;
  scanf("%d%d",&a,&b);
  if(a > b){
    while(b != 0){
      c=a%b;
      a=b;
      b=c;
    }
    printf("%d\n",a);
  }if(b > a){
    while(a != 0){
      c=b%a;
      b=a;
      a=c;
    }
    printf("%d\n",b);
  }
  return 0;
}