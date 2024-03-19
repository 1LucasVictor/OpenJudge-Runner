#include<stdio.h>
#include<string.h>
#define LEN 100005

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head, tail, n;

void enqueue(P x){
  Q[tail] = x;
  tail =(tail+1)%LEN;
}

P dequeue(){
  P s;
  s = Q[head];
  head = (head+1)%LEN;
  return s;
}


int main(){
  int elaps = 0, c;
  int i, q;
  P u;
  scanf("%d %d", &n, &q);

  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }
  
  head = 1;
  tail = n+1;
  /*printf("処理を開始\n");  */ //dedug
  while(n!=0){
    u = dequeue();
    c = u.t - q;
    
    if(c <= 0){
      elaps += u.t;
	printf("%s %d\n",u.name,elaps);
      n--;
    }
    else{
      u.t -= q; 
      elaps += q;
      enqueue(u);
    }
    
  }
  
  return 0;
}

