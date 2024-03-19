#include<stdio.h>
#include<math.h>

#define N 200000

void main(){
  long int a[N], n, cnt[N];
  scanf("%ld",&n);
  for(int i=1; i<n; i++)
    scanf("%ld ",&a[i]);
  
  for(int i=1; i<n; i++)
    cnt[a[i]-1]++; 
  
  for(int i=0; i<n; i++)
    printf("%ld\n",cnt[i]);
}