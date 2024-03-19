#include<stdio.h>
#include<string.h>
#define LEN 100005
typedef struct pp{ char name[100]; int t; }P;
P Q[LEN+1];
int main(){ 
  int elaps=0,c;
  int i,q,n,sum=0;
  P u;
  scanf("%d %d", &n, &q);
  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name); 
    scanf("%d", &Q[i].t);
  }
  i=1;
  sum=n;
  while(1){
    if(Q[i].t<=q){
      sum--;
      elaps+=Q[i].t;
      printf("%s %d\n",Q[i].name,elaps);
      if(sum==0)break;
    }
    else{
      elaps+=q;
      Q[i].t-=q;
      Q[i+sum].t=Q[i].t;
      strcpy(Q[i+sum].name,Q[i].name);
    }
    i++;
  }
  return 0;
}