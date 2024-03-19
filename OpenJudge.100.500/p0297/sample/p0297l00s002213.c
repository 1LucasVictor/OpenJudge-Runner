#include<stdio.h>
#define N 1000000

typedef struct{
  char name[11];
  int time;
}Job;
void in(Job);
Job out();
int tail;
int head;  Job job[N],j;
int main(){
  int i,n,q,all=0; 
  //inqut
  scanf("%d%d",&n,&q);
  tail=n;
  for(i=0;i<n;i++)scanf("%s%d",job[i].name,&job[i].time);
  //-----
  while(head!=tail){
    j=out();
    if(j.time>q){
      j.time-=q;
      in(j);
      all+=q;
    }
    else{
      printf("%s %d\n",j.name,j.time+all);
      all+=j.time;
    }
  }
  return 0;
}
Job out(){
  int a;
  a=head;
  head++;
  head%=N;
  return job[a];
}
void in(Job j){
  tail++;
  tail%=N;
  job[tail-1]=j;
}

