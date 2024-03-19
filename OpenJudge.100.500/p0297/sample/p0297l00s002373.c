#include<stdio.h>
#include<string.h>
#define LEN 100000
typedef struct pp{
  char name[100];
  int time;
} X;
X Y[LEN];
int head,tail,n;
void enqueue(X);
X dequeue(void);
int min(int,int);
int main(){
  int y,i,a;
  int clock=0;
  X x;
    scanf("%d%d",&n,&y);
    for(i=1;i<=n;i++){
      scanf("%s",Y[i].name);
      scanf("%d",&Y[i].time);
    }
    head=1;
    tail=n+1;
    while(head!=tail){
      x=dequeue();
      a=min(y,x.time);
      x.time-=a;
      clock+=a;
      if(x.time>0)
	enqueue(x);
      else{
	printf("%s %d\n",x.name,clock);
      }
    }
    return 0;
}

      int min(int x,int y){
	return x<y? x : y;
      }
    void enqueue(X x){
      Y[tail]=x;
      tail=(tail+1)%LEN;
    }
    X dequeue(){
      X x=Y[head];
      head=(head+1)%LEN;
      return x;
    }

