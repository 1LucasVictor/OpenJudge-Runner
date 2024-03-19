#include <stdio.h>
#define N 100
int main(){
  int i,num,key,j,k;
  int a[N];
  scanf("%d",&num);
  for(i = 0 ; i<num ;i++){
    scanf("%d",&a[i]);
  }
  for(i = 0 ; i<num ;i++){
    printf("%3d",a[i]);
  }
  printf("\n");
  for(i = 1 ; i<=num-1 ;i++){
    key = a[i];
    j = i-1;
  
    while(j>=0 && a[j] >key){
      a[j+1] = a[j];
      j--;
    }
    a[j+1] = key;
    for(k = 0 ; k<num ;k++){
      printf("%3d",a[k]);
    }
    printf("\n");
  }
  return 0;
}
  
    

