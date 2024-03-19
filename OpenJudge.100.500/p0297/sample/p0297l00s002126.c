#include <stdio.h>

typedef struct{
  char name[10];
  int time;
} P;

int main(void){

  int n,q,head,tail,i,t,x;
  P pro[100000];

  scanf("%d %d",&n,&q);

  for(i=0;i<n;i++){
    scanf("%s %d",pro[i].name,&pro[i].time);
  }

  head = 0;
  tail = n;
  t = 0;
  
  while(head != tail){
    x = pro[head].time - q;
    if(x <= 0){
      t += pro[head].time;
      printf("%s %d\n",pro[head].name,t);
      if(head == 99999){
	head = 0;
      }
      else{
	head++;
      }
      
    }

    else{
      pro[head].time = x;
      pro[tail] = pro[head];
      t += q;
      if(head == 99999){
	head = 0;
      }
      else{
	head++;
      }

      tail++;
    }
  }
  return 0;
}