#include <stdio.h>

struct tree{
 int id,left,right;
};

struct tree a[10000];

void inparse(int m)
{
 if(m==-1) return;
 inparse(a[m].left);
 printf(" %d",m);
 inparse(a[m].right);
}

void preparse(int m)
{
 if(m==-1) return;
 printf(" %d",m);
 preparse(a[m].left);
 preparse(a[m].right);
}

void postparse(int m)
{
 if(m==-1) return;
 postparse(a[m].left);
 postparse(a[m].right);
 printf(" %d",m);
}

int main(int argc,char const *argv[])
{
 int i,n,m,left,right,id;

 scanf("%d",&n);
 for(i=0;i<n;i++){
  a[i].id=-1;
 }

 for(i=0;i<n;i++){
  scanf("%d %d %d",&m,&left,&right);
  a[m].left=left;
  a[m].right=right;
  if(left!=-1) a[left].id=m;
  if(right!=-1) a[right].id=m;
 }

 for(i=0;i<n;i++){
   if(a[i].id==-1) id==i;
 }

 printf("Preorder\n");
 preparse(id);
 printf("\nInorder\n");
 inparse(id);
 printf("\nPostorder\n");
 postparse(id);
 printf("\n");

 return 0;
}