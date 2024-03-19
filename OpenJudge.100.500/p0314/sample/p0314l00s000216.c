#include <stdio.h>

struct Node { int o, p, q;};
struct Node x[10000];
int n;
void pre( int u) {
	if ( u == -1) {
		return ;
	}
	printf(" %d", u);
	pre( x[u].p);
	pre( x[u].q);
	
}

void in( int u) {
	if ( u == -1) {
		return ;
	}
	in( x[u].p);
	printf(" %d", u);
	in( x[u].q);
	
}

void post( int u) {

	if ( u == -1){
		return ;
	}
	post( x[u].p);
	post( x[u].q);
	printf(" %d", u);
	
}

int main() {
	int i, v, p, q, way;
	
	scanf("%d", &n);
	for ( i = 0; i < n; i++) {
		x[i].o = -1;
	}
	
	for ( i = 0; i < n; i++) {
		scanf("%d %d %d", &v, &p, &q);
		x[v].p = p;
		x[v].q = q;
		if ( p != -1) {
			x[p].o = v;
		}
		if ( q != -1) {
			x[q].o = v;
		}
	}
	
	for ( i = 0; i < n; i++) {
		if ( x[i].o == -1) {
			way = i;
		}
	}
	printf("Preorder\n");
	pre(way);
	printf("\n");
	printf("Inorder\n");
	in(way);
	printf("\n");
	printf("Postorder\n");
	post(way);
	printf("\n");
	
	return 0;
}