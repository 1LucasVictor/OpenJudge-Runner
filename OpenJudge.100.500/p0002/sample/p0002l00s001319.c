#include<stdio.h>

int main()
{	
	int num;
	int i;
	int a, b, c;
	int ans[100];

	scanf("%d", &num);
	
	for(i = 0; i < num; i++){
		scanf("%d %d %d", &a, &b, &c);
		ans[i] = 0;
		if(a * a == b * b + c * c) ans[i] = 1;
		if(b * b == a * a + c * c) ans[i] = 1;
		if(c * c == a * a + b * b) ans[i] = 1;
		if(a < 1 || b < 1 || c < 1) ans[i] = 0;
	}

	for(i = 0; i < num; i++){
		if(ans[i] == 1) printf("YES\n");
		else if(ans[i] == 0) printf("NO\n");
	}

	return 0;
}