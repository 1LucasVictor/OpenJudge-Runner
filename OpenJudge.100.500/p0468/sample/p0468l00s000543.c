#include<stdio.h>
int main(void)
{
   char S[8];
   scanf("%s",S);
    char arc[] = "ARC";
   char abc[] = "ABC";
  
  if( arc == S ){
    printf("%s",abc);
  }else{
    printf("%s",arc);
  }
    
    return 0;
}