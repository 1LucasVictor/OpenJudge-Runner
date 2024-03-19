#include<stdio.h>
#include<string.h>

int main(){
  int i,n,temp,start=0,cnt=0,judge=0;
  char s[100000];
  scanf("%s",s);
  n=strlen(s);
  while(n!=1 && n!=0){
    for(i=1;i<n;i++){
      if(i==n-1 && s[i-1]==s[i]){
        if(judge==1)
          s[start++] = s[i];
        else{
          s[start++] = s[i-1]; s[start++] = s[i];
        }
        break;
      }

      if(s[i-1]!=s[i] && judge==0){
        judge = 1; cnt++;
      }else if(s[i-1]==s[i] && judge==0)
        s[start++] = s[i-1];
      else if(judge==1)
        judge=0;
    }
    temp = n; n = start; start=0; judge=0;
    if(temp == n) break;
  }
  printf("%d\n",cnt*2);
  return 0;
}