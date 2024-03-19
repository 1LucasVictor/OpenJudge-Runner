#include<stdio.h>
int main(void){
     int n,a,min,max,sum,i;
     max=-1000000;
     min=1000000;
     sum=0;
     scanf("%d",&n);
     for (i=0;i<n;i++){
          scanf("%d",&a);
          if(a>max){
          max=a;
          }else if(a<min){
          min=a;
          }
          sum+=a;
     }
     printf("%d %d %d\n",min,max,sum);
     return 0;
}
     