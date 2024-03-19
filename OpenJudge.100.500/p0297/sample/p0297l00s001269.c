#include<stdio.h>
#include<string.h>
#define max 100000
#define N 10
typedef struct{
  char name[N];
  int time;
} quantum;

int main(){
  int n,q,i;
  int num=0,sum=0,tail;
  quantum x[max];

  scanf("%d%d",&n,&q);
  for(i=0 ; i<n ; i++) scanf("%s %d",x[i].name,&x[i].time);

  i=0;

  while(num != n){
    for(i=0 ; i<N ; i++){
      if(x[i].time <= q && x[i].time > 0){
	sum += x[i].time;
	x[i].time -= q;
	printf("%s %d\n",x[i].name,sum);
	num++;
      }
      else if(x[i].time > q && x[i].time > 0) {
	sum += q;
	x[i].time -= q;
      }
    else continue;
    }
    i=0;
  }
      
	
  return 0;
}