#include <stdio.h>
#include <string.h>

int main() {
  char S[10];
  char contest1[10] = {'A','B','C','\0'};
  char contest2[10] = {'A','R','C','\0'};
  int size1 = strlen(contest1);
  int size2 = strlen(contest2);
  int cnt1=0,cnt2=0;
  scanf("%s",S);
  for(int i=0;S[i]!='\0';i++) {
    if(S[i]==contest1[i]) {
      cnt1++;
    }
    if(S[i]==contest2[i]) {
      cnt2++;
    }
  }
  if(cnt1==size1) {
    printf("%s",contest2);
  }
  if(cnt2==size2) {
    printf("%s",contest1);
  }
  return 0;
}