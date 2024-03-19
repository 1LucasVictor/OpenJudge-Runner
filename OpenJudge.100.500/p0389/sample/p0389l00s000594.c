#include <stdio.h>

int main(void)
{
    char cards[400];
    int h, i, j, l, m;
    
    while (1) {
	scanf("%s", cards);
	if (cards[0] == '-' && cards[1] == '\0')
	    break;

	l = 0;
	while (cards[l] != '\0')
	    l++;
	
	scanf("%d", &m);
	for (i = 0; i < m; i++) {
	    scanf("%d", &h);
	    for (j = 0; j < h; j++)
		cards[l + j] = cards[j];
	    for (j = 0; j < l; j++)
		cards[j] = cards[j + h];
	}

	cards[l] = '\n'; cards[l + 1] = '\0';
	printf("%s", cards);
    }
    return 0;
}
