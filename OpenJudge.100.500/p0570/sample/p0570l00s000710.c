#include<stdio.h>
#include<math.h>
int main (){
	int a,b,l;
	scanf("%d %d",&a,&b);
	if (a>b){
		l=a;
	}
	else l=b;
	int k,c;
	c=0;
	for (k=0;k<l;k++){
		if (abs(a-k)==abs(b-k)){
			printf("%d\n",k);
			k=l;
			c=1;
		}
	}
	if (c==0){
		printf("IMPOSSIBLE\n");
	}
	return 0;
}
