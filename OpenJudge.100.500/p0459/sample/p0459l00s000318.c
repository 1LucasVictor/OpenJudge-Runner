#include<stdio.h>
#include<string.h>
#include<math.h>
#include <stdlib.h>
#include<ctype.h>

//qsort
int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

//比較
int max(int a, int b){
	if (a>b) return a;
	else return b;
}

int min(int a,int b) {
	if(a>b) return b;
	else return a;
}


//main関数
int main() {
	int X,Y;
	scanf("%d %d",&X,&Y);
	for(int i=0;i<=X;i++) {
		int sakoda = (2*(X-i) + 4*i);
		if ( sakoda == Y ){
			printf("Yes");
			return 0;
		}
	}	
	printf("No");
	return 0;
}