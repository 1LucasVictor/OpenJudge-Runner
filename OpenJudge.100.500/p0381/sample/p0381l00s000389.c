#include <stdio.h>

#define MAX 100

int main(void){
  int n,x;
  int sum_c=0;
  int i;
  int p,q,r;
  int ary[MAX];

  for(i=0;i<MAX;i++){
    ary[i]=i+1;
  }
  
  while(1){
    sum_c=0;
    scanf("%d",&n);
    scanf("%d",&x);

    if(n==0&&x==0){
      break;
    }

    for(p=1;p<=n-2;p++){
      for(q=p+1;q<=n-1;q++){
        for(r=q+1;r<=n;r++){
          if((p+q+r)==x){
            sum_c++;
          }
        }
      }
    }
    printf("%d\n",sum_c);
  }
  return 0;
}