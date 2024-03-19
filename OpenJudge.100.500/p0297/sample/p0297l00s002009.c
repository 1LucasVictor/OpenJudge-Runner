#include <stdio.h>
#include <stdlib.h>

#define LEN 100005

typedef struct pp{
 char name [100];
 int t;
}P;

P Q[LEN+1];

int head = 0,tail = 0,n;

int cul (int) ;/* q と m をあげる */

int main () {
  int i,m,q,sum = 0;

 scanf ("%d%d",&n,&q);
 tail = n;
 if (n < 1 || n > 100000) return 0;
 if (q < 1 || q > 1000) return 0;

   for(i = 0; i < n; i++) {
    scanf("%s",Q[i].name);
    scanf ("%d",&Q[i].t);
    sum += Q[i].t;
    if(sum > 1000000)return 0;
  }
  cul (q) ;

 return 0;
}

int cul (int q) {
  int i,j = 0,sum = 0,num = 0;

  while (head != tail){
  if (Q[head].t == 0 ){
   head = (head + 1)%(LEN+1);
   continue;
}
/* ０になる場合 */
  if (Q[head].t <= q){
    sum += Q[head].t;
    Q[head].t = 0;
    printf("%s %d\n",Q[head].name,sum);
    j++;
    if(j == n)return 0;
    head = (head+1)%(LEN+1);
    num++;
  }
  else{
     Q[head].t -= q;
     sum += q;
     Q[tail] = Q[head];
     tail = (tail+1)%(LEN+1);
     head = (head+1)%(LEN+1);
   }
  }
  return 0;
}


