#include<stdio.h>
#include<stdlib.h>
long sort(const long *a,const long *b){
return *a-*b;
}

int main(void){
int n;
  scanf("%d",&n);
  long a[n];
  for(int i=0;i<n;i++){
    scanf("%ld",&a[i]);
  }
qsort(a,n,sizeof(a[0]),sort);
  for(int i=0;i<n-1;i++){
	if(a[i]==a[i+1]){
      	printf("NO");
      return 0;
    }
  }
printf("YES");
  return 0;
}