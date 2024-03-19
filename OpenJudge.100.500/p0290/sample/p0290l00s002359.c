#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
  int n;
  int count;
  
  scanf("%d",&n);

  if(n < 1 || 10000 < n){
    exit(0);
  }

  int a[n];
  count = n;

  for(int i=0; i<n; i++){

    scanf("%d",&a[i]);

    if(a[i] < 2 || 100000000 < a[i]){
      exit(1);
    }

    if(a[i] != 2 && a[i]%2 == 0){
      count--;
      continue;
    }

    for(int j=3; j<=sqrt(a[i]); j+=2){
      if((a[i]%j) == 0){
	count--;
	break;
      }
    }
  }

    printf("%d\n",count);
    return 0;
}
  

  

