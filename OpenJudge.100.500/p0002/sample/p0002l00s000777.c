#include <stdio.h>
int main(){
	int l1,l2,l3,n,i,j,tmp;
	i=0;
	scanf("%d",&n);
	while(i<n){
		scanf("%d %d %d",&l1,&l2,&l3);
		if(l3*l3==l1*l1+l2*l2||l2*l2==l1*l1+l3*l3||l1*l1==l3*l3+l2+l2)
			printf("YES\n");
		else
			printf("NO\n");
		i++;
	}
	return 0;
}