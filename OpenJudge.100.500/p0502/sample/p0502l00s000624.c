#include<stdio.h>
#include<string.h>

int main(){
  int n,j=0;
  int a[1000];
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    if(a[i]%2==0){
      if(a[i]%3!=0&&a[i]%5!=0){
 		j++;     
      }
    }
  }
  
  if(j==0) printf("APPROVED");
  else printf("DENIED");
     
 
  return 0;
}