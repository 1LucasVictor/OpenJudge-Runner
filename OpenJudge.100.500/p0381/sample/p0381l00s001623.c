#include<stdio.h>
#include<stdlib.h>

int main(void){

  float p=0.0, q=0.0;
  int r=0, x=0, y=0, z=0, count=0;
  int i, j;

  while(1){
    scanf("%d %d", &r, &x);

    if(r==0 && x==0) break;

    p = (float)x/3;
    for(i=1;i<p;i++){
      y = x - i;
      q = (float)y/2;
      for(j=1;j<q;j++){
        z = y - j;
        if(z < r+1 && j > i){
        //  printf("%d %d %d\n", i, j, z);
        count++;
        }
      }
    }

    printf("%d\n", count++);
  }

  return 0;

}

