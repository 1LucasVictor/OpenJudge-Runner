#include<stdio.h>
int main(void){
int n,i;
  int no=0;
  scanf("%d", &n);
  int a[n];
  for(i=0;i<n;i++){
  scanf("%d", &a[i]);
  }
for(i=0;i<n;i++){
if(a[i]%2==0){
  if( a[i]%5!=0 && a[i]%3!=0 ){
  no++;
  }
}
} 
 if(no!=0){
 printf("DENIED\n");
 }
  else if(no==0){
  printf("APPROVED\n");
  }
}