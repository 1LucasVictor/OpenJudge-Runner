#include<stdio.h>
#include<string.h>
int main(){
  int c7=0,c5=0,n;
  for(int i=0;i<3;i++){
    scanf("%d",&n);
    if(n==7)
      c7++;
    else if(n==5)
      c5++;
  }
  if(c7==1&&c5==2)
    printf("YES\n");
  else
    printf("NO\n");
}