#include<stdio.h>
#include<math.h>

int main(){
	
	int d,n,temp=1;
	scanf("%d %d", &d, &n);
	switch(d){
		case 2:
			temp *= 100;
		case 1:
			temp *= 100;
	}
	printf("%d\n", n*temp);
	return 0;
}