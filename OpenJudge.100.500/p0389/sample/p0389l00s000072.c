#include <stdio.h>
#include <string.h>

#define swap(type, a, b) do{type tmp = a; a = b; b = tmp;}while(0);

int main(void)
{
	int n;
	char word[201], ans[2][201];
	int i, j, r0, r1, h;


	while(scanf("%s", word)!=EOF && strcmp(word, "-")!=0){
		r0 = 1;
		r1 = 0;
		strcpy(ans[r0], word);
		scanf("%d", &n);

		for(i=0;i<n;i++){
			swap(int, r0, r1);
//printf("%d %d\n", r0, r1);
			scanf("%d", &h);

			for(j=h;j<strlen(word);j++)
				ans[r0][j-h] = ans[r1][j];
			ans[r0][j-h] = '\0';
			strncat(ans[r0], ans[r1], h);
//printf("%s %s %s\n", word, ans[r0], ans[r1]);

		}

		printf("%s\n", ans[r0]);
	}

	return 0;
}