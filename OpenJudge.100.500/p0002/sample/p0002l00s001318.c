#include <stdio.h>

int main()
{
	int sankaku1,sankaku2,sankaku3;
	int i,n;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d%d%d", &sankaku1, &sankaku2, &sankaku3);
	
		if (((sankaku1*sankaku1) + (sankaku2*sankaku2)) == sankaku3*sankaku3) {
			printf("YES");
		}
		else if (((sankaku3*sankaku3) + (sankaku2*sankaku2)) == sankaku1*sankaku1) {
			printf("YES");
		}
		else if (((sankaku1*sankaku1) + (sankaku3*sankaku3)) == sankaku2*sankaku2) {
			printf("YES");
		}
		else {
			printf("NO");
		}
		
	}
    return 0;
}