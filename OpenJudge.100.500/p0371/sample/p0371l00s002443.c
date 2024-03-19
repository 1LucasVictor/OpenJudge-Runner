#include<stdio.h>
#include<math.h>

int main(){

    int i,a,n,max,min,sum,temp;

    scanf("%d",&n);

    for(i=0;i<n;i++){

      scanf("%d",&a);

      sum += a;

      if(i == 0){
         max=a;
         min=a;
      }

      if(a > max) max=a;
      if(a < min) min=a;

    }

    printf("%d %d %d\n",min,max,sum);

    return 0;

}
