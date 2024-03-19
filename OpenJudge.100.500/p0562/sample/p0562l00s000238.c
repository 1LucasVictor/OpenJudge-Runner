#include <stdio.h>
int main(){
	double a,b;
	int cont=0;
	scanf("%le %le", &a,&b);
	for(int i=0;i<50;++i){
		cont+=1;
		if((b/(a*i)-i)<=1){
			break;
		}
	}
	printf("%d\n",cont );
	return 0;
}