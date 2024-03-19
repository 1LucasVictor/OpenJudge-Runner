#include<stdio.h>
#include<string.h>
#define LENGTH 100005

typedef struct pp{
  char na[10];
  int time;
}X;

X A[LENGTH];
int top,end,num;

void enqueue(X a){
  A[end] = a;
  end = (end +1 )% LENGTH;
}

X dequeue(){
  X a= A[top];
  top = (top + 1) % LENGTH;
  return a;
}

int min(int a, int b){
  return a < b? a:b;
}

int main(){
  int elaps =0,ci;
  int i,q;
  X ui;
  scanf("%d %d",&num,&q);

  for(i=1;i<=num;i++){
    scanf("%s",&A[i].na);
    scanf("%d",&A[i].time);
  }

  top = 1;
  end = num +1;

  while(top != end){
    ui = dequeue();
    ci = min(q, ui.time);
    ui.time -= ci;
    elaps += ci;
    if(ui.time>0) enqueue(ui);
    else{
      printf("%s %d\n",ui.na,elaps);
    }
  }
  return 0;
}

