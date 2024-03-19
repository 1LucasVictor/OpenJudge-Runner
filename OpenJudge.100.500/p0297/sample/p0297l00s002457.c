#include<stdio.h>
#include<string.h>
#define LEN 10000
 
typedef struct pp{
  char name[100];
  int t;
}P;
 
int main(){
  int n, i, q, cnt=0, head, tail, j;
  long long int sum =0;
  P Q[LEN+1];
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
      j = i;
      if(head == i){
        while(1){
          if(j > tail) break;
          if(Q[j].t != 0) break;
          j++;
        }
        head = j;
      } else if(tail == i){
        while(1){
          if(j < head) break;
          if(Q[j].t != 0) break;
          j--;
        }
        tail = j;
      }
    }
    if(cnt == n) break;
    i++;
  }   
  return 0;
}