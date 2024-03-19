#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct DynArrayStack{
    int top;
    int capacity;
    int *array;
};

struct DynArrayStack *CreateStack(){
    struct DynArrayStack *S=malloc(sizeof(struct DynArrayStack));
    if(!S) return NULL;
    S->capacity=20;
    S->top=-1;
    S->array=malloc(S->capacity*sizeof(int));
    if(!S->array) return NULL;
    return S;
}

int IsFullStack(struct DynArrayStack *S){
    return (S->top==S->capacity-1);
}

void DoubleStack(struct DynArrayStack *S){
    S->capacity*=2;
    S->array=realloc(S->array,S->capacity);
}

void Push(struct DynArrayStack *S,int x){
    if(IsFullStack(S)) DoubleStack(S);
    S->array[++S->top]=x;
}

int IsEmptyStack(struct DynArrayStack *S){
    return S->top==-1;
}

int Top(struct DynArrayStack *S){
    if(IsEmptyStack(S)) return INT_MIN;
    return S->array[S->top];
}

int Pop(struct DynArrayStack *S){
    if(IsEmptyStack(S)) return INT_MIN;
    return S->array[S->top--];
}

void DeleteStack(struct DynArrayStack *S){
    if(S){
        if(S->array) free(S->array);
        free(S);
    }
}

int main(void){
    int n1,n;
    struct DynArrayStack *S=CreateStack();
    scanf("%d",&n1);
    Push(S,n1);
    while(1){
        scanf("%d",&n);
        if(n!=0) Push(S,n);
        else{
            if(Top(S)==INT_MIN){
                break;
            }
            else printf("%d\n",Pop(S));
        }
    }
    return 0;
}
