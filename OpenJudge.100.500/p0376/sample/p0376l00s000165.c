#include<stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  int num[n];
  for( int i=0 ; i<n ; i++ ){
    scanf("%d",&num[i]);
  }
  int ans[n];
  for( int i=n-1 ; i>=0 ; i-- ){
    if( i < n-1 )printf(" ");
    printf("%d",num[i]);
  }
  printf("\n");

}
