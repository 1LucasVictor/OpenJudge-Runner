#include <stdio.h>
int main(void){
  int a[200005],n,i,j,tmp;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
 for (i=0; i<n; ++i) {
  for (j=i+1; j<n; ++j) {
    if (a[i] > a[j]) {
      tmp =  a[i];
      a[i] = a[j];
      a[j] = tmp;
    }
  }
 }
 for(i=0;i<n-1;i++){
   if(a[i+1]==a[i]){
     printf("NO\n");
     return 0;}
 }
  printf("YES\n");
   return 0;

}
