#include<stdio.h>

int main(){
  int n,a,b,c,counter;

  while(scanf("%d",&n)!=EOF){
    counter=0;
    for(a=0;a<=9;++a){
      for(b=0;b<=9;++b){
	for(c=0;c<=9;++c)
	  if(0 <= n-a-b-c && n-a-b-c <= 9)
	    counter++;
      }
    }
      printf("%d\n",counter);
  }
  return 0;
}