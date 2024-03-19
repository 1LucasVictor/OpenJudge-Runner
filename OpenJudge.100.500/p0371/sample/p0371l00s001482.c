#include<stdio.h>
int main(){
int a[100001],d,f,n,S,i;
long long e;
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}
S=a[0];
for(i=1;i<n;i++)if(S>a[i]){
S=a[i];
}
d=a[0];
for(i=1;i<n;i++) if(d<a[i]) d=a[i];
e=0;
for(i=0;i<n;i++) e=e+a[i];
printf("%d %d %ld\n",S,d,e);
return 0;
}
