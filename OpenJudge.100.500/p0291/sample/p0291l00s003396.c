#include <stdio.h>
int main(int argc, const char * argv[])

{
    int count,max=0,i,j;
    int x[200000];
    scanf("%d",&count);
    for(i=0;i<200000;i++){
       scanf("%d",&x[i]);
    }
    for(i=1;i<count;i++){
       for(j=i;j>=0;j--){
          if(x[i]-x[j]>max){
              max=x[i]-x[j];
          }
       }
    }
    printf("%d\n",max);
    return 0;
}