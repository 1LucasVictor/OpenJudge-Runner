#include<stdio.h>
#include<string.h>
#define LEN 100005
typedef struct pp{
  char name[100];
  int t;
} P;
P Q[LEN+1],x;
int tail ,head,n;

void enqueue(P);
P dequeue(void );


int main(int argc, char const *argv[]) {
  int q,total=0,i,time;
  P kari;
      scanf("%d%d\n", &n,&q);
  for (i = 1; i <= n; i++) {
    scanf("%s%d\n", Q[i].name, &Q[i].t);
  }
  tail = n+1;
  head = 1;

  while(head != tail) {
    kari = dequeue();
 if(kari.t < q )  time = kari.t;
  else time = q;
   kari.t -= time;
    total += time;
    if(kari.t > 0) enqueue(kari);
 else  printf("%s %d\n", kari.name , total);

/* else {
   Q[head].t -= q;
   total += q;
   kari = dequeue();
  enqueue(kari);
 }
 */
  }
  return 0;
}

void enqueue(P x) {
  //if(head == (tail + 1) % n) printf("error\n");
  Q[tail] = x;
   if(tail + 1 == LEN)
      tail = 0;
  else tail++;
}

P dequeue(void ) {
  //if(head == tail) printf("error\n");
  x = Q[head];
  if(head + 1 == LEN) head = 0;
  else head++;
  return x;
}