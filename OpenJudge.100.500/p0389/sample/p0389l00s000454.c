#include<stdio.h>
#include<string.h>

struct card {
	int m;
	char str[201];
	int h[100];
};

void shuffle(struct card *s){
	int i,j;
	char copy[201]="\0";
	for (i = 0; i < s->m; i++){
		strncpy(copy,&s->str[0], s->h[i]);
		sprintf(s->str, "%s%s",&s->str[s->h[i]],copy); //str[i]~+str[0]~str[i-1]
		j = 0;
		while (copy[j] != '\0'){ //copyの初期化
			copy[j] = '\0';
			j++;
		}
	}
}

int main(void){
	struct card s[10];
	int i=0,j;
	while (1){
		if (i > 10)
			break;

		scanf("%s", &s[i].str);
		if (s[i].str[0] == '-')
			break;
		scanf("%d", &s[i].m);
		for (j = 0; j < s[i].m; j++){
			scanf("%d", &s[i].h[j]);
		}
		i++;
	}

	int n = i;
	for (i = 0; i < n; i++){
		shuffle(&s[i]);
		printf("%s\n", s[i].str);
	}


	return 0;
}
