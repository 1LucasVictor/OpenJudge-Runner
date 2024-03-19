#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
  int a[10000];
    int n,i,q,j,t,p=0,u=0,o=0;
  scanf("%d",&n);
  if(n<1 || 10000<n) exit(0);
  for(i=0;i<n;i++) {
    scanf("%d",&q);
    a[i]=q;
    if(q<2 || 100000000<q) exit(0);

    p=0;
    if(a[i]==2 ){ o++; continue;}
   if(a[i]%2==0) continue;
    for(j=3;j<sqrt(a[i]);j+=2) {
    t=a[i]%j;
    if(t==0) p++; 
    }
    if(p==0)
    o++;
  }
    printf("%d\n",o);
    return 0;
  }
  
