#include<stdio.h>
#include<stdlib.h>

#define LEN 100000

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN];
int head = 0, tail = 0, n;

void enqueue(P);
P dequeue(void);
int isFULL(void);
int isEMPTY(void);

int main(){
  int elaps = 0, i, q;
  P a, b;

  scanf("%d%d", &n, &q);

  n++;
  
  for(i = 0; i < n - 1; i++){
    scanf("%s%d", a.name, &a.t);
    enqueue(a);
  }

  while(head != tail){
    b = dequeue();
    if(b.t <= q){
      elaps += b.t;
      printf("%s %d\n", b.name, elaps);
    }
    
    else{
      elaps += q;
      b.t -= q;
      enqueue(b);
      }
  }

  return 0;
}

 void enqueue(P x){
   if(isFULL() == 0){
     printf("Buffer over flow!\n");
     exit(1);
   }
   
   Q[tail] = x;

   if(tail + 1 == n)
     tail = 0;

   else
     tail++;

}

P dequeue(){
  P x;

  if(isEMPTY() == 0){
    printf("Buffer under flow!");
  }
   
    x = Q[head];

  if(head + 1 == n)
    head = 0;

  else
    head++;

  return x;
}

int isFULL(){
  if(head == (tail + 1) % n)
    return 0;

  else
    return 1;
}

int isEMPTY(){
  if(head == tail)
    return 0;

  else
    return 1;
}
    
