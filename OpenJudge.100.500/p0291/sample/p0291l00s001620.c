#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 200000

int main (){
int R[MAX],n,i;
int minv;
scanf("%d",&n);
for(i=0;i<n;i++)scanf("%d",&R[i]);
int maxv=-2000000000;
minv=R[0];

for(i=0;i<n;i++){
maxv =  fmax(maxv,R[i]-minv);
minv = fmin(minv,R[i]);
}

printf("%d\n",maxv);
return 0;
}

