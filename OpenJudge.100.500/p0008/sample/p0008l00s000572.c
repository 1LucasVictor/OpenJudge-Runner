#include <stdio.h> 
#define MAX 1000000
int main(void){
int prime[MAX];
int n,i,j,cnt; 
prime[0]=prime[1]=0;
for(i=2;i<MAX;i++) prime[i]=1;
for(i=2;i*i<MAX;i++)
if(prime[i])
for(j=2*i;j<MAX;j+=i)
prime[j]=0; 
while(scanf("%d",&n)!=EOF){
cnt=0;
for(i=2;i<=n;i++)
cnt+=prime[i]; 
printf("%d\n",cnt);
} 
return 0;
}