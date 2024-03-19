#include<stdio.h>

int main(){
  int bit,i,cnt=0;
  scanf("%d",&bit);
  for(i=0;i<3;i++){
    if(bit%10==1)
      cnt++;
    bit/=10;
  }
  printf("%d\n",cnt);
}