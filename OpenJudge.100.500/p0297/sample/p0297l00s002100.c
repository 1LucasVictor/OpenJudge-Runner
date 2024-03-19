#include<stdio.h>
#include<string.h>
#define LEN 1000000
  
typedef struct pp{
  char name[100];
  int t;
}P;
 
P Q[LEN+1];
  
int main(){
  int n, i, q, sum =0, last, cnt=0;
  scanf("%d %d", &n, &q);
  
  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }
  i = 1;
  last = n;
  while(1){
    if(Q[i].t > q){
      sum += q;
      strcpy(Q[last+1].name, Q[i].name);
      Q[last+1].t = Q[i].t - q;
      last++;
    } else {
      sum += Q[i].t;
      printf("%s %d\n", Q[i].name, sum);
      cnt++;
    }
    i++;
    if(cnt == n) break;
  }   
  return 0;
}