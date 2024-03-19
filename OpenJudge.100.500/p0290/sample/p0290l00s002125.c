#include<stdio.h>
#include<math.h>

int main(void){
  int n;
  int judge=0;
  int count=0;
  scanf("%d", &n);

  int a[n];
  for(int i=0;i<n;i++){
    scanf("%d", &a[i]);
  }

  for(int i=0; i<n; i++){
    judge=0;
    if(a[i]==2){
      count++;
    }
    else if(a[i]%2==0){

    }
    else{


      for(int j=3; j<=sqrt(a[i]); j+=2){
        if(a[i]%j==0){
          judge++;
        }
        if(judge==1){
          break;
        }
      }

      if(judge==0){
        count++;
      }
  }

  }
  printf("%d\n", count);
  return 0;

}

