#include <stdio.h>
#include <math.h>

int judg(int x) {
  int i;
  if( x==2) return 1;
  if(x<2 || x%2==0) return 0;
  for(i=3;i<=sqrt(x);i+=2) {
    if(x%i==0) return 0;
  }
  return 1;
}
    

int main(){
  int i,in,lonely,nakama=0;

  scanf("%d",&in);

  for(i=0;i<in;i++) {
    scanf("%d",&lonely);
    if(judg(lonely)==1) nakama++;
  }

  printf("%d\n",nakama);

  return 0;
}
  

