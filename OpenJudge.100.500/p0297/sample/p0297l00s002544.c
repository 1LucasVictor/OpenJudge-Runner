#include <stdio.h>
#define N 100000

typedef struct{
  int time;
  char name[10];
} DM;

int main(){
  DM it[N];
  int q,n,i,count=0,l=0;
  int head,tail;
  
  scanf("%d %d",&n, &q);
  
  for(i=0 ; i<n ; i++){
    scanf("%s %d",it[i].name, &it[i].time);
  }
  
  head =0;
  tail = n;
  while(head!=tail){
      it[head].time-=100;
      if(it[head].time>0){
	l = tail;
	it[tail] = it[head];
	tail++;
	count += q;
      }
      if(it[head].time<=0){
	count += it[head].time + q;
	printf("%s %d\n",it[head].name,count);	
      }
      if(head==tail)break;
      
      head++;
  }
  return 0;
}

