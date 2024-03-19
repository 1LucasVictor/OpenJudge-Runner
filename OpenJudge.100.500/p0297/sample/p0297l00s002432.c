#include<stdio.h>

typedef struct{
  char name[10];
  int time;
} CUSTOMER;

int main(){
  CUSTOMER queue[100000], p;
  int i, n, m, q, t = 0;

  scanf("%d%d",&n, &q);

  for(i = 0; i < n; i++) scanf("%s%d",queue[i].name, &queue[i].time);

  while(1){
    m = n;

    if(queue[0].time > q){
      t += q;
      queue[0].time -= q;
    }

    else{
      t += queue[0].time;
      printf("%s %d\n",queue[0].name, t);
      n--;
    }

    if(n == 0) break;

    else if(m != n){
      for(i = 1; i < m; i++) queue[i - 1] = queue[i];
    }

    else{
      p = queue[0];
      for(i = 1; i < n; i++) queue[i - 1] = queue[i];
      queue[n - 1] = p;
    }
  }

  return 0;
}