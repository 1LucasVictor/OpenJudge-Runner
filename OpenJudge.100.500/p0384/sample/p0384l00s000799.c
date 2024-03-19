#include<stdio.h>
int main(){
  char a[12000];
  int i,c;
  for(i=0;i<12000;i++){
    scanf("%c",&a[i]);
    if(a[i]=='.'||a[i]==10){
      c=i+1;
      break;

    }
  }
  for(i=0;i<c;i++){
    if(a[i]>=65&&a[i]<=90) a[i]=a[i]+32;
    else if(a[i]>=97&&a[i]<=122)a[i]=a[i]-32;
    printf("%c",a[i]);
    if(i==c-1&&a[i]!=10)printf("\n");
  }
  return 0;
}