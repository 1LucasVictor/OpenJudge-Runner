#include<stdio.h>

int main(void)
{
  int a,b,c,k;
  int i=0;
  for(; a==0 || k==0; a-- && k--){
    i++;
  }
  if(k != 0){
    	for(; b==0 || k==0; b--&& k--){
  	}
  }
  if(k != 0){
    for(; c==0 || k==0; c-- && k--){
    	i--;
    }
  }
  printf("%d", i);
  return 0;
}