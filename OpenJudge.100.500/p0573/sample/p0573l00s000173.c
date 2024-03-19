#include<stdio.h>
int main()
{
  char s[5];
  scanf("%s",s);
  int cnt=0,i,j;
  for(i=0;i<4-1;i++){
    for(j=i+1;j<4;j++){
      if(s[i]==s[j])
        cnt++;
    }
  }
  if(cnt!=2) printf("No");
  else printf("Yes");
}