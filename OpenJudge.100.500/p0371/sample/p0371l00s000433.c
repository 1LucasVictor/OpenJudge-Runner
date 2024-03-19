

#include<stdio.h> 
int main(void)
{
 int a[10001],n,i,min,max;
 long sum = 0;
 scanf("%d",&n);
 for(i = 0;i < n;i++){ 
scanf("%d",&a[i]);
 if(i == 0){
 min = a[i]; 
 max = a[i];
 } 
else{
 if(min>a[i]){
 min = a[i];
 } 
else if(max<a[i])
{ max = a[i]; }
 } 
sum += (long)a[i];
 } 
printf("%d %d %ld\n",min,max,sum);
 return 0;
 } 



