#include<stdio.h>
#include<string.h>

int main(void) {
  int N,i,j,count[2]={0,0};
  char S[100001],s[100000];
  for(i=0;i<100001;i++) {
    scanf("%c",&S[i]);
    if(S[i]=='\0') {
      N = i;
      i = 100001;
    }
  }
  for(i=0;i<N;i++) {
    if(S[i]=='0')count[0]++;
    else count[1]++;
  }
  if(count[0]<count[1])printf("%d\n",count[0]*2);
  else printf("%d\n",count[1]*2);
}
