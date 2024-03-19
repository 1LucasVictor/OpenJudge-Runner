#include<stdio.h>

int main(){
 long long int n,i,j,cnt=0;
 long long int a[20000];
   scanf("%lld\n",&n);
   scanf("%lld",&a[0]);
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      	    scanf("%lld",&a[j]);
   			if(a[i]==a[j]){
          	printf("NO");
          	return 0;
        }
     }
  }
 printf("YES");
 return 0; 
}