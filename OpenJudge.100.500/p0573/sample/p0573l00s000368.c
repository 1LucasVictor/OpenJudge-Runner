#include <stdio.h>

int main(){
  char S[5];
  int flag=1;
  scanf("%s",S);
  char s1,t1,s2,t2;
  s1=t1=s2=t2='\0';
  s1=S[0];
  for(int i=1;i<4;i++){
    if(s1==S[i])
      if(t1=='\0')
        t1=S[i];
      else
        flag=0;
    else if(s2==S[i])
      if(t2=='\0')
        t2=S[i];
      else
        flag=0;
    else
      if(s2=='\0')
        s2=S[i];
      else 
        flag=0;
  }
  if(flag)
  	printf("Yes\n");
  else
    printf("No\n");
  return 0;
}