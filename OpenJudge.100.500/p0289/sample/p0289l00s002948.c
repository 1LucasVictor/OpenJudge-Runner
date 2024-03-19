#include<stdio.h>
int gcd(int x,int y);
int main(){
  int x,y;
  int b;
while(1){
  scanf("%d",&x);
  if(x>=1)break;
}
while(1){
  scanf("%d",&y);
if(y<=10*10*10*10*10*10*10*10*10)break;
}
b=gcd(x,y);
printf("%d",b);
printf("\n");
  return 0;
}

int gcd(int x,int y){
int r;
while(x%y!=0){
  r=x%y;
  x=y;
  y=r;
}
  return r;

}

