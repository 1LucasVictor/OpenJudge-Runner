#include <stdio.h>
int main(void)
{
	int n[50];
	int a = 0,i,j,k,l,m;
	int count = 0,sam = 0;

	while (scanf("%d", &n[a]) != EOF) {
		if ((1 <= n[a]) && (n[a] <= 50)) {
			a++;
		}
	}

  for(m=0; m<a;m++){
	  count = 0;
	for (i = 0; i <= 9; i++) {
		for (j = 0; j <= 9; j++) {
			for (k = 0; k <= 9; k++) {
				for (l = 0; l <= 9; l++) {
					sam = l + k + j + i;
					if (sam == n[m]) {
						count++;
					}
			   	}
		    }
		}
	}
	printf("%d\n",count);
}

	return 0;
}