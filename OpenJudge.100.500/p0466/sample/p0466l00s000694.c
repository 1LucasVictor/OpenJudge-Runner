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


int main(){
	char s[11], t[11];
	scanf("%s%s", s, t);
	int l = strlen(s);
	int c=1;
	for(int i=0; i<l; i++){
		if(s[i] != t[i]) c=0;
	}
	if(c=0) printf("No\n");
	else printf("Yes\n");
	
	//printf("%ld\n", happy);
	
	return 0;
}