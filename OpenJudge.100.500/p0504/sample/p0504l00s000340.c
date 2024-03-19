#include<stdio.h>

int main()
{
  int a,b, i;
  scanf("%d%d" , &a, &b);
  i = 0;
  
  while(a>0){
    
  	a = a-b;
  	i = i + 1; 
   
  }
  
  printf("%d\n" , i);
    
    return 0;
}
