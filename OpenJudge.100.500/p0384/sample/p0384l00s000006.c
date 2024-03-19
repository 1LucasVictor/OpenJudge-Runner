#include<stdio.h> 
int main(void){ 

  int i; 

  char ch; 

  while(1){
      scanf("%c",&ch);
      
      if (ch == '\n')
      break;
    else if(ch>=97&&ch<=122)
      ch=ch-32; 
    else if(ch>=65&&ch<=90) 
      ch=ch+32;
  

  printf("%c", ch); 
  }
  printf("\n");

  return 0; 


} 

