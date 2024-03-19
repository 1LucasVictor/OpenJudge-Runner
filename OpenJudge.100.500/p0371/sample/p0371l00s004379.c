#include<stdio.h>
#include<math.h>

int main(){

    int i,a,n,max,min,sum,temp;

    scanf("%d",&n);

    for(i=0;i<n;i++){

      scanf("%d",&a);

      sum = sum + a;

      if(i==1){ min = a; max = a; }

      if(a<min){ temp = min; min = a; a = temp; }
      if(a>max){ temp = max; max = a; a = temp; }

    }

    printf("%d %d %d\n",min,max,sum);

    return 0;

}
