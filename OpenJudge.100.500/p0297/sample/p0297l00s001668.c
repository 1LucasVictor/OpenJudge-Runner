#include<stdio.h>
#include<string.h>
#define N 100000
void enqueue(char*,int,int);
int head=0;
int tail=0;
int time[N];
char name[N][10];
int main(){
  int n,q,i,t=0,ji;
  char mei[10];
  scanf("%d%d",&n,&q);
  for(i=0;i<n;i++){
    scanf("%s%d",mei,&ji);
    enqueue(mei,ji,n);
  }
  
  i=0;
  while(head%(n+1)!=tail%(n+1)){
    if((time[head%(n+1)]-q)<=0){
      t+=time[head%(n+1)];
      printf("%s %d\n",name[head%(n+1)],t);
      head++;
    }else{
      t+=q;
      time[tail%(n+1)]=time[head%(n+1)]-q;
      strcpy(name[tail%(n+1)],name[head%(n+1)]);
      tail++;
      head++;
    }
  }
  return 0;
}

void enqueue(char *na,int ti,int n){
  int next=(tail+1)%(n+1);
  strcpy(name[tail],na);
  time[tail]=ti;
  tail=next;
}

