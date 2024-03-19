#include<stdio.h>
int main(){
  char c=0,s[10],b[300]={};
  int i;
  scanf("%s",s);//printf("a\n");
  for(i=0;s[i];i++)b[s[i]]++;
  for(i=0;i<300;i++){//printf("b\n");
    if(b[i]==2)c++;
  }//printf("c\n");
  printf("%s\n",c==2?"Yes":"No");
  return 0;
}
