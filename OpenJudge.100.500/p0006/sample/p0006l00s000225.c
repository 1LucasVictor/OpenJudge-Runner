#include <stdio.h>

main(){
  unsigned int s=100000, temp;
  int n, i;

  scanf("%d", &n);
  for(i=0;i<n;i++){
    s=s*105/100;
    if(s%1000!=0){
      temp=s/1000;
      s=(temp+1)*1000;
    }
  }

  printf("%d\n", s);

  return 0;
}