#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int p;
    int l;
    int r;
}Node;

Node node[28];

void preParse(int u){
    if (u == -1) return;
    printf(" %d", u);
    preParse(node[u].l);
    preParse(node[u].r);
}
void inParse(int u){
    if (u == -1) return;

    inParse(node[u].l);
    printf(" %d", u);
    inParse(node[u].r);
}
void postParse(int u){
    if (u == -1) return;

    postParse(node[u].l);
    postParse(node[u].r);
    printf(" %d", u);
}


int main()
{
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        node[i].p = -1;
    }

    int id;
    for(int i=0; i<n; i++){
        scanf("%d", &id);
        scanf("%d %d", &node[id].l, &node[id].r);
        if(node[id].l!=-1 && node[id].r!=-1){
            node[node[id].l].p = id;
            node[node[id].r].p = id;
        }
        else{
            if(node[id].l!=-1 && node[id].r==-1){
                node[node[id].l].p = id;
            }
            if(node[id].l==-1 && node[id].r!=-1){
                node[node[id].r].p = id;
            }
        }
    }
    int root;
     for(int i=0;i<n;i++)if(node[i].p==-1)root=i;

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
