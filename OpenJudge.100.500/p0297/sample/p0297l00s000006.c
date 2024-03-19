#include <stdio.h>
#define LEN 100005

typedef struct{
  char name[10];
  int t;
} pr;

pr a[LEN];
int head,tail,n;

void enqueue(pr);
pr dequeue();
int min(int a, int b){return a < b ? a : b;} //最小値を返す

int main(){
  int elaps = 0, c;
  int i, q;
  pr b;

  scanf("%d %d",&n,&q);

  for(i=1;i<=n;i++){
  scanf("%s",a[i].name);
  scanf("%d",&a[i].t);
  }
  head = 1;
  tail = n + 1;

  while(head!=tail){
    b = dequeue();
    c = min(q,b.t);
    b.t -= c;
    elaps += c;
    if(b.t>0) {
    enqueue(b);
  } else {
    printf("%s %d\n",b.name,elaps);
  }
}


  return 0;
}

void enqueue(pr b){
  a[tail] = b;
  tail=(tail+1)%LEN;
}

pr dequeue(){
  pr x = a[head];
  head=(head+1)%LEN;
  return x;
}
