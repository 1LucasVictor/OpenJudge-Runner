#include<stdio.h>
#include<string.h>
#define LEN 1000
 
typedef struct pp{
  char name[100];
  int t;
}P;
 
int main(){
  int n, i, q, sum =0;
  P Q[LEN+1];
  scanf("%d %d", &n, &q);
 
  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }
  i = 1;
  while(1){
    if(i == n+1) i = 1;
    int j;
    j = i;
    while(1){
      if(i == n+1) i = 1;
      if(Q[i].t != 0) break;
      i++;
      if(i == j){
        i = -1;
        break;
      }
    }
    if(i == -1) break;
    if(Q[i].t > q){
      sum += q;
      Q[i].t -= q;
    } else {
      sum += Q[i].t;
      Q[i].t = 0;
      printf("%s %d\n", Q[i].name, sum);
    }
    i++;
  }   
  return 0;
}