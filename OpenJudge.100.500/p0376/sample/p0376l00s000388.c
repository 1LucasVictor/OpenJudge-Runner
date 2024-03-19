#include<stdio.h>
int main(void) {
  int n;
  scanf("%d",&n);
  int a[n]; 
  for(int b=0;b<n;b++){
    scanf("%d",&a[b]);
  }

  for(int c=n-1;c>=0;c--){
    printf("%d",a[c]);
    if(c==0) printf("\n");
    else printf(" ");
  }    
return 0;
}
