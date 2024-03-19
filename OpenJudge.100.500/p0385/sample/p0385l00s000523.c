#include<stdio.h>
#include<string.h>

int main()
{
  char c[1000];
  int sum,i,k,out[1000];
  sum=k=0;
  while(1){
    scanf("%s",c);
    if(c[0]=='0') break;
    for(i=0;i<strlen(c);i++) sum+=c[i]-48;
    out[k]=sum;
    sum=0;
    k++;

  }
  for(i=0;i<k;i++) printf("%d\n",out[i]);
  return 0;
}