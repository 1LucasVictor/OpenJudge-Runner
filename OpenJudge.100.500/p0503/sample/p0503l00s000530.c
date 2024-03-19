#include<stdio.h>
#include<string.h>
int main(){
  	int i,j,n,a[200000];
  	scanf("%d",&n);
  	scanf("%d",&a[0]);
	
  for(i = 1,j = 0;i < n;i++){
      scanf("%d",&a[i]);         
      for(j = i - 1;j >= 0;j--){
           if(a[i] != a[j]){
              continue;
            }else{
              i = n;
              break;
            }	
      }
  }
  
  	if(i == n){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
    return 0;  	
}