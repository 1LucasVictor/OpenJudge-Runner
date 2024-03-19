#include <stdio.h>
#include <string.h>

#define LEN 100

typedef struct pp {
  char name[10];
  int ms;
} pc;

int head,tail,n;
pc Q[LEN];

void enqueue(pc x)
{
  Q[tail]=x;
  tail=(tail+1)%LEN;
}

pc dequeue()
{
  pc x=Q[head];
  head=(head+1)%LEN;
  return x;
}

int min(int a,int b)
{
  return (a<b?a:b);  //????°?????????????
    }

int main()
{
  int i,q,cms,elaps=0;
  pc a;

  scanf("%d %d",&n,&q);
  for(i=1;i<=n;i++){
    scanf("%s",Q[i].name);
    scanf("%d",&Q[i].ms);
  }
  head=1;
  tail=n+1;

  while(head!=tail){
    a=dequeue();
    cms=min(q,a.ms);

    a.ms-=cms;  //??????????¨????
    elaps+=cms; //??????????¨????
    
    if(a.ms>0) enqueue(a);
    else{
      printf("%s %d\n",a.name,elaps);
    }
  }
  return 0;
}