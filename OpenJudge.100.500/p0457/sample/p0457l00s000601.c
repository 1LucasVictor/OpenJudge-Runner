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

long int a[200100], b[200100];

int main(){
	long int n, m, k;
	scanf("%ld%ld%ld", &n, &m, &k);
	a[0]=0, b[0]=0;
	long int tmp, sum=0;
    int i;
	for(i=1; i<=n; i++){
		scanf("%ld", &tmp);
		if(sum+tmp>k){
			a[i] = -1;
            i++;
            break;
		}
		sum += tmp;
		a[i] = sum;
	}
    for(;i<=n; i++) scanf("%ld", &tmp);
	sum=0;
	for(i=1; i<=m; i++){
		scanf("%ld", &tmp);
		if(sum+tmp>k){
			b[i] = -1;
            i++;
            break;
		}
		sum += tmp;
		b[i] = sum;
	}
    //printf("y\n");
    for(;i<=m; i++) scanf("%ld", &tmp);
    //printf("t\n");
	//for(int i=0; i<=n; i++) printf("%ld\n", a[i]);
	//for(int i=0; i<=m; i++) printf("%ld\n", b[i]);

	long int max=0;
	for(int l=0; l<=n; l++){
		if(a[l]==-1) break;
		for(int j=0; j<=m; j++){
			if(b[j]==-1) break;
			if(a[l]+b[j]>k) break;
			else if(l+j>max) max = l+j;
		}
	}

	printf("%ld\n", max);
	
	
	return 0;
}
