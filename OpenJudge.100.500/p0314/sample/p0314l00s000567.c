#include<stdio.h>

typedef struct{
  int a;
  int b;
  int p;
  int s;
}P;

void print(int);
void rec(int,int);
void hei1(int);
void hei2(int);
void hei3(int);

P T[25];
int C[25];
int n,h;

int main(){
  int i,j,L,R,id,r;
  int c[25];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    T[i].a=T[i].b=T[i].p=T[i].s=-1;
  }
  for(i=0;i<n;i++){
    c[i]=-1;
  }
  for(i=0;i<n;i++){
    scanf("%d%d%d",&id,&L,&R);
    if(i==0){
      T[id].a=L;
      T[id].b=R;
      T[L].s=R;
      T[R].s=L;
      c[L]=id;
      c[R]=id;
      C[i]=0;
    }else{
      T[id].a=L;
      T[id].b=R;
      if(c[id]!=-1){
	T[id].p=c[id];
      }
      if(c[L]==-1){
	T[L].p=id;
      }
      if(c[R]==-1){
	T[R].p=id;
      }
      T[L].s=R;
      T[R].s=L;
      c[L]=id;
      c[R]=id;
    }
  }
  for(i=0;i<n;i++){
    if(T[i].p == -1){
      r = i;
    }
  }
  rec(r,0);
  for(i=0;i<n;i++){
  	if(C[i]==0){
		h=i;
		break;
	}
  }
    print(h);
  return 0;
}

void rec(int a,int b){
  C[a] = b;
  if(T[a].a != -1)rec(T[a].a,b+1);
  if(T[a].b != -1)rec(T[a].b,b+1);
}

void print(int a){
  int i,j;
  printf("Preorder\n");
  hei1(a);
  printf("Inorder\n");
  hei2(a);
  printf("Postorder\n");
  hei3(a);
}

void hei1(int u){
	printf(" %d",u);
  if(T[u].a!=-1)hei1(T[u].a);
  if(T[u].b!=-1)hei1(T[u].b);
  if(u==h)printf("\n");
}
void hei2(int u){
	if(u!=-1){
		hei2(T[u].a);
		printf(" %d",u);
		hei2(T[u].b);
		if(u==h)printf("\n");
	}
}
void hei3(int u){
	if(u!=-1){
		hei3(T[u].a);
		hei3(T[u].b);
		printf(" %d",u);
		if(u==h)printf("\n");
	}
}
