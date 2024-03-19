#include<stdio.h>

int main()
{
    int n,i,max,min,a[10000];
    long int sum;

    scanf("%d",&n);
    for(i = 0; i < n; i++) {
      scanf("%d",&a[i]);
    }
    
    max = min = a[0];
    sum = 0;

    for(i = 0; i < n; i++) {
      if(a[i] > max) {
        max = a[i];
      }
      if(a[i] < min) {
        min = a[i];
      }
    sum = sum + a[i];
    }

    printf("%d %d %ld\n",min,max,sum);

    return 0;
}