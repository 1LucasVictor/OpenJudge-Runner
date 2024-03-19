#include<stdio.h>
#define N 10000
#define Q 500

main(){
int n,q;
int S[N],T[Q];
int i,j,cnt=0;

scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&S[i]);
}
scanf("%d",&q);
for(j=0;j<q;j++){
scanf("%d",&T[j]);
}

for(j=0;j<q;j++){
for(i=0;i<n;i++){
if(T[j]==S[i])cnt++;
}
}

printf("%d\n",cnt);
}