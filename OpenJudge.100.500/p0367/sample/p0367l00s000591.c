#include <stdio.h>
int main (){
	int a,b,c,count;
	scanf ("%d %d %d",&a,&b,&c);
	for (int i=a;i<=b;i++){
		if (c%i == 0){
			count++;
		}
	}
	printf ("%d\n",count);
	return 0;
}
