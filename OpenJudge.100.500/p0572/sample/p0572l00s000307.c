#include <stdio.h>
int main(void) {
  int L,R,x;
  scanf("%d%d", &L,&R);
  x=0;

  int mins=2019;

  for(int i=L;i<R+1;i++){


    for(int j=L+1;j<R+1;j++){
      x=i*j%2019;

      if(x<mins){
        mins=x;
      }
    }
  }
  printf("%d\n",mins);
  return 0;
}
