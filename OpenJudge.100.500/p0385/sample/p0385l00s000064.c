#include<stdio.h>
#include<string.h>
int main(){
  int i,j,sum,len;
  
  while(1){
    char ch[1001];
    char *l=ch;
  scanf("%s",ch);
  sum=0;
  len=strlen(l);
  for(i=0;i<len;i++){
    j=ch[i]-'0';
    sum=sum+j;
  }
  

  if(ch[0]=='0') break;
  printf("%d\n",sum);
  }
  return 0;
}