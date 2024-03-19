#include<stdio.h>
int main(void){
  int i,k=0;
  char a[4];
  scanf("%s",a);
  for(i=1;i<4;i++){
     if(a[i-1]==a[i])k++; 
}  
  if(k==0) printf("good");
  else printf("Bad");
  return 0;
}