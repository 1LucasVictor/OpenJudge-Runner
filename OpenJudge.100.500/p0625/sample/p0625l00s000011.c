/*
AtCoder Beginner Contest 100 A - Happy Birthday!
結果:
*/

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

#define max(x,y)(x<y?y:x)
#define int long long

//尺取法
//scanf("%d", &N);
//for (i; i < N; ++i) {
//	scanf("%d", &A[i]);
//	if (b[A[i]] == 1) {
//		ans = max(ans, i - j);
//		while (b[A[i]] == 1) {
//			b[A[j++]] = 0;
//		}
//	}
//	b[A[i]] = 1;
//}
//ans = max(ans, i - j);
//printf("%d\n", ans);

//文字列の最大出現
//static int N, i, j, ans;
//static int A, B;
//static char A[50][51];
//static int cnt, max;
//char *max_name;
//
//scanf("%d", &N);
//for (i = 0; i < N; i++) {
//	scanf("%s", A[i]);
//}
//max_name = A[0];
//for (i = 0; i < N; i++) {
//	cnt = 0;
//	for (j = 0; j < N; j++) {
//		if (strcmp(A[i], A[j]) == 0) {
//			cnt++;
//		}
//		if (cnt > max) {
//			max = cnt;
//			max_name = A[i];
//		}
//	}
//}
//printf("%s\n", max_name);

//#define DEBUG1
//#define DEBUG2
//#define DEBUGF

int main() {
	static int N, i, j, ans;
	static int A, B;
	//static char A[50][51];
	static int cnt, max;
	char *max_name;

	//scanf("%d", &N);
	scanf("%d %d", &A, &B);
	//for (i = 0; i < N; i++) {
	//	scanf("%s", A[i]);
	//}

	if ((A + B) <= 16 && (A <= 8 && B <= 8)) {
		printf("%s\n", "Yay!");
	}
	else
	{
		printf("%s\n", ":(");
	}

	//ans = ;
	//printf("%d\n", ans);
	//printf("%s\n", max_name);


#ifdef DEBUGF
	getch();
#endif
	return 0;
}
