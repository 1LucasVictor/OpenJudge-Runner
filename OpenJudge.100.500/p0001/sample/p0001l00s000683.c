#include<stdio.h>
int main(){
  
  int a,b,c,i,j;
  
  for(i=0;i<200;i++){
    if(scanf("%d %d",&a,&b)==EOF){
      break;
    }
    c=a+b;
    
    for(i=0;;i++){
      if(c<1){
	break;
      }
      c=c/10;
    }
    
    printf("%d\n",i);
  }
  
  return 0;
}