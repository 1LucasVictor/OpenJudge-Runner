#include<stdio.h>

  typedef struct{
    char s[10];
    int t;
  } process;

int main(){

  int n,q,i,sum=0,c=0;
  process p[100000];
  scanf("%d%d",&n,&q);

  for(i=0;i<n;i++){
    scanf("%s%d",p[i].s,&p[i].t);
    if(p[i].t<=100){
      sum+=p[i].t;
      p[i].t=0;
      printf("%s %d\n",p[i].s,sum);
      c++;
    }
    else if(p[i].t>100){
      sum+=100;
      p[i].t-=100;
    }
  }
  while(c!=n){
  for(i=0;i<n;i++){
    if(p[i].t==0)continue;
    else if(p[i].t<=100){
      sum+=p[i].t;
      p[i].t=0;
      printf("%s %d\n",p[i].s,sum);
      c++;
    }
    else if(p[i].t>100){
      sum+=100;
      p[i].t-=100;
	}
  }
  }
  return 0;
}

