#include <stdio.h>

#define N 100000
#define Q 1000

void enq1(int);
int deq1(void);
void enq2(int);
int deq2(void);

int head=0,tail=0,p;
int S1[N],S2[N];

int main(){

  int n,q,i,T=0,a,b,c=0;
  char name[N][10];
  int time[N];

  scanf("%d %d",&n,&q);

  for(i=0 ; i<n ; i++){
    scanf("%s %d",name[i],&time[i]);
    enq1(time[i]);
    enq2(i);
  }


  while(1){
    a=deq1();
    b=deq2();
    if(a-q<=0){
      T+=a;
      printf("%s %d\n",name[b],T);
      c++;
      if(c==n) break;
    }
    else{
      T+=q;
      a-=q;
      enq1(a);
      enq2(b);
    }
  }

  return 0;
}

void enq1(int n){
  S1[tail]=n;
  tail++;
}

int deq1(){
  head++;
  return S1[head-1];
}

void enq2(int n){
  S2[tail]=n;
  tail++;
}

int deq2(){
  head++;
  return S2[head-1];
}