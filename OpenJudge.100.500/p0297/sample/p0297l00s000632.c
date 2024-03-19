#include<stdio.h>
#include <stdlib.h>

typedef struct{
  char name[10];
  int time;
} process;

int main(){
  int head=0,end,ead,count=0,n,q;
  process* p;
  int i;
  scanf("%d%d",&n,&q);
  end=n;
  p=(process*)malloc(sizeof(process)*(n+1));
  for(i=0;i<n;i++){
    scanf("%s",p[i].name);
    scanf("%d",&p[i].time);
  }
  while(head!=end){
    if(p[head].time<=q){
      count+=p[head].time;
      p[head].time=0;
      printf("%s %d\n",p[head].name,count);
    }
    else{
      p[head].time-=q;
      count+=q;
    }
    head++;
    if(head==n+1)
      head=0;
    if(head==0)
      ead=n;
    else
      ead=head-1;
    if(p[ead].time!=0){
      p[end]=p[ead];
      end++;
    }
    if(end==n+1)
      end=0;
  }  
  return 0;
}