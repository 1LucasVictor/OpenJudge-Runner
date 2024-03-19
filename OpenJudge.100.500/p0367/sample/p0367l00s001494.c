#include<stdio.h>
int main(){
  int a,b,c,n;
  n=0;
  for(scanf("%d %d %d",&a,&b,&c); a<=b; a++){
      if(c%a==0){
	n++;
    }
   
  }
  printf("%d\n",n);
  return 0;
}