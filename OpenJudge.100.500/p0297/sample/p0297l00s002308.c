#include<stdio.h>

int n, quon_time, S[100000], now=0, tmp;
char process[100000][10];

void sort(){
  int k=1;
  tmp=S[1];
  for(k=1;k<=n-1;k++)S[k]=S[k+1];
  S[n]=tmp;
}

int main(){
  int i=1,done=0;
  scanf("%d%d", &n, &quon_time);
  while(scanf("%s%d", process[i], &S[i]) != EOF)i++;
  while(done!=n){
    if(i>n)i=1;
    if(S[1]>0){
      tmp=S[1];
      S[1] = S[1] - quon_time;
      if(S[1]<=0){
        now = now + tmp;
        printf("%s %d\n", process[i], now);
        done++;
      }else{
        now = now + quon_time;
      }
    }
    if(n>1)sort();
    i++;
  }
  return 0;
}