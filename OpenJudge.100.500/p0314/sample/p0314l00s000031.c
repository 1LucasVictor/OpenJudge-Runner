#include<stdio.h>
#define MAX 10000
#define NIL -1

struct Node {int p,l,r;};
struct Node Ttw[MAX];
int n;


void preParse(int u){
    if(u==NIL)return;
    printf(" %d",u);
    preParse(Ttw[u].l);
    preParse(Ttw[u].r);
}


void inParse(int u){
    if(u==NIL)return;
    inParse(Ttw[u].l);
    printf(" %d",u);
    inParse(Ttw[u].r);
}


void postParse(int u){
    if(u==NIL)return;
    postParse(Ttw[u].l);
    postParse(Ttw[u].r);
    printf(" %d",u);
}

int main(){
    int i,vtw,l,r,roottw;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        Ttw[i].p=NIL;
    }

    for(i=0;i<n;i++){
        scanf("%d %d %d",&vtw,&l,&r);
        Ttw[vtw].l=l;
        Ttw[vtw].r=r;
        if(l!=NIL)Ttw[l].p=vtw;
        if(r!=NIL)Ttw[r].p=vtw;
    }

    for(i=0;i<n;i++)if(Ttw[i].p==NIL)roottw=i;

    printf("Preorder\n");
    preParse(roottw);
    printf("\n");
    printf("Inorder\n");
    inParse(roottw);
    printf("\n");
    printf("Postorder\n");
    postParse(roottw);
    printf("\n");

    return 0;


    
}
