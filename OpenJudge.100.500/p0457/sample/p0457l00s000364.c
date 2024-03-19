#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define BUFSIZE 1000000

int x,n,m;

char p[BUFSIZE];

int cnt = 0 ;


int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int a[BUFSIZE] = {0};

int intlen(){
  for(int i = 0;;i++){
    if(a[i] == 0){
      return i+1;
      break;
    }
  }
}

int b[BUFSIZE] = {0};
int k;
int main(void){
  scanf("%d %d %d",&n,&m,&k);
  for(int i = 0 ;i < n;i++){
    scanf("%d",&a[i]);
    }
    for(int i = 0;i < m;i++){
      scanf("%d",&b[i]);
     }

int a_now = 0;
int b_now = 0;
int time_sum = 0;

for(int i = 0;i < n+m;i++){
  if(a[a_now] > b[b_now]){
    time_sum = b[b_now] + time_sum;
    b_now++;
    cnt++;
  }else{
    time_sum = a[a_now] + time_sum;
    a_now++;
    cnt++;
  }
  if(time_sum >= k) break;
  if(i == n+m-1){
     printf("%d",n+m);
     exit(0);
   }
}



printf("%d",cnt - 1);
return 0;
}
