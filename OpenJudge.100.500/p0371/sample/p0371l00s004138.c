#include <stdio.h>
int main (void){
long long int  a[10000],max,min,sum=0;
int n,i;scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%lld",&a[i]);}
for(i=0;i<n;i++){
sum+=a[i];}
max=a[0];
for(i=1;i<n;i++){
if(max<a[i]){
max=a[i];}}
min=a[0];
for(i=1;i<n;i++){
if(min>a[i]){
min=a[i];}}

printf("%lld %lld %lld\n",min,max,sum) ;return 0 ;}