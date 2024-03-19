#include <stdio.h>
#include <string.h>

struct Process{
  char name[100];
  int t;
};

struct Process Q[1001];
int n;
void enqueue(struct Process x){
  struct Process S;
  int i;
  S = x;
  for(i = 0 ; i < n ; i++){
    if(i == n-1){
      Q[i] = S;
    }
    else {
      Q[i] = Q[i+1];
    }
  }
}
struct Process dequeue(void){
  struct Process R;
  int i;
  R = Q[0];
  for(i = 0 ; i < n ; i++){
    if(i == n-1){
      n = n-1;
    }
    else {
      Q[i] = Q[i+1];
    }
  }
  return R;   
}

int main(){
  struct Process A;
  int i,q,time1=0,time2=0;
  scanf("%d %d",&n,&q);
  
  for(i = 0 ; i < n ; i++){
    scanf("%s",Q[i].name);
    scanf("%d",&Q[i].t);
  }

  while(1){
    time1 = Q[0].t - q;
    if(time1 <= 0){
      time2 += Q[0].t;
      Q[0].t = time2;
      A = dequeue();
      printf("%s %d\n",A.name,A.t);
      if(n == 0) break;
      
    }
    else {
      Q[0].t = time1;
      enqueue(Q[0]);
      time2 += q;
    }
  }
  return 0;
}