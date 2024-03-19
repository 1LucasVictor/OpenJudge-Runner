#include<stdio.h>
#include<string.h>
#define LEN 100005

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head, tail, n;

void enqueue(P );
P dequeue(void);
int calc(int,int);

int main(){
  int e=0,c;
  int i,q;
  P u;
  scanf("%d %d\n", &n, &q);

  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d",&Q[i].t);

  }

  head = 1;
  tail = n+1;
  
  while(head != tail){
    u = dequeue();
    c = calc(q,u.t);
    u.t -= c;;
    e += c;
   

    if(u.t > 0){
      enqueue(u);
    }
    
    else{
      printf("%s %d\n", u.name ,e);
    }
 
  }
  return 0;
}
P dequeue(){
	P x;
	x = Q[head];
	head = (head+1)%LEN;
	return x;
      }
void enqueue(P x){
  Q[tail] = x;
  tail = (tail + 1)%LEN;
}
int calc(int x, int y){
  return x < y ? x:y;
}