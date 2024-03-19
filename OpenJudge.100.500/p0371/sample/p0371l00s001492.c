#include <stdio.h>
#define N_MAX 10000

int main(void){

  int a[N_MAX]={0},n,i,j,work;
  double sum;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    sum+=a[i];
  }
  
  for(i=0;i<n;i++){
    for(j=0;j<n-1;j++){
      if(a[j]>a[j+1]){
	work = a[j];
	a[j] = a[j+1];
	a[j+1] = work;
      }
    }
  }
  
  printf("%d %d %.0f\n",a[0],a[n-1],sum);

  return 0;
}