#include <stdio.h>
#define MAX 1000000
int main(void){
	char s[MAX], t[MAX];
	int n, i;
	int cnt = 0;
	scanf("%s\n", &s);
	scanf("%s", &t);
	//printf("%s %s", s, t);
  	n = strlen(s);
  	//printf("%d", n);
  	for (i = 0; i < n; i++){
		if (s[i] != t [i])
			cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}