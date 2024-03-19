
#include<stdio.h>

int main(void){
  int a,b,c,n,cnt;

  while(scanf("%d", &n)!=EOF){
    cnt=0; 
    for(a=0;a<=9;a++)
      for(b=0;b<=9;b++)
	for(c=0;c<=9;c++){
	  if(0<=n-(a+b+c) && n-(a+b+c)<=9)
	    cnt++;
	}
    printf("%d\n",cnt);
  }
  
  return 0;
}