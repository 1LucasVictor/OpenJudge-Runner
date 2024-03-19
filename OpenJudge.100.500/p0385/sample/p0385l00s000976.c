#include<stdio.h>
#include<string.h>
int main(){
  int a,s,i,j,n,sum;
  char x[1001];
  while(1){
    sum=0;
    scanf("%s",x);
    if(strcmp(x,"0")==0){
      break;
    }
    for(i=0;x[i]!='\0';i++){
      n=x[i]-'0';
      sum+=n;
    }
    printf("%d\n",sum);
  }
  return (0);
}