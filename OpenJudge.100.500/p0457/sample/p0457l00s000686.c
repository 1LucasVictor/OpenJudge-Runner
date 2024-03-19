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

  for(int i = intlen() -1;;i++){
    if(b[cnt] == '\0') break;
    a[i] = b[cnt];
    cnt++;
  }

 qsort(a, n+m, sizeof(int), compare_int);
/*
  for(int i = 0;i < 10;i++) printf("%d\n",a[i]);
*/
int a_cnt = 0;
int a_sum = 0;
for(int i = 0;i < n+m;i++){
  if(a_sum > k){
     break;
   }
   a_cnt++;
     a_sum = a[i] + a_sum;
}
if(a_sum == k){
  printf("%d",n+m);
  exit(0);
}else   printf("%d",a_cnt - 1);
return 0;

}
