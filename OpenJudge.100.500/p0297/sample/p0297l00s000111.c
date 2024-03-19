#include<stdio.h>
#include<string.h>
typedef struct proces{
char name[10];
int time;
int flag;
}P;
P S[100005];
int head,tail,n;
void initialize(){
  head=tail=0;
}
void enqueue(P x){
  S[tail]=x;
  tail=tail+1;
  if ((tail+1)==100000) tail=0;
  else tail++;
}
P dequeue(){
  P x=S[head];
  if (head+1==100000) head=0;
  else head++;
  return x;
}
int min(int a,int b){
  if(a>b) return b;
  else return a;
}
int main(){
int spend=0,c,i,qp;
P in;

initialize();

scanf("%d %d",&n,&qp);
for(i=1;i<=n;i++){
  scanf("%s",S[i].name);
  scanf("%d",&S[i].time);
  S[i].flag=1;
}
head=1;
tail=n+1;
while(head != tail){
  in=dequeue();
  c=min(qp,in.time);
  in.time-=c;
  spend+=c;
  if(in.time>0){
    enqueue(in);
  }
  else if(in.flag==1){
    printf("%s %d\n",in.name,spend);
    in.flag=0;
  }

}
return 0;
}

