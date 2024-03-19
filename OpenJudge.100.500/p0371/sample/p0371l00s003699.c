#include<stdio.h>
#include<string.h>
int min(int*);
int max(int*);
int sum(int*);
#define FOR for(i=1;i<N;i++)
int N;
main() {
	int i;
	int a[10000];
	scanf("%d", &N);
	for (i = 0;i < N;i++) {
		scanf("%d", &a[i]);
	
	}

	printf("%d %d %d\n",min(a),max(a),sum(a));
	return 0;
	
}
int min(int *KNN) {
	int i;
	long int kotae = KNN[0];
	FOR{
		if (kotae> KNN[i])
			kotae = KNN[i];
     }
	return kotae;


}

int max(int *KNN) {
	int i;
	long long int kotae = KNN[0];
	FOR{
		if (kotae < KNN[i]) {
			kotae = KNN[i];
				}
	}
	return kotae;
	
}

int sum(int *KNN) {
	int i;
	long long int kotae = KNN[0];
	FOR {
		kotae += KNN[i];
	}
	return kotae;
}


