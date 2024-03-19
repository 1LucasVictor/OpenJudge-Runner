#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#define ll long long int
#define lim 100010
#define mod 1e9+7
#define INF 1e9
#define MIN(x,y) ((x)<(y)?(x):(y))
#define MAX(x,y) ((x)<(y)?(y):(x))
#define ABS(x) ((x)>0?(x):-(x))

typedef struct{
	int ind,num;
}data;
int comp(const void *a,const void *b){return ((data*)b)->num - ((data*)a)->num;}

int compare(const void *a,const void *b){return *(int*)a-*(int*)b;}

int main(void){
	int a,b;
	scanf("%d%d",&a,&b);
	if(b<a){
		int tmp=b;
		b=a;
		a=tmp;
	}
	if((b-a)%2==0)printf("%d",b-(b-a)/2);
	else
	printf("IMPOSSIBLE");
	return 0;
}