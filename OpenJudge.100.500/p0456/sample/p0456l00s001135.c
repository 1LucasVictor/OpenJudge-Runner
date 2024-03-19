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
	char S[200001];
	char T[200001];
	scanf("%s",S);
	scanf("%s",T);
	int count = 0;
	for(int i=0; i<strlen(S);i++){
		if( S[i] != T[i] ) {
			count++;
		}
	}
	printf("%d",count);
}
