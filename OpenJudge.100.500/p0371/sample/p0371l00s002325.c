  


#include<stdio.h>

int main(void){

  int n;

int x;

int i;

long long sum;

int min,max;

scanf("%d",&n);

sum = 0;

min = 1000000;

max = -1000000;

for(i = 0;i<n;i++){

    scanf("%d",&x);

    sum+=x;

    if(x<min){

      min=x;

    }

    if(x>max){

      max=x;

    }

  }

  printf("%d %d %lld\n",min,max,sum);

return 0;

}
 