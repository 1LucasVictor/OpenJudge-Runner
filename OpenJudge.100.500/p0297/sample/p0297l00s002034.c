#include <stdio.h>

int que[1000000],l,r;

void push(int x) {
  que[r]=x;
  r++;
  if(r>=1000000) r=0;
}

int pop() {
  int d=que[l];
  l++;
  if(l>=1000000) l=0;
  return d;
}

int main() {
  l=r=0;
  int n,q,i;
  scanf("%d%d",&n,&q);
  char ch[n][10];
  int c[n];
  for(i=0; i<n; i++) {
    scanf("%s %d",ch[i],&c[i]);
    push(i);
  }
  int sum=0;
  while(l!=r) {
    int x=pop();
    if(q<c[x]) {
      sum+=q;
      c[x]-=q;
      push(x);
    } else {
      sum+=c[x];
      printf("%s %d\n",ch[x],sum);
    }
  }
  return 0;
}
