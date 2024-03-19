#include<stdio.h>
#include<math.h>

int main() {
	int L, R, a, b;
	int ans;
	
	scanf("%d %d", &L, &R);
	
	if ((L / 2019) == (R / 2019)) {
		ans = (L % 2019)*(L % 2019 +1);
	}
	else {
		ans = 0;
	}

	printf("%d",ans);
	return 0;
}