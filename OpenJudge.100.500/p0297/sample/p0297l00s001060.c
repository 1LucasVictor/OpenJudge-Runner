#include<stdio.h>
#include<string.h>
typedef struct  {
  char name[100];
  int t;
  
} P;
P Q[100000];
int head,tail,n;
int isFull(){
  return head==(tail+1)%100005;
}
void initialize(){
  head=0;
  tail=0;
}
int isEmpty(){
  if(head==tail){
    return 1;
  }
  else return 0;
}
void enqueue(P x){
  if(isFull()){
    fprintf(stderr,"Overflow\n");
  }
  else
    tail=(tail+1)%100005;
   Q[tail]=x;
}

P dequeue(){
  if(isEmpty()){
    fprintf(stderr,"Underflow\n");
    
  }
  if(head+1==10005){
    head=0;
  }
  else{
    head++;
    
 
}
    P x=Q[head];

  return x;
  
}
int min(int a,int b){
  return a < b ? a : b;
}
int main(){
  int L=0,c;
  int i,q;
  P a;
  scanf("%d%d",&n,&q);
  for(i=0;i<n;i++){
    scanf("%s",&Q[i+1].name);
    scanf("%d",&Q[i+1].t);
  }

head=0;
tail=n;
while(head!=tail){
  a=dequeue();
  c=min(q,a.t);
  a.t=a.t-c;
  L=L+c;
  if(a.t>0)enqueue(a);
  else{
    printf("%s %d\n",a.name,L);
  }
 }
 return 0;
 
}
  
      
  