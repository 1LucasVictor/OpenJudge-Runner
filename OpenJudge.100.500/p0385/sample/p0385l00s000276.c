#include<stdio.h>
#include<string.h>

int main(){
  int i=0,sum,count=0;
  char a[1002];
  a[0]='a';
  while(1){
    count=0;
    i=0;
    while(!(a[i]=='\n')){
      i++;
      scanf("%c",&a[i]);
      count++;}
    sum=0;
    for(i=1;i<count;i++){
      sum=sum+(a[i]-'0');}
    if(sum==0) break;
    printf("%d\n",sum);}
  return 0;}
  