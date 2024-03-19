#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.141592653589793
#define MOD 1000000007

//qsort用、昇順
int compare_int(const void *a, const void *b)
{
	return *(int*)a-*(int*)b;
}
//qsort(data, 10, sizeof(int), compare_int)

//long long int a[100100];

int main(){
	int x, y;
	scanf("%d%d", &x, &y);
	int f=0;
	for(int a=0; a<=100; a++){
		for(int b=0; b<=100; b++){
			if((a+b==x) && (2*a+4*b==y)){
				f=1;
				break;
			}
		}
	}
	if(f==1) printf("Yes\n");
	else printf("No\n");
	//printf("%d", ans+1);
	
	return 0;
}
