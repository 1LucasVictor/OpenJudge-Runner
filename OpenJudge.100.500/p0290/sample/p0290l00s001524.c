#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
  int n,*x,i,k,judge=0,r=0;

  scanf("%d",&n);

  x = (int *)malloc(sizeof(int) * n);

  for(i=0;i<n;i++){
    scanf("%d",&x[i]);
  }

for(i = 0;i<n;i++){
  judge=1;


  if (x[i] < 2 || x[i]%2==0)judge=0;
  k= 3;
  while (k <= sqrt(x[i])){
    if (x[i] % k ==0)judge=0;
    k = k + 2;
}
if (x[i] == 2)judge =1;
if(judge!=0)r++;
}
printf("%d\n",r );

return 0;
}

