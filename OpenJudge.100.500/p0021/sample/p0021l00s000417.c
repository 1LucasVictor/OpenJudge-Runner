#include<stdio.h>
int main(){
int a[5001],dp[5001],i,n,b=-100001;
while(1){
scanf("%d\n",&n);
if(n==0){
break;
}
for(i=0;i<n;i++){
scanf("%d\n",&a[i]);
}
dp[0]=a[0];
for(i=1;i<n;i++){
if(dp[i-1]+a[i]<a[i]){
dp[i]=a[i];
}
else{
dp[i]=dp[i-1]+a[i];
}
}
for(i=0;i<n;i++){
if(b<dp[i]){
b=dp[i];
}
}
printf("%d\n",b);
b=-100001;
}
return 0;
}
