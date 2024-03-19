#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define LOOP(i,s,e) for(int i=s;i<e;i++)
#define MAX(a,b) (a>b)?a:b
#define MIN(a,b) (a>b)?b:a
#define MAX3(a,b,c) (a>b)?MAX(a,c):MAX(b,c)
#define MIN3(a,b,c) (a>b)?MIN(b,c):MIN(a,c)

int intcmp(const int *a,const int *b) {return (*a - *b);}

int intrcmp(const int *a,const int *b) {return (*b - *a);}

int dblcmp(const double *a,const double *b) { return (*a < *b) ? -1 : (*a == *b) ? 0 : 1; }

int stcmp(const char *a[],const char *b[]) { return(strcmp(*a, *b)); }

int main() {
	int N=0;
	int i=0,j=0;
	bool flag=false;
	scanf("%d",&N);
	LOOP(i,1,10){
		LOOP(j,1,10){
			if((i*j)==N){
				printf("Yes\n");
				flag=true;
				break;
			}
		}
		if(flag) break;
	}
	if(!flag) printf("No\n");
	return 0;
}