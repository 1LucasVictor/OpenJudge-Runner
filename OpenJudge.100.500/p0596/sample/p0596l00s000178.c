#include<stdio.h>
#include<string.h>

int main(void) {
  int N,i,j,count=0;
  char S[100001],s[100000];
  for(i=0;i<100001;i++) {
    scanf("%c",&S[i]);
    if(S[i]=='\0') {
      N = i;
      i = 100001;
    }
  }
  for(i=0;i<N/2;i++) {
    for(j=0;j<N-1-count*2;j++) {
      if(S[j]!=S[j+1]) {
        strncpy(s,S+j+2,N-j-1);
        S[j]='\0';
        strcat(S,s);
        count++;
      }
    }
  }
  printf("%d\n",count*2);
}
