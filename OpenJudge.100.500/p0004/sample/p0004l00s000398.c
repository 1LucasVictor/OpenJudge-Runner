#include<stdio.h>
int main(){
  
  int c,d,a,b,i,temp;
  
  while(1){
    
    if(scanf("%d %d",&a,&b)==EOF){
      break;
    }
    
    if(b>a){
      temp=a;
      a=b;
      b=temp;
    }
    
    for(i=b;i>0;i--){
      c=a%i;
    d=b%i;
    if(c==0 && d==0){
      printf("%d\n",i);
      break;
    }
    }
    
    for(i=a;i<200000000;i++){
    c=i%a;
    d=i%b;
    if(c==0 && d==0){
      printf("%d\n",i);
      break;
    }
    }
    
  }
  
  return 0;
}