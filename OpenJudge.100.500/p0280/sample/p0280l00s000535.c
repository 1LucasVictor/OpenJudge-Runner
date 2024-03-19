#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

//============================================================================
#define pred(x) ((x)-1)
#define succ(x) ((x)+1)
#define True    1
#define False   0
typedef unsigned short word;
typedef unsigned char  byte;
//============================================================================
#define MAX_BUFFER  2048
//============================================================================
typedef struct{
    byte row,col;
    byte val;
    byte res;
}TNode;
//============================================================================
TNode Node[MAX_BUFFER];
//============================================================================
void prnnode(TNode *node)
{
    printf("row=%d, col=%d, val=%d", node->row, node->col, node->val);
    printf("\n");
}
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
void setnode(TNode *node, byte row, byte col, byte val)
{
    node->row=row;
    node->col=col;
    node->val=val;
}
//============================================================================
short sort(TNode *ary, int n)
{
    short i,j,k,l, cnt; TNode chg;

    for (k=cnt=0, l=n; k<n-1; k++, l--)
    for (i=0,j=1; j<l; i++, j++){
        if (ary[j].val<ary[i].val)
            chg=ary[i], ary[i]=ary[j], ary[j]=chg, cnt++;
	}
    return cnt;
}
//----------------------------------------------------------------------------
short connect(short n, short ptr)
{
    byte *node;    short i,j,k,v;

    node=malloc(n*sizeof(byte));
    memset(node, 0, sizeof(byte)*n);
    for (i=v=0; i<ptr; i++){
        if (!node[Node[i].row] || !node[Node[i].col]){
            node[Node[i].row]++;
            node[Node[i].col]++;
            v+=Node[i].val;
#ifdef DESKTOP
            prnnode(&Node[i]);
#endif
        }
        for (j=k=0; j<n; j++)
            if (!node[j])
                k++;
        if (!k)
            break;
    }
    free(node);
    return v;
}
//----------------------------------------------------------------------------
void input(FILE *file)
{
    long n,m; short i,j,ptr,val,row,col; char buffer[20];

    fgets(buffer, sizeof(buffer)-1, file);
    sscanf(buffer, "%ld", &n);
    memset(Node, 0, sizeof(Node));
    for (i=ptr=0; i<n; i++){
        for (j=0; j<n; j++){
            fscanf(file, "%hd", &val);
            if (0<=val){
                setnode(&Node[ptr++], i, j, val);
            }
        }
    }
    sort(Node, ptr);
#ifdef DESKTOP
    for (i=m=0; i<ptr; i++){
        prnnode(&Node[i]);
        if (m<Node[i].val)
            m=Node[i].val;
    }
    printf("max dist.= %d\n", m);
#endif
    printf("%d\n", connect(n, ptr));
}
//============================================================================
#ifndef DESKTOP
int main()
{
    input(stdin);
    return 0;
}
#endif