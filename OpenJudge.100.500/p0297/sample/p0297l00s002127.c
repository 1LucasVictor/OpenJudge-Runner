#include <stdio.h>
#include <string.h>
#define LEN 100005

typedef struct pp{
  char name[100];
  int t;
}P;
void enqueu(P);
P dequeu(void);
int min(int,int);


P Q[LEN+1];
int head,tail,n;

int main(){
  int elaps=0,c,i,q;
  P u;
  scanf("%d%d",&n,&q);

  for(i=1;i<=n;i++){
    scanf("%s",Q[i].name);
    scanf("%d",&Q[i].t);

    }
      tail=n+1;
      head=1;
      while(head!=tail){
  u=dequeu();
  c=min(q,u.t);
  u.t=u.t-c;
  elaps=elaps +c;
  if(u.t>0)enqueu(u);
  else{
    printf("%s %d\n",u.name,elaps);

  }
      }
  return 0;
}

void enqueu(P x){
  Q[tail]=x;
  tail=(tail+1)%LEN;
}

P dequeu(void){
  P x;
  x=Q[head];
  head=(head+1)%LEN;
  return x;
}

int min(int s,int t){
  if(s<t)return s;
  else return t;
}

