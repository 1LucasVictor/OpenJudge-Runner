#include <stdio.h>
#define N 2000

int main(void){

int i,n,a,b,c,res[N];

scanf("%d",&n);

for(i=0;i<n;i++){

scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);

if(a*a+b*b==c*c || c*c+a*a==b*b || b*b+c*c==a*a) res[i]=1;
else res[i]=0;
}

for(i=0;i<n;i++){
if(res[i]==1) printf("YES\n");
else printf("NO\n");
}

}