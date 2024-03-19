#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int n, a, b, c, d;
	int i, j;
	int flg;
	char str[300000];
	
	scanf("%d%d%d%d%d", &n, &a, &b, &c, &d);
	
	scanf("%s", str);
	
	flg = 1;
	
	if(c > d) {
		for(i = b - 1; i < d - 2; i++) {
			if( (str[i] == '.') && (str[i + 1] == '.') && (str[i + 2] == '.') ) {
				flg = 0;
			}
		}
		if( (str[b - 2] == '.') && (str[b - 1] == '.') && (str[b] == '.') ) {
			flg = 0;
		}
		if(flg) {
			if( (str[d - 2] == '#') || (str[d] == '#') ) {
				printf("No\n");
				return 0;
			}
			for(i = a - 1; i < c - 2; i++) {
				if( (str[i] == '#') && (str[i + 1] == '#') ) {
					printf("No\n");
					return 0;
				}
			}
			for(i = b - 1; i < d - 2; i++) {
				if( (str[i] == '#') && (str[i + 1] == '#') ) {
					printf("No\n");
					return 0;
				}
			}
		} else {
			for(i = a - 1; i < c - 2; i++) {
				if( (str[i] == '#') && (str[i + 1] == '#') ) {
					printf("No\n");
					return 0;
				}
			}
			for(i = b - 1; i < d - 2; i++) {
				if( (str[i] == '#') && (str[i + 1] == '#') ) {
					printf("No\n");
					return 0;
				}
			}
		}
	} else {
		for(i = a - 1; i < c - 2; i++) {
			if( (str[i] == '#') && (str[i + 1] == '#') ) {
				printf("No\n");
				return 0;
			}
		}
		
		for(i = b - 1; i < d - 2; i++) {
			if( (str[i] == '#') && (str[i + 1] == '#') ) {
				printf("No\n");
				return 0;
			}
		}
	}
	
	printf("Yes\n");
	
	return 0;
}