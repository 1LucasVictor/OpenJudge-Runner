#include <stdio.h>

main(){
  int n, i, j, k, p, count;
  int data[100000];

  k=0;
  for(i=2;i<=100100;i++){
    p=1;
    for(j=2;j<i/2+1;j++){
      if(i%j==0){
	p=0;
	break;
      }
    }
    if(p==1){
      data[k]=i;
      k++;
    }
  }

  while(1){
    count=0;
    if(scanf("%d", &n)==EOF) break;
    for(i=0;;i++){
      if(data[i]>n) break;
      count++;
    }
    printf("%d\n", count);
  }
  return 0;
}