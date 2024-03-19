#include <stdio.h>
int main(){

  int i,j,k,x,n,a[10000];
  long long sum;

  scanf("%d",&n);
  
  for (i = 0; i < n; i++){
  
    scanf("%d",&a[i]);

  }

  for (j = 0; j < (n-1)*2; j++){

    for (i = 0; i < n-1; i++){

      if (a[i] >= a[i+1]){

        x=a[i];
        a[i]=a[i+1];
        a[i+1]=x;

      }

    }

  }

  sum=0;

  for (k = 0; k < n; k++){

    sum=a[k]+sum;

  } 

  printf("%d %d %lld\n",a[0],a[n-1],sum);

    return 0;

}