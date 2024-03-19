#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
	struct node *parent;
	struct node *child[2];
	int key;
};

void Insert(struct node **root, struct node *p){
	struct node *y = NULL;
	struct node *x = *root;
	while(x!=NULL){
		y = x;
		if(p->key<x->key){
			x = x->child[0];
		}else{
			x = x->child[1];
		}
	}
	p->parent = y;

	if(y==NULL){
		*root = p;
	}else if(p->key<y->key){
		y->child[0] = p;
	}else{
		y->child[1] = p;
	}

}

struct node* find(struct node *root, int p){
	if(root==NULL){
		return NULL;
	}else if(root->key==p){
		return root;
	}else if(root->key>p){
		return find(root->child[0],p);
	}else if(root->key<p){
		return find(root->child[1],p);
	}
	return NULL;
}

struct node* getnextnode(struct node *p){
	if(p->child[0]==NULL){
		return p;
	}
	return getnextnode(p->child[0]);
}

void delete(struct node **root, int p){
	struct node* x = find(*root,p);
	struct node* y = NULL;
	int temp;
	if(x->parent==NULL){
		if(x->child[0]==NULL&&x->child[1]==NULL){
			free(x);
			*root = NULL;
		}else if(x->child[0]!=NULL&&x->child[1]==NULL){
			*root = x->child[0];
			free(x);
		}else if(x->child[0]==NULL&&x->child[1]!=NULL){
			*root = x->child[1];
			free(x);
		}else{
			y = getnextnode(x->child[1]);
			temp = y->key;
			delete(root,y->key);
			x->key = temp;
		}
	}else{
		if(x->child[0]==NULL&&x->child[1]==NULL){
			if(x->parent->child[0]==x){
				x->parent->child[0] = NULL;
				free(x);
			}else if(x->parent->child[1]==x){
				x->parent->child[1] = NULL;
				free(x);
			}
		}else if(x->child[0]!=NULL&&x->child[1]==NULL){
			if(x->parent->child[0]==x){
				x->parent->child[0] = x->child[0];
			}else if(x->parent->child[1]==x){
				x->parent->child[1] = x->child[0];
			}
			x->child[0]->parent = x->parent;
			free(x);
		}else if(x->child[0]==NULL&&x->child[1]!=NULL){
			if(x->parent->child[0]==x){
				x->parent->child[0] = x->child[1];
			}else if(x->parent->child[1]==x){
				x->parent->child[1] = x->child[1];
			}
			x->child[1]->parent = x->parent;
			free(x);
		}else{
			y = getnextnode(x->child[1]);
			temp = y->key;
			delete(root,y->key);
			x->key = temp;
		}
	}
}

/*
void calcDepth(int num){
	int i;
	for(i=0;i<2;i++){
		if(tree[num].child[i] == -1){
			continue;
		}
		tree[tree[num].child[i]].depth = tree[num].depth + 1;
		calcDepth(tree[num].child[i]);
	}
	return;
}
*/

/*
int calcHeight(int num){
	int i;
	int temp;
	int h = -1;
	if(num==-1){
		return -1;
	}
	for(i=0;i<2;i++){
		temp = calcHeight(tree[num].child[i]);
		h = (h>temp?h:temp);
	}
	tree[num].height = h + 1;
	return tree[num].height;
}
*/

void Preorder(struct node *p){
	printf(" %d",p->key);
	if(p->child[0]==NULL){
		if(p->child[1]==NULL){
			return;
		}else{
			Preorder(p->child[1]);
		}
		return;
	}
	Preorder(p->child[0]);
	if(p->child[1]==NULL){
		return;
	}
	Preorder(p->child[1]);
	return;
}

void Inorder(struct node *p){
	if(p->child[0]==NULL&&p->child[1]==NULL){
		printf(" %d",p->key);
		return;
	}else if(p->child[0]==NULL&&p->child[1]!=NULL){
		printf(" %d",p->key);
		Inorder(p->child[1]);
	}else if(p->child[0]!=NULL&&p->child[1]==NULL){
		Inorder(p->child[0]);
		printf(" %d",p->key);
	}else{
		Inorder(p->child[0]);
		printf(" %d",p->key);
		Inorder(p->child[1]);
	}
	return;
}

/*
void Postorder(struct node *p){
	if(p->child[0]==NULL&&p->child[1]==NULL){
		printf(" %d",p->key);
		return;
	}else if(p->child[0]==NULL&&p->child[1]!=NULL){
		Postorder(p->child[1]);
	}else if(p->child[0]!=NULL&&p->child[1]==NULL){
		Postorder(p->child[0]);
	}else{
		Postorder(p->child[0]);
		Postorder(p->child[1]);
		printf(" %d",p->key);
	}
}
*/

int main(){
	int n;
	struct node *root = NULL;
	struct node *temp;
	int temp1;
	int i,j;
	char order[32];
	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%s",order);
		if(strcmp(order,"insert")==0){
			temp = (struct node *)malloc(sizeof(struct node));
			scanf("%d",&temp->key);
			temp->parent = NULL;
			temp->child[0] = NULL;
			temp->child[1] = NULL;
			Insert(&root,temp);
		}else if(strcmp(order,"print")==0){
			Inorder(root);
			printf("\n");
			Preorder(root);
			printf("\n");
		}else if(strcmp(order,"find")==0){
			scanf("%d",&temp1);			
			if(find(root,temp1)==NULL){
				printf("no\n");
			}else{
				printf("yes\n");
			}
		}else if(strcmp(order,"delete")==0){
			scanf("%d",&temp1);
			delete(&root,temp1);
		}
	}
	return 0;
}