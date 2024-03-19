#include <stdio.h>
#define max 25
#define nil -1
typedef struct{
  int prev;
  int right;
  int left;
} node;
void PreorderPrint(int);
void InorderPrint(int);
void PostorderPrint(int);
int n;
node data[max];

int main()
{
  int i, id;

  scanf("%d",&n);

  for(i = 0 ; i < n ; i++) data[i].prev = nil;
  
  for(i = 0 ; i < n ; i++){
    scanf("%d",&id);
    scanf("%d%d",&data[id].left,&data[id].right);
    if(data[id].left != nil){
      data[data[id].left].prev = id; }
    if(data[id].right != nil){
      data[data[id].right].prev = id; }
  } 

  for(i = 0 ; i < n ; i++){
    if(data[i].prev == nil) break; }
  
  printf("Preorder\n");
  PreorderPrint(i);
  printf("\nInorder\n");
  InorderPrint(i);
  printf("\nPostorder\n");
  PostorderPrint(i);
  printf("\n");
  
  return 0;
}

void PreorderPrint(int u)
{
  if(u == nil) return;
  printf(" %d",u);
  PreorderPrint(data[u].left);
  PreorderPrint(data[u].right);
}

void InorderPrint(int u)
{
  if(u == nil) return;
  InorderPrint(data[u].left);
  printf(" %d",u);
  InorderPrint(data[u].right);
}

void PostorderPrint(int u)
{
  if(u == nil) return;
  PostorderPrint(data[u].left);
  PostorderPrint(data[u].right);
  printf(" %d",u);
}

