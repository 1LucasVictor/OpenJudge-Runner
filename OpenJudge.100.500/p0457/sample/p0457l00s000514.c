#include <stdio.h>
int main(){
int n,m,k;
scanf("%d %d %d",&n,&m,&k);
int a[n];
int b[m];
int i,l;
int o=0,p=0;

for(i=0;i<n;i++)
	scanf("%d",&a[i]);
for(l=0;l<m;l++)
	scanf("%d",&b[l]);
while(k >= 0){
	if(a[o] < b[p]) {
		k -= a[o];
		o++;
	if(o > n) {
		k -= b[p];
		p++;}
	}
	else {k -= b[p];
	     p++;
	if(p > m) {
		k -=a[o];
		o++;}
	}
}
if((o+p-1)>(n+m)) printf("%d",n+m);
else printf("%d",o+p-1);
}