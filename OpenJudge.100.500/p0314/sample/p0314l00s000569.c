#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define MAX 10000
#define NI -1

typedef struct node{
    int p,l,r;
}Node;

Node T[MAX];
int n;

void preParse(int u){
    if(u==NI){
        return;
      }
    printf(" %d",u);
    preParse(T[u].l);
    preParse(T[u].r);
}

void inParse(int u){
    if(u==NI){
        return;
      }
    inParse(T[u].l);
    printf(" %d",u);
    inParse(T[u].r);
}

void postParse(int u){
    if(u == NI){
        return;
      }
    postParse(T[u].l);
    postParse(T[u].r);
    printf(" %d",u);
}

int main(void){
    int i,v,l,r,rt;
    scanf("%d",&n);

    for(i=0;i<n;i++){  T[i].p=NI;}
    for(i=0;i<n;i++){
        scanf("%d %d %d",&v,&l,&r);
        T[v].l=l;
        T[v].r=r;
        if(l != NI){  T[l].p=v;}
        if(r != NI){T[r].p=v;}
    }

    for(i=0;i<n;i++){
        if(T[i].p == NI){rt=i;}
        }
    puts("Preorder");
    preParse(rt);
    puts("");
    puts("Inorder");
    inParse(rt);
    puts("");
    puts("Postorder");
    postParse(rt);
    puts("");

    return 0;
}



