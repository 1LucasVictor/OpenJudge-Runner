#include<stdio.h>
main(){
  int N,i,a[1000],b[1000],c[1000],x[1000];
  scanf("%d",&N);
  for(i=0;i<N;i++){
    scanf("%d %d %d",&a[i],&b[i],&c[i]);
    if(c[i]*c[i] == a[i]*a[i]+b[i]*b[i]){
      x[i] = 1;
    }
    else if(b[i]*b[i] == a[i]*a[i]+c[i]*c[i]){
      x[i] = 1;
    }
    else if(a[i]*a[i] == c[i]*c[i]+b[i]*b[i]){
      x[i] = 1;
    }
  }
  for(i=0;i<N;i++){
    if(x[i] == 1){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}