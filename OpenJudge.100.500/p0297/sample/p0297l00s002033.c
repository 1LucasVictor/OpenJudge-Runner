#include<stdio.h>
#include<string.h>
int isEmpty(void);
int dequeue(void);
void enqueue(int);

int head=0,tail=0,time[100000];
int main(){
  int zanshi,n,q,i,total=0;
  char name[100000][10];
  scanf("%d%d",&n,&q);

  for(i=0;i<n;i++){
    scanf("%s%d",name[i],&time[i]);
    tail++;
  }
  while(isEmpty()==0){
    if(q>=time[head]){
      total+=dequeue();
      printf("%s ",name[head-1]);
      printf("%d\n",total);
    }
    else{
      strcpy(name[tail],name[head]);
      time[head]-=q;
      zanshi=dequeue();
      enqueue(zanshi);     
      total+=q;
    }
  }
  return 0;
}

int isEmpty(){
  if(head==tail)
    return 1;
  else
    return 0;
}

int dequeue(){
  int x;

  x=time[head];
  if(head+1==100000)
    head=0;
  else
    head=head+1;
  return x;
}

void enqueue(int x){

  time[tail]=x;
  if(tail+1==100000)
    tail=0;
  else
    tail=tail+1;
}
  
  

  

