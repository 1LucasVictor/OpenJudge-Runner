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

char s[200100], t[200100];

int main(){
	scanf("%s%s", s, t);
	int len = strlen(s), count=0;
	for(int i=0; i<len; i++){
		if(s[i] != t[i]) count++;
	}
	printf("%d\n", count);
	
	return 0;
}
