#include<stdio.h>
#include<math.h>
int main (void){
int n,d,i,count;
long long int s;
double z;
int x[2*10*10*10*10*10];
int y[2*10*10*10*10*10];
s=0;
z=0;
count=0;
scanf("%d %d",&n,&d);
for(i=0;i<n;i++){
    scanf("%d %d",&x[i],&y[i]); 
    s = x[i]*x[i]+y[i]*y[i];
    z = sqrt(s*1.0);
    if(d>=z)count++;
}
printf("%d",count);
return 0;
}