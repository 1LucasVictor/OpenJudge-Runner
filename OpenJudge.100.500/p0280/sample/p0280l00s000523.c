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
#define MAX_BUFFER  5048
#define MAX_N       1024
//============================================================================
typedef struct{
    word row,col;
    word val;
    word pal;
    word res;
}TNode;
//============================================================================
TNode Node[MAX_BUFFER];
TNode *PushNode[MAX_BUFFER];
short NodePtr;
byte  NodeStack[MAX_N];
short StackPtr;
//============================================================================
void prnnode(TNode *node)
{
    printf("row=%3d, col=%3d, val=%4d, pal=%d", node->row, node->col, node->val, node->pal);
    printf("\n");
}
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
short match(TNode *dst, TNode *src)
{
    if (dst->row==src->col && dst->col==src->row)
        return 2;
    if (dst->row==src->col || dst->row==src->row ||
        dst->col==src->row || dst->col==src->col)
        return True;
    return False;
}
//----------------------------------------------------------------------------
short nodepal(TNode *node)
{
    short i; TNode *st;

    for (i=0; i<StackPtr; i++){
        st=&Node[NodeStack[i]];
        if (match(st, node)==True){
            if (st->pal<node->pal){
                node->pal=st->pal;
                nodepal(node);//return node->pal;
            }else
            if (node->pal<st->pal){
                st->pal=node->pal;
                nodepal(st);
            }
        }
    }
    return node->pal;
}
//----------------------------------------------------------------------------
void setnode(TNode *node, word row, word col, word val)
{
    node->row=row;
    node->col=col;
    node->val=val;
    if (row<col)
        node->pal=row;
    else
        node->pal=col;
    //node->pal=nodepal(node->pal, NodePtr);
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
//----------------------------------------------------------------------------
void pushnode(word n)
{
    PushNode[StackPtr]=&Node[n];
    NodeStack[StackPtr++]=n;
    Node[n].pal=nodepal(&Node[n]);
    Node[n].res=True;
#ifdef DESKTOP
    prnnode(&Node[n]);
#endif
}
//----------------------------------------------------------------------------
short existnode(word n)
{
    TNode *node; short i;

    if (!StackPtr)
        return -1;
    for (i=0; i<StackPtr; i++){
        node=&Node[NodeStack[i]];
        if (node->row==n || node->col==n)
            return node->pal;
    }
    return -1;
}
//----------------------------------------------------------------------------
short numnode(void)
{
    short i,v,m; byte *stack;

    stack=malloc(StackPtr);
    memset(stack, 0, StackPtr);
    for (i=0; i<StackPtr; i++)
        stack[Node[NodeStack[i]].pal]=True;
    for (i=m=0; i<StackPtr; i++)
        if (stack[i])
            m++;
    free(stack);
    return m;
}
//----------------------------------------------------------------------------
short tight(short n)
{
    short i,k,v,val; TNode *node;

    for (v=0; 1<numnode(); ){
        for (i=k=0, val=0x7fff; i<NodePtr; i++){
            if (!Node[i].res){
                node=&Node[i];
                if (existnode(node->row)!=existnode(node->col)){
                    if (node->val<val){
                        k=i;
                        val=node->val;
                    }
                }
            }
        }
        if (val!=0x7fff){
            v+=Node[k].val;
            pushnode(k);
        }
    }
    return v;
}
//----------------------------------------------------------------------------
short connect(short n, short ptr)
{
    byte *flags;
    TNode *rptr,*cptr;    short i,j,k; long v;

    flags=malloc(n);
    memset(flags, 0, n);
    for (StackPtr=i=v=0; i<ptr; i++){
        rptr=&Node[i];
        if (!flags[rptr->row] || !flags[rptr->col]){
            flags[rptr->row]=flags[rptr->col]=True;
            v+=rptr->val;
            pushnode(i);
        }
        for (j=k=0; j<n; j++)
            if (!flags[j])
                k++;
        if (!k){
            v+=tight(n);
            break;
        }
    }
    free(flags);
    return v;
}
//----------------------------------------------------------------------------
void input(FILE *file)
{
    long n,m; short i,j,val,row,col; char buffer[20];

    fgets(buffer, sizeof(buffer)-1, file);
    sscanf(buffer, "%ld", &n);
    memset(Node, 0, sizeof(Node));
    memset(PushNode, 0, sizeof(PushNode));
    for (i=NodePtr=0; i<n; i++){
        for (j=0; j<n; j++){
            fscanf(file, "%hd", &val);
            if (0<=val && i<=j){
                //Node[ptr].pal=nodepal(i, n);
                setnode(&Node[NodePtr++], i, j, val);
            }
        }
    }
    sort(Node, NodePtr);
#ifdef DESKTOP
    for (i=m=0; i<NodePtr; i++){
        printf("%d ", i);
        prnnode(&Node[i]);
        if (m<Node[i].val)
            m=Node[i].val;
    }
    printf("max dist.= %d\n", m);
#endif
    printf("%ld\n", connect(n, NodePtr));
}
//============================================================================
#ifndef DESKTOP
int main()
{
    input(stdin);
    return 0;
}
#endif