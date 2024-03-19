#include<stdio.h>
int main(void){
  int k,l,m,n=0,h[101];
  char a[201][101];
  while(1){
    n = 0;
    for(k=1;k<=200;k++){
      for(l=0;l<=100;l++){
        a[k][l]=0;
      }
    }
    scanf("\n");
    for(k=1;k<=200;k++) {
      scanf("%c",&a[k][0]);
      if(a[k][0]=='\n') break;
      n++;
    }
    if(a[1][0]=='-') break;
    scanf("%d",&m);
    for(k=1;k<=m;k++){
    scanf("%d",&h[k]);
    }
    for(l=1;l<=m;l++){
      for(k=1;k<=h[l];k++){
        if(1<=k<=h[l]){
          a[n-k+1][l] = a[h[l]-k+1][l-1];
        }
      }
      for(k=1;k<=n-h[l];k++){
        if(h[l]<k<=n){
          a[k][l] = a[h[l]+k][l-1];
        }
      }
    }
    for(k=1;k<=n;k++){
      printf("%c",a[k][m]);
    }
    printf("\n");
  }
  return 0;
}
