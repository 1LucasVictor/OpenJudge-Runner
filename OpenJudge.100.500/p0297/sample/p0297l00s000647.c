#include<stdio.h>
#include<string.h>
#define LEN 100005
#define L 100000
#define X 1000

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head, tail, n;

void enqueue(P x){
  Q[tail] = x;
  tail = (tail+1)%LEN;
}




P dequeue(){
  P x = Q[head];
  head = (head + 1)%LEN;
  return x;
  

}

int min(int a,int b ){return a<b?a:b;}



int main(){
  int elaps = 0, c;
  int i, q;
  P u;
  scanf("%d %d", &n, &q);
  if(n>L||q > X)
    return 0;
  

  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
    if(Q[i].t>L/2) return 0;
    
  }

  head = 1;tail = n+1;

  while(head != tail){
    u = dequeue();
    c = min(q,u.t);
    u.t -=c;
    elaps += c;
    if(u.t>0) enqueue(u);
    else{
      printf("%s %d\n",u.name,elaps);
    }
  }
  
  
  return 0;
}

