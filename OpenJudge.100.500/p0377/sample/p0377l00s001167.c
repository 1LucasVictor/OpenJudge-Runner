#include <stdio.h>
#include <string.h>

void find(char suit[], int cards[]) {
    int i;

    for (i=0; i<13; i++) {
        if (cards[i] != 1) {
	    printf("%s %d\n", suit, i+1);
	}
    }
}

void scanner() {
    int n, x;
    int i;
    char dummy[1];
    int spade[13], heart[13], club[13], diamond[13];

    scanf("%d", &n);

    for (i=0; i<13; i++) {
        spade[i] = 0;
	heart[i] = 0;
	club[i] = 0;
	diamond[i] = 0;
    }
    
    for (i=0; i<n; i++) {
        scanf("%s", dummy);
	
	if (strcmp(dummy, "S") == 0) {
	    scanf("%d", &x);
	    spade[x-1] = 1;
	} else if (strcmp(dummy, "H") == 0) {
	    scanf("%d", &x);
	    heart[x-1] = 1;
	} else if (strcmp(dummy, "C") == 0) {
	    scanf("%d", &x);
	    club[x-1] = 1;
	} else {
	    scanf("%d", &x);
	    diamond[x-1] = 1;
	}
    }

    for (i=0; i<4; i++) {
        if (i==0) find("S", spade);
	if (i==1) find("H", heart);
	if (i==2) find("C", club);
	if (i==3) find("D", diamond);
    }
}

int main(void) {
    scanner();
    return 0;
}
