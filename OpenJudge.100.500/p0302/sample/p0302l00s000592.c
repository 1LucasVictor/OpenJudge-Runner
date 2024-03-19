
#include <stdio.h>
#include <string.h>
#define N 2000000
#define M 20
int sum[N];
char num[M],tum[M];
int C(char x) {
  if(x=='A') return 1;
  if(x=='C') return 2;
  if(x=='G') return 3;
  return 4;
}
int search(int k, int x, int y, int t) {
  if(k==strlen(tum)) {
    if(!t) sum[x]=1;
    return sum[x];
  }
  return search(k+1,x+C(tum[k])*y,y*4,t);
}

int main() {
  int n;
  scanf("%d",&n);
  while(n--) {
    scanf("%s %s",num,tum);
    if(num[0]=='i') search(0,0,1,0);
    else {
      if(search(0,0,1,1)) printf("yes\n");
      else printf("no\n");
    }
  }
  return 0;
}

