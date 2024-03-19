#include<stdio.h>

int main(){
  int a,b,c;
  scanf("%d%d",&a,&b);
  if((a+b)>(a-b)){
   c=a+b; 
  }else{
  c=a-b;  
    
  }
  if(c>(a*b)){
    printf("%d",c);
    return 0; 
  }else{
	printf("%d",a*b);    
  }

  
  
  
  
 return 0; 
}