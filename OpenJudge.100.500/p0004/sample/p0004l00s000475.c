#include<stdio.h>
int main(){
  
  int c,d,a,b,i,temp,j;
  
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
    
    for(j=i;j<200000000;j+=i){
    c=j%a;
    d=j%b;
    if(c==0 && d==0){
      printf("%d\n",j);
      break;
    }
    }
    
  }
  
  return 0;
}