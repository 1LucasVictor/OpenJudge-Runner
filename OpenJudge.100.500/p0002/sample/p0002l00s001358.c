#include <stdio.h>


int main(){

	int hantei[1000];

	int size=0;

	scanf("%d",&size);

	int i=0;

	for(i=0;i<size;i++){

		int a,b,c;

		scanf(" %d %d %d",&a,&b,&c);

		if (a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a){

			hantei[i]=1;

		}else{
			hantei[i]=0;
		}

	}

	for(i=0;i<size;i++){

		if(hantei[i]){

			printf("YES\n");

		}else{

			printf("NO\n");

		}

	}

}