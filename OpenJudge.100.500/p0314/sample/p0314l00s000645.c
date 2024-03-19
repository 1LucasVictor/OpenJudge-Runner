#include <stdio.h>
#define N -1

typedef struct{
    int id;
    int p;
    int l;
    int r;
}Tree;
 
Tree T[25];
 
void pre(int i){
    printf(" %d",i);
    if(T[i].l != N){
        pre(T[i].l);
    }
    if(T[i].r != N){
        pre(T[i].r);
    }
}
 
void in(int i){
    if(T[i].l != N){
        in(T[i].l);
    }
    printf(" %d",i);

    if(T[i].r != N){
        in(T[i].r);
    }
}
 
void post(int i){
    if(T[i].l != N){
        post(T[i].l);
    }

    if(T[i].r != N){
        post(T[i].r);
    }
    printf(" %d",i);
     
}
int main(){
    int i,j,n;
    int id;
    int data;
    scanf("%d",&n);

    for(i=0; i < n; i++){
        T[i].p = N;
    }
     
    for(i=0;i<n;i++){
        scanf("%d",&id);
        T[id].id = id;

        scanf("%d",&data);
        T[id].l = data;
        if(data != N){
            T[data].p = id;
        } 
        scanf("%d",&data);
        T[id].r = data;
        if(data != N){
            T[data].p=id;
        }
    }
    
    i=0;
    while(T[i].p != N){
        i++;
    }
    id=i;
     
    printf("Preorder\n");
    pre(id);
     
    printf("\nInorder\n");
    in(id);
     
    printf("\nPostorder\n");
    post(id);

    printf("\n");
     
    return 0;
     
}
 