#include <stdio.h>

int main(void) {
  int i,j,z,n,a,b[10000],c;
  i=0;
  scanf("%d\n",&n);
  while(i++ < n){
    scanf("%d",&b[i]);
  }
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
       if(b[i]>b[j]){
        a = b[i];
        b[i] = b[j];
        b[j] = a;
      }
      else{
        a=b[n];
      }
    }
  }
  printf("%d ",b[1]);
  for(i=n;i>0;i--){
    for(j=i-1;j>0;j--){
       if(b[i]<b[j]){
        c = b[i];
        b[i] = b[j];
        b[j] = c;
      }
      else{
        c=b[n];
      }
    }
  }
  printf("%d ",b[n]);
  for(z=0;z<n;z++){
    b[z+1] += b[z];
  }
  printf("%d\n",b[n]);
  return 0;
}
