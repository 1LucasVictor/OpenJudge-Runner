#include<stdio.h>
int main(){
  char a[10];
  scanf("%s",a);
  if(a[0]=='A' &&a[1]=='A' &&a[2]=='A')
    printf("No");
  else if(a[0]=='B' &&a[1]=='B' &&a[2]=='B') 
    printf("No");
  else
    printf("Yes");
}