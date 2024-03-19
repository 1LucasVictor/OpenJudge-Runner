#include<stdio.h>
#include<math.h>
  int main(){
    int i,j,n,tmp,count=0;
    scanf("%d",&n);

    for(i=0;i<n;i++){
      scanf("%d",&tmp);
      for(j=2;j<=sqrt(tmp);j++){
        if(tmp%j == 0) break;
      }
      if(j>sqrt(tmp)||sqrt(tmp)<2){
        count++;
      }
    }

    printf("\n%d\n",count);

    return 0;
  }

