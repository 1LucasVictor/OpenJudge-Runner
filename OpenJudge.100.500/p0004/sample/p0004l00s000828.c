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
	c=a/i;
	d=b/i;
	temp=c*d*i;
        printf("%d %d\n",i,temp);
	break; 
      }
    }
    
  }
  
  return 0;
}