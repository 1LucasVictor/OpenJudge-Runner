#include<stdio.h>
int main(){
int n,a[1001],i;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=n-1;i>=0;i--){
if(i<n-1||i<0) printf(" ");
printf("%d",a[i]);
}
printf("\n");
return 0;
}
