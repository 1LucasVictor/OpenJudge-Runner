#include<stdio.h>
#include<string.h>
#define min(a,b) (a)<(b)?(a):(b)
int main (void)
{
  int cnt1=0,cnt0=0,n,ans;
  char s[100010];
  scanf("%s",s);
  n=strlen(s);
  for(int i=0;i<n;i++){
    if(s[i]=='1'){
      //printf("%c\n",s[i]);
      cnt1++;
    }else{
      cnt0++;
      //printf("%c\n",s[i]);
    }
  }
  //printf("cnt0=%d cnt1=%d\n",cnt0,cnt1);
  ans=min(cnt0,cnt1);
  printf("%d",2*ans);
  return 0;
}
