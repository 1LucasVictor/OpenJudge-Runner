#include<stdio.h>
#include<math.h>
main(){
  int n,i,sum;
  double a=100000,b=100000;
  scanf("%d",&n);

  for(i=0;i<n;i++){
    a=a*1.05;
    b=b*0.05;

    sum=a-b;
    sum=sum%1000;

    if(sum!=0){
    sum=1000-sum;
    a+=sum;
    }
    b=100000;
  }
  
  printf("%.0f\n",a);
  return 0;
}