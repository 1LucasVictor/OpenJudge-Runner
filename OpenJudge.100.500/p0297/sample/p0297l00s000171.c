#include<stdio.h>
#include<string.h>
#define LEN 50000
 
typedef struct pp{
  char name[100];
  int t;
}P;
P Q[LEN+1];
 
int main(){
  int n, i, q, cnt=0, head, tail, j;
  long long int sum =0;
  scanf("%d %d", &n, &q);
 
  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }
  i = 1;
  head = 1;
  tail = n;
  while(1){
    if(i >= tail+1) i = head;
    if(Q[i].t > q){
      sum += q;
      Q[i].t -= q;
    } else if(Q[i].t != 0){
      sum += Q[i].t;
      Q[i].t = 0;
      cnt++;
      printf("%s %lld\n", Q[i].name, sum);
    }
    if(cnt == n) break;
    if(head == i && Q[i].t == 0) head++;
    if(tail == i && Q[i].t == 0) tail--;
    i++;
  }   
  return 0;
}