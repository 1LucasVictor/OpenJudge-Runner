#include <stdio.h>

int root,c[25][2];

void preParse(int);
void inParse(int);
void postParse(int);

int main()
{
  int n,id,left,right,s[25],p[25],i,j;

  /* input */
  scanf("%d",&n);

  /* 初期化 */
  for(j=0;j<n;j++){
    c[j][0]=-1;
    c[j][1]=-1;
    p[j]=-1;
    s[j]=-1;
  }

  for(i=0;i<n;i++){
    scanf("%d",&id);
    scanf("%d %d",&left,&right);

    if(left!=-1){
      s[left]=right;
      p[left] = id;
    }
    if(right!=-1){
      s[right]=left;
      p[right] = id;
    }
    c[id][0]=left;
    c[id][1]=right;
  }

  /* root */
  for(j=0;j<n;j++){
    if(p[j]==-1) {
      root=j;
    }
  }

  /* output */
  printf("Preorder\n");
  preParse(root);
  printf("\n");
  printf("Inorder\n");
  inParse(root);
  printf("\n");
  printf("Postorder\n");
  postParse(root);
  printf("\n");
  return 0;
}

void preParse(int u){
  if (u == -1) return;
  printf(" %d",u);
  preParse(c[u][0]);
  preParse(c[u][1]);
}

void inParse(int u){
  if (u == -1) return;
  inParse(c[u][0]);
  printf(" %d",u);
  inParse(c[u][1]);
}

void postParse(int u){
  if (u == -1) return;
  postParse(c[u][0]);
  postParse(c[u][1]);
  printf(" %d",u);
}