#include<stdio.h>
#include<string.h>

int main(){
  char s[10],t[11];
  scanf("%s\n",s);
  scanf("%s\n",t);
  int k,l,m,count=0;
  k=strlen(s);
  l=strlen(t);
 
      for(int i=0;i<k;i++)
      if(s[i]==t[i])
      count++;
      else break;
      if(count==k)
      printf("Yes");
      else
      printf("No");
 
} 