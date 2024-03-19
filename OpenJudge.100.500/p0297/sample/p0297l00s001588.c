#include<stdio.h>
#include<string.h>

typedef struct proces{
  char name[10];
  int count;
  int time;
}
  def;

int head,tail,n;
def a[100000];




void enq(def s){
  a[tail]=s;
  tail=(tail+1) % 100000;
}




def deq(){
  def sd=a[head];
  head = (head+1) % 100000;
  return sd;
}

int min(int k,int l){
  
  if(k>l) return l;
  else return k;
}

int main(){
  int tasu,i,q,b,sum=0;
  def t;
  scanf("%d %d",&b,&q);
  for(i=1;i<=b;i++){
    scanf("%s",a[i].name);
    scanf("%d",&a[i].time);
    a[i].count=1;
  }
  head=1;
  tail=b+1;
  while(tail != head){
    t=deq();
    
    tasu=min(q,t.time);
    t.time=t.time-tasu;
    sum=sum+tasu;
    if(t.time>0){
      enq(t);
    }
    
    else if(t.count==1){
      printf("%s %d\n",t.name,sum);
      t.count=0;
    }
  }
  return 0;
}

