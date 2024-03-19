#include <stdio.h>

int main(){ 
	int l,r,i,j,f,s;
	scanf("%d %d",&l,&r);
	f = l * r % 2019;
	for(i = l;i < r;i++){
		for(j = i + 1;j <= r;j++){
			s = i * j %2019;
			if(s<f) f = s;
		}
	}
	printf("%d",f);
	return 0;
}