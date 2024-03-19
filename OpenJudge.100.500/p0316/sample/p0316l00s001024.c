#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
    int key;
    int left;
    int right;
} Node;
 
void insert(Node*, int, int);
void print1(Node*, int);
void print2(Node*, int);
 
int main()
{
    char s[10];
    Node *t;
    int m;
    int a;
    int i;
 
    scanf("%d", &m);
    t=(Node*)malloc(sizeof(Node)*m);
 
    int count=0;
    for(i=0; i<m; i++){
        scanf("%s", &s);
        if(s[0]=='i'){ scanf("%d", &a); insert(t, count, a); count++; }
        if(s[0]=='p'){
            if(count>0) print1(t, 0);
            printf("\n");
            if(count>0) print2(t, 0);
            printf("\n");
        }
    }
     
    return 0;
 
}
 
void print1(Node *t, int p)
{
    if(t[p].left>=0) print1(t, t[p].left);
    printf(" %d", t[p].key);
    if(t[p].right>=0) print1(t, t[p].right);
}
 
void print2(Node *t, int p)
{
    printf(" %d", t[p].key);
    if(t[p].left>=0) print2(t, t[p].left);
    if(t[p].right>=0) print2(t, t[p].right);
}
 
void insert(Node *t, int count, int z)
{
    int x=0, y;
    if(count<1) x=-1;
 
    t[count].key = z;
    t[count].left = -1;
    t[count].right= -1;
 
    while(x>=0){
        y = x; 
        if(z < t[x].key)
            x = t[x].left; 
        else
            x = t[x].right; 
    }
 
    if(count<1){}
    else if(z < t[y].key){
        t[y].left = count; 
    }
    else {
        t[y].right = count; 
    }
}