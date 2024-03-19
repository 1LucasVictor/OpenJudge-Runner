#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//typedef long long ll;
int main(void)
{
  char str[11],ttr[12],dm;
  scanf("%s",str);
  scanf("%c",&dm);
  scanf("%s",ttr);
  ///printf("%s",ttr);
  int l=strlen(ttr),ss=strlen(str),flag=1;;
  
  for(int i=0;i<ss;i++){
    if(str[i]!=ttr[i]) flag=0; 
  }
  if(ss+1!=l) flag=0;
  if(flag==1) printf("Yes");
  else printf("No");
  
  return 0;
}