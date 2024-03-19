#include<stdio.h>
int main(){
  int x,a,b,c;
  scanf("%d",&x);
  a=x/100;
  c=x%10;
  b=(x-a*100-c)/10;
  if(a==7||b==7||c==7){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
}