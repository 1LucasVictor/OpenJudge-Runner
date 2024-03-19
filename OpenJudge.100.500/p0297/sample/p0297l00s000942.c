#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 100000
#define N 10
typedef struct{
  char name[N];
  int time;
} quantum;

int main(){
  int n,q,i;
  int d;
  int num=0,sum=0,tail;
  quantum x[max];

  scanf("%d%d",&n,&q);
  if(n < 1 || n > max)exit(1);
  
  for(i=0 ; i<n ; i++) scanf("%s %d",x[i].name,&x[i].time);

  i=0;
  tail = n;

  while(num != n){
    if(x[i].time <= q){
      sum += x[i].time;
      printf("%s %d\n",x[i].name,sum);
      num++;
    }
    else{
      sum += q;
      strcpy( x[tail].name, x[i].name);
      x[tail].time = x[i].time - q;
      tail++;
    }
    i++;
  }
  return 0;
}