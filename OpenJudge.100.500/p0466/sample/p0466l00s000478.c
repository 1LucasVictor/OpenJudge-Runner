#include<stdio.h>
#include<string.h>

int main(){
  char s[10],t[11];
  scanf("%s\n",s);
  scanf("%s\n",t);
  int k,l,m,count=0;
  k=strlen(s);
  l=strlen(t);
  m=k-l;
  if(m==0){
      for(int i=0;i<k-1;i++){
          if(s[i]==t[i])
          count++;
      }
      if(count==m-1)
      printf("Yes");
      else
      printf("No");
  }
  else if(m==1){
      for(int i=0;i<l;i++)
      if(s[i]==t[i])
      count++;
      if(count==l)
      printf("Yes");
      else
      printf("No");
  }
  else if (m==-1){
      for(int i=0;i<k;i++)
      if(s[i]==t[i])
      count++;
      if(count==k)
      printf("Yes");
      else
      printf("No");
      
  }
  else
  printf("No");
}