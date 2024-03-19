#include<stdio.h>

int main(){
  int a,b,c,n;
  scanf("%d",&n);
  
  if(n%10 != 7 && (n-((n/100)*100))/10 != 7 && n/100 != 7)
    printf("No");
  else
    printf("Yes");
}