#include<stdio.h>
int main()
{
  char s[4];
    int a,b,c,i;
    for(i=1;i<=4;i++){
  scanf("%d",&s[i]);
    }
  
  if(s[1]==s[2]||s[2]==s[3]||s[3]==s[4]){
    printf("Bad");
  }else{
    printf("Good");
  }
  return 0;
}