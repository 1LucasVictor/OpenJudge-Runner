#include<stdio.h>
int main(){
  int i,j;
  char w[4];
  for(i=0;i<4;i++)
   scanf("%c",&w[i]);
  
  if((w[0]==w[1]&&w[2]==w[3])||(w[0]==w[2]&&w[1]==w[3])||(w[0]==w[3]&&w[1]==w[2]))
   puts("Yes");
  else puts("No");
return 0;}