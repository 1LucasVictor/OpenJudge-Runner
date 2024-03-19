#include<stdio.h>
#include<math.h>
int main(){
    int a,i,j,ZEROcount;
    int count=0;
    int A[10000];
    scanf("%d",&a);
    for(i = 0;i <= a-1;i++){
        scanf("%d",&A[i]);
    } 
    count = a;
    for(i = 0;i <= a-1;i++){
        if(A[i] == 2){
        }
        else if(A[i] % 2 == 0){
            count--;
        }
        else{
      int t = sqrt(A[i]);
      for(j = 3;j <= t;j = j+2){
        if(A[i] % j == 0){
          count--;
          break;
          }
          }
          }
    }
    printf("%d\n",count);
    return 0;
}

