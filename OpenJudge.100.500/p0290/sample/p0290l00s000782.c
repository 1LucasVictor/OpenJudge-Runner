#include <stdio.h>
#define N 10000
#define MAX 100000000

int main(){

int a[N],i=0,j,count,nagasa,sosuu=0;

scanf("%d",&nagasa);
for(i=0;i<nagasa;i++) scanf("%d",&a[i]);

for(i=0;i<nagasa;i++){
count=0;

for(j=2;j<=MAX;j++){
if(a[i]%j==0) count++;
}

if(count==1) sosuu++;

}

printf("%d\n",sosuu);

  return 0;

}