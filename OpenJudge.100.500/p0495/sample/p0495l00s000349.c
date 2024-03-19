#include<stdio.h>
int main(){
  char a[3];
  for(int i=0;i<3;i++)
    scanf("%c",&a[i]);
  if(a[0]==a[1] && a[1]==a[2])
    printf("No");
  else
    printf("Yes");
  return 0;
}
