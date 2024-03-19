#include<stdio.h>

typedef struct{
  int no[100];
  int sp;
} ST;

void st(ST *s);
void in(ST *s,int n);
int out(ST *s);

main(){
  int n,i;
  ST s;
  st(&s);

  while(scanf("%d",&n)!=EOF){

    if(n==0 && s.sp>0) printf("%d\n",out(&s));

    else if(n!=0) in(&s,n);
  }

  return 0;
}

void st(ST *s){
  s->sp=0;
}

void in(ST *s,int n){
  s->no[s->sp]=n;
  s->sp++;
}

int out(ST *s){
  s->sp--;
  return(s->no[s->sp]);
}