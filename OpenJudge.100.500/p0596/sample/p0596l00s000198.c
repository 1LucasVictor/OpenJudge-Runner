#include<stdio.h>

int main(void) {
  int N,i,count[2]={0,0};
  short int s[100000];
  char S[100001];
    scanf("%s",&S);
  for(i=0;i<100001;i++) {
    if(S[i]=='0')s[i]=0;
    else if(S[i]=='1')s[i]=1;
    else{
      N = i;
      i = 100001;
    }
  }
  for(i=0;i<N;i++) {
    count[s[i]]++;
  }
  if(count[0]<count[1])printf("\n%d\n",count[0]*2);
  else printf("\n%d\n",count[1]*2);
}