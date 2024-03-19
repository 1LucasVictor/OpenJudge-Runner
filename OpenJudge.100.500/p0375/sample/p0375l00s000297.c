#include <stdio.h>

void process(int n) {
    int i;

    for (i=1; i<=n; i++) {
        if (i % 3 == 0) {
	    printf(" %d", i);
	} else if (i % 10 == 3) {
	    printf(" %d", i);
	}
    }
    printf("\n");
}

void scanner() {
    int n;
    scanf("%d", &n);
    process(n);
}

int main(void) {
    scanner();
    return 0;
}
