#include<stdio.h>
#include<string.h>
#define N 1001

int main(){
  int i,j,n;
  int num[N];
  char number[N];
  
  for(n=0;n<N;n++){
    num[n]=0;
  }
  n=0;
  
  while(1){
    scanf("%s",number);
    if(number[0]=='0'&&number[1]=='\0')break;
    for(i=0;i<strlen(number);i++){
      num[n]+=number[i]-'0';
    }
    n++;
  }
 
  for(j=0;j<n;j++){
    printf("%d\n",num[j]);
  }
  
  return 0;
}