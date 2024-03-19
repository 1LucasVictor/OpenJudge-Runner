#include<stdio.h>
int main(void){
  char str[5];
  int i;
  for(i=1;i<5;i++)
    scanf("%c",&str[i]);
  if(str[0]==str[1]||str[0]==str[2]||str[0]||str[3]||str[2]==str[1]||str[1]==str[3]||str[2]==str[3])
    printf("Yes");
  else if(str[0]==str[1]&&str[2]==str[3])
       printf("Yes");
  else if(str[0]==str[2]&&str[1]==str[3])
       printf("Yes");
  else  if(str[0]==str[3]&&str[1]==str[2])
       printf("Yes");
  
  
    
   else
    printf("N0");
 
}