#include<stdio.h>
long long int min(long long int*);
long long int max(long long int*);
long long int sum(long long int*);
#define FOR for(i=1;i<N;i++)
long long int N;
main() {
	long long int i;
	long long int a[10000];
	scanf("%d", &N);
	for (i = 0;i < N;i++) {
		scanf("%d", &a[i]);
	
	}

	printf("%d %d %d\n",min(a),max(a),sum(a));
	return 0;
	
}
long long int min(long long int *KNN) {
	long long int i;
	long long int kotae = KNN[0];
	FOR{
		if (kotae> KNN[i])
			kotae = KNN[i];
     }
	return kotae;


}

long long  int max(long long int *KNN) {
	long long int i;
	long long int kotae = KNN[0];
	FOR{
		if (kotae < KNN[i]) {
			kotae = KNN[i];
				}
	}
	return kotae;
	
}

long long int sum(long long int *KNN) {
	long long int i;
	long long int kotae = KNN[0];
	FOR {
		kotae += KNN[i];
	}
	return kotae;
}

