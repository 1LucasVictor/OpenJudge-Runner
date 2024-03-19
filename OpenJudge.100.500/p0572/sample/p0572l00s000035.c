#include <stdio.h>
#include <stdlib.h>

int main(){
  int L,R;
  scanf("%d %d",&L,&R);
  int x = L % 2019;
  int y = R % 2019;
  int i,j,k;
  int min = 2019;
  if(R-L >= 673){
    printf("0\n");
  }else if(x > y || x == 0 || y == 0){
    printf("0\n");
  }else{
    for(i=x;i<=y-1;i++){
      for(j=i+1;j<=y;j++){
        k = (i*j) % 2019;
        if(k < min) min = k;
      }
    }
    printf("%d\n",min);
  }
  return 0;
}
