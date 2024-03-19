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
int b[BUFSIZE] = {0};
int k;

int a_now = 0;
int b_now = 0;
int time_sum = 0;


int cal_b(int t_s){
  while(b[b_now] != 0 || t_s < k){
    t_s = b[b_now] + t_s;
    b_now++;
    cnt++;
  }
}
int cal_a(int t_s){
  while(a[a_now] != 0 && t_s <= k){
    t_s = a[a_now] + t_s;
    a_now++;
    cnt++;
  }
}

int main(void){
  scanf("%d %d %d",&n,&m,&k);
  for(int i = 0 ;i < n;i++){
    scanf("%d",&a[i]);
    }
    for(int i = 0;i < m;i++){
      scanf("%d",&b[i]);
     }

for(int i = 0;i < n+m;i++){
  if(time_sum >= k) break;
  if(a[a_now] == 0){
    cal_b(time_sum);
    break;
  }
  if(b[b_now] == 0){
    cal_a(time_sum);
    break;
  }
  if(a[a_now] > b[b_now]){
    time_sum = b[b_now] + time_sum;
    b_now++;
    cnt++;
  }else{
    time_sum = a[a_now] + time_sum;
    a_now++;
    cnt++;
  }
}
if(a[a_now] == 0 && b[b_now] == 0){
  printf("%d",n+m);
  exit(0);
}


printf("%d",cnt - 1);
return 0;
}
