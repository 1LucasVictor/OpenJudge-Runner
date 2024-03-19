#include<stdio.h>
#include<string.h>

struct input{
	int a;
	int b;
	char order[8];
	char p[1001];
};

void replace(char str[1001],struct input *x){
	int i,j=0;
	for (i = x->a; i < (x->b) + 1; i++){
		str[i] = x->p[j];
		j++;
	}
}
void reverse(char str[1001], struct input *x){
	int i;
	char s;
	for (i = 0; i < ((x->b)-(x->a)+1)/2; i++){
		s = str[(x ->a) +i];
		str[(x->a)+i] = str[(x->b)-i];
		str[(x->b)-i] = s;
	}
}
void print(char str[1001], struct input *x){
	int i;
	for (i = x->a; i < (x->b) + 1; i++){
		printf("%c", str[i]);
	}
	putchar('\n');
}

void conning(char str[1001],struct input *x,int q){
	int i;
	for (i = 0; i < q; i++){
		if (strcmp((x->order), "replace") == 0){
			replace(str, x);
		}
		else if (strcmp((x->order), "reverse") == 0){
			reverse(str, x);
		}
		else if ((strcmp((x->order), "print") == 0)){
			print(str, x);
		}
		else
			;
		x++;
	}
}

int main(void){
	int q;
	char str[1001];
	struct input x[100];
	scanf("%s", str);
	scanf("%d", &q);
	int i;
	for (i = 0; i < q; i++){
		scanf("%s %d %d", x[i].order,&x[i].a,&x[i].b);
		if (strcmp(x[i].order, "replace") == 0){
			scanf("%s", x[i].p);
		}
		else
			;
	}

	conning(str, x, q);


	return 0;
}
