#include <stdio.h>
#include <string.h>
#define N 100002
typedef struct A{
  char name[100];
  int time;
}Point;
Point hi[N];
int head=0,tail=0,n;
void in(Point x);
Point de();
int min(int a,int b){
  if(a<b)
    return a;
  else return b;
}
int main(){
  int s=0,c;
  int i,p,t;
  Point k;
  scanf ("%d %d",&p,&t);
  for (i=1;i<=p;i++){
    scanf ("%s",hi[i].name);
    scanf ("%d",&hi[i].time);
  }
  head=1;
  tail=p+1;
  
  while(head!=tail){
    k=de();
    c=min(t,k.time);
    k.time-=c;
    s+=c;

    if (k.time > 0)
      in(k);
    else{
      printf("%s %d\n",k.name,s);
    }
  }

  return 0;
}
void in (Point x){
  hi[tail]=x;
  tail=(tail+1) % N;
}
Point de () {
  Point x =hi[head];
  head =(head+1) % N;
  return x;
}
  

