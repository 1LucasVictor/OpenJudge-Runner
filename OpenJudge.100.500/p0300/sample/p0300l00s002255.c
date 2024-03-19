#include <stdio.h>

#define MAX 10000

int main(){

int n,s[MAX],q,t[MAX],i,j,count=0;

scanf("%d",&n);
for(i=0;i<n;i++) scanf("%d",&s[i]);
scanf("%d",&q);
for(i=0;i<q;i++) scanf("%d",&t[i]);

for(i=0;i<n;i++){
for(j=0;j<q;j++){

if(s[i]==t[j]) count++;

}
}

printf("%d\n",count);

return 0;

}