#include <stdio.h>
#define M 100002

//Queue P87

typedef struct{
    char name[10];
    int t;
} Q;


Q Que[M];
int head,tail; //この時Que[M]はリング状になってて、先頭と末尾の表現が必要

void enqueue(Q x){
  Que[tail]=x;
  tail=(tail+1)%M; //キューの末尾に並ばせてtail++(リング状なので%Mが必要)
}

Q dequeue(){
  Q x;
  x=Que[head];   //エンキューと同じ
  head=(head+1)%M;
  return x;
}

int main(void){
  int i,n,q,p=0,s;
  Q in,de;
  head=tail=0;
    
  scanf("%d %d",&n,&q); //n:入力数 q:一回に処理できる時間、処理できない分は後に回す
  for(i=0;i<n;i++){
    scanf("%s %d",in.name,&in.t);
    enqueue(in);
  }
    
  while(head!=tail){ //head==tailはqueueが空っぽ
    de=dequeue();
    s=de.t-q;
    if(s>0) {
      de.t=s;
      enqueue(de);
      p+=q; //p:
    }
    else {
      p+=de.t;
      printf("%s %d\n",de.name,p);
            
    }
  }
  return 0;
}

