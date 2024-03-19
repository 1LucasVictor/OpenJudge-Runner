#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define N 100000

typedef struct que{
  char name[10];
  int num;
}que;

int main(void){
  int i,n,q,sum=0,head,tail;
  que Q[N];

  scanf("%d %d",&n,&q);
  if(n>N||n<=0) exit(1);

    

  for(i=1;i<=n;i++){
    scanf("%s",Q[i].name);
    scanf("%d",&Q[i].num);
  }

  head=1;
  tail=n+1;

  while(head!=tail){
    if(Q[head].num<=q && Q[head].num!=0){
      sum+=Q[head].num;
      printf("%s ",Q[head].name);
      printf("%d\n",sum);
      head++;
      
    }
    else {
      Q[head].num-=q;
      sum+=q;
      Q[tail]=Q[head];
      tail++;
      head++;
	}
  }

  
  return 0;
}