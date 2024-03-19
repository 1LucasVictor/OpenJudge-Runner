#include<stdio.h>
#include<string.h>
#define swap(x, y , type) do{type t = x; x = y; y = t;}while(0)
main()
{
	char command[8], str[1001], temp[1001];
	int n, i, a, b;
	scanf("%s", str);
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%s %d %d", command, &a, &b);
		if(!strcmp(command, "print")){
			for(; a <= b; a++){
				putchar(str[a]);
			}
			putchar('\n');
		}else if(!strcmp(command, "reverse")){
			for(; a < b; a++, b--){
				swap(str[a], str[b], int);
			}
		}else if(!strcmp(command, "replace")){
			scanf(" %s", temp);
			for(; b >= a; b--){
				str[b] = temp[b - a];
			}
		}
	}
}