#include<stdio.h>
#include<string.h>
#define LEN 100005

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN];
int head=0, tail=0, n;

void enqueue(P );
P dequeue(void);


int main(){
  int elaps = 0, c,count=0;
  int i, q,x;
  P u;
  scanf("%d %d", &n, &q);

  for ( i = 0; i < n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
    enqueue(Q[i]);
  }

  while(count!=n){
    
    u=dequeue();
    c=u.t-q;
    if(c==0){
      elaps+=q;
      printf("%s %d\n",u.name,elaps);
      count++;
    }
     else if(c<0){
      x=q-(-c);
      elaps+=x;
      printf("%s %d\n",u.name,elaps);
      count++;
    }
     else{
	elaps+=q;
	u.t=c;
	enqueue(u);
	}
  
  }

  return 0;
}

void enqueue(P x){

  Q[tail]=x;
  if(tail+1==n)tail=0;
  else tail++;
}

P dequeue(void){

  P x;

  x=Q[head];
  if(head+1==n) head=0;
  else head=head+1;

  return x;
  }