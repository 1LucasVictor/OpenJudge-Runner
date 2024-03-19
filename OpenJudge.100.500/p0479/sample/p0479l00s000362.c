#include<stdio.h>
 
int main(void){
  int n;
  scanf("%d",&n);
  
  int a[n-1];
  int staff[n];
  int i,j,dm,cnt;
  i = 0;
  while(i<n-1){
    scanf("%d",&a[i]);
    staff[i] = 0;
    i++;
  }
  staff[n-1] = 0;
  
  i = 0;
  j = 0;
  cnt = n;
  while(cnt>2){
    i = 0;
    while(i<cnt-2){
      if(a[i]>a[i+1]){
        dm = a[i];
        a[i] = a[i+1];
        a[i+1] = dm;
      }
      i++;
    }
    cnt--;
  }
  
  i = 0;
  j = 1;
  while(i<n-1){
    while(1){
      if(a[i] == j){
        staff[j-1] += 1;
        break;
      }
      else{
        j++;
      }
    }
    i++;
  }
  
  i = 0;
  while(i<n){
    printf("%d\n",staff[i]);
    i++;
  }
  return 0;
}