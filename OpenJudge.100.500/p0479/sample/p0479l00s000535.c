#include <stdio.h>

int main(){
  int i, j, n,  c=0, k=-1, h;
  scanf("%d",&n);
  int a[n];
  a[0] = 0;
  for(i=1;i<n;i++) {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n-1;i++){
    if(a[i]==k) puts("0");
    else {
      for(j=i+1;j<n;j++){
      if(a[j] == a[i]+1) c++;
      }
      printf("%d\n",c);
    }
    if(c!=0) {
      k++;
      c=0;
    }
  }
  puts("0");
}
      