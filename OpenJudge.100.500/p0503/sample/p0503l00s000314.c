#include<stdio.h>

int main(){
 long long int n,i,j,cnt=0;
 long long int a[200001];
   scanf("%lld\n",&n);
  for(i=0;i<n;i++){ scanf("%lld",&a[i]);}
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
   			if(a[i]==a[j]){
          	printf("NO");
          	return 0;
        }
     }
  }
 printf("YES");
 return 0; 
}