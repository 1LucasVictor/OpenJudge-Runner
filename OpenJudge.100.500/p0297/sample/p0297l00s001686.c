#include<stdio.h>
#include<string.h>
#define LEN 100005
#define MAX 100000
typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head, tail, n,m;

void enqueue(P x){
  if (isFull() == 1) printf("??¨?????????????????????????????????\n");
  Q[tail] = x;
	 
  if (tail + 1 == MAX) tail = 0;
  else tail++;
 
}

P dequeue(){
  P x;
  if (isEmpty()==1) printf("??¨???????????¢?????????????????????\n");
  x = Q[head];
  
  if (head + 1 == MAX) head = 0;
  else head++;
  return x;
}

void initialize(){
  head = tail = 0;
      }
int isEmpty(){
  if(head == tail) return 1;
  else return 0;
      }
int isFull(){
  if(head == (tail + 1) % MAX) return 1;
  else return 0;
      }

int main(){
  int elaps = 0, c=0;
  int i, q;
  P u;
  scanf("%d %d", &n, &q);
  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }
  head = 1;
  tail = n+1;
  while(n != 0){
    u =Q[head];
    u.t = Q[head].t - q;
    if(u.t > 0){
      elaps = elaps + q;
      enqueue(u);
      Q[head] = dequeue();
    }
    else {
      elaps = elaps + Q[head].t;
      printf("%s",Q[head].name);
      printf(" %d\n",elaps);
      Q[head] = dequeue();
      n--;
    }
  }
      
    

  
  return 0;
}