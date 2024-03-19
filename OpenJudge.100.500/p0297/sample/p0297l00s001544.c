#include<stdio.h>

#define N 100000
#define Q 1000

int tl=0,head=0,tail=0;
struct data{
  char name[10];
  int time;
};
int main(){
  struct data c[N];
  int a,b,d,i,j[N];
  scanf(" %d %d",&a,&b);
  for(i=0;i<a;i++){
    scanf(" %s %d",c[i].name,&c[i].time);
    tl+=c[i].time;
  }
  d=tl;
  i=0;
  //for(i=0;i<a;i++)printf("%s %d\n",c[i].name,c[i].time);
  while(i<a){
    if((c[i].time-b)<=0){
      tl-=c[i].time;
      c[i].time=0;
      printf("%s %d\n",c[i].name,d-tl);
    }
    else{c[i].time-=b;tl-=b;j[tail]=i;tail++;}
    i++;
  }
  while(tl>0){
    if((c[j[head]].time-b)<=0){
      tl-=c[j[head]].time;
      c[j[head]].time=0;
      printf("%s %d\n",c[j[head]].name,d-tl);
      head=(head+1)%a;
    }
    else{c[j[head]].time-=b;tl-=b;j[tail]=j[head];tail=(tail+1)%a;head=(head+1)%a;}
  }
} 

