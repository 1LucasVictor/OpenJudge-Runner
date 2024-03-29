#include <stdio.h>
#include <stdlib.h>

typedef struct _n {
  int id;              /* ?????? */
  int num;             /* ??? */
  struct _n *left;     /* ??? -- ?????±?????§ */
  struct _n *right;    /* ??? -- ?????±?????§ */
} _node;

/* ????????¢?´¢??¨????????? -- ?????°????????¨*/
void insert(_node *p1, int id, int num)
{
  _node *p2;

  if (p1->num == 0){
  	p1->num = num;
  }else if (p1->num <= num) {    /* ????????????????????§????????¨??? */
    /* ??????NULL?????????????????°????????????????????¶???????????? */
    if (p1->right == NULL) {
      p2 = malloc(sizeof(_node));
      p2->id = id;
      p2->num = num;
      p2->left = NULL;
      p2->right = NULL;
      p1->right = p2;
    } else {  /* NULL??§???????????°?????´????????????????§???? */
      insert(p1->right, id, num);
    }
  } else {
    /* ??????NULL?????????????????°????????????????????¶???????????? */
    if (p1->left == NULL) {
      p2 = malloc(sizeof(_node));
      p2->id = id;
      p2->num = num;
      p2->left = NULL;
      p2->right = NULL;
      p1->left = p2;
    } else {  /* NULL??§???????????°?????´????????????????§???? */
      insert(p1->left, id, num);
    }
  }
}

//?????????????????¢?????´?????????
void middleprint(_node *p){
	if (p != NULL)
	{
		middleprint(p->left);
		printf(" %d", p->num);
		middleprint(p->right);
	}else{
		return;
	}
}

//?????????????????¢?????´?????????
void preprint(_node *p){
	if (p != NULL)
	{
		printf(" %d", p->num);
		preprint(p->left);
		preprint(p->right);
	}else{
		return;
	}

}

int main(void)
{
	_node *start, *p1;
	int i, nx, key;
	int *x;

	//??¢?´¢??¨???????????°??\???
	scanf("%d", &nx);
	x = calloc(nx-1, sizeof(int));

	/* ?????????????????????????????? */
	start = malloc(sizeof(_node));
	start->id = 0;
	start->num = 0;
	start->left = NULL;
	start->right = NULL;
	p1 = start;

	while(nx--){
		char str[100];
    	scanf("%s", str);
    	if(!strcmp(str, "insert")){
      		scanf("%d", &x[i]);
			insert(p1, i, x[i]);
    	}else{
			middleprint(p1);
			printf("\n");
			preprint(p1);
			printf("\n");
    	}
  	}
/*
	//S?????´??°??????
	for (i = 1; i < nx-1; i++)
	{
		printf("insert ");
		scanf("%d", &x[i]);
		insert(p1, i, x[i]);
	}

	puts("print");
	middleprint(p1);
	printf("\n");
	preprint(p1);
*/
	free(x);
	free(p1);

	return 0;
}