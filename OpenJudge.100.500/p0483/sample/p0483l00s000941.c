#include<stdio.h>
int main(void) {int n,a,b,c,d,e,f,g;scanf("%d",&n);a=n/100;b=n%100;c=b/10;d=b%10;if(a==7||c==7||d==7)printf("Yes\n");else printf("No\n");return 0;}