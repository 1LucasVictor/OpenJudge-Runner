#include<stdio.h>
#include<string.h>

typedef struct proces{
  char eee[10];
  int rrr;
  int time;
}def;

int head,n,tail;
def o[100000];

void aaa(def s){
  o[tail]=s;
  tail=(tail+1)%100000;
}

def deq(){
  def sd=o[head];
  head=(head+1)%100000;
  return sd;
}

int min(int k,int l){
  if(k>l) return l;
  else return k;
}

int main(){
  int tasu,i,q,b,sum=0;
  def type;
  scanf("%d %d",&b,&q);
  for(i=1;i<=b;i++){
    scanf("%s",o[i].eee);
    scanf("%d",&o[i].time);
    o[i].rrr=1;
  }
  head=1;
  tail=b+1;
  while(tail != head){
    type=deq();
    tasu=min(q,type.time);
    type.time=type.time-tasu;
    sum=sum+tasu;
    if(type.time>0){
      aaa(type);
    }
    else if(type.rrr==1){
      printf("%s %d\n",type.eee,sum);
      type.rrr=0;
    }
  }
  return 0;
}



