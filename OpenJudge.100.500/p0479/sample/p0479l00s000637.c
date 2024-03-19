#include<stdio.h>

#include<string.h>

#include<math.h>

int main(){
long long b,m;
scanf("%lld ",&m);

long long a[m],c[m];
for(b=0;b<m;b++){
 c[b]=0;
 }
long long d;
for(b=0;b<m;b++){
 scanf("%ld",&a[b]);
 d=a[b]-1;
 c[d]++;
 }

for(b=0;b<m;b++)
 printf("%lld\n",c[b]);

return 0;}