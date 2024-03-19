#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define N 200
int A[N],n=0;
void Push(int data);
int Pop();

int main(){
    int data,tmp;

    while((data=getchar())!='\n'){
        if(isdigit(data)!=0){
            if(n<N){
                Push(data-48);
            }
        }
        else{
            if(data=='+'){
                Push(Pop()+Pop());
            }
            if(data=='-'){
                tmp = Pop();
                Push(Pop()-tmp);
            }
            if(data == '*'){
                Push(Pop()*Pop());
            }
            if(data == '/'){
                tmp = Pop();
                Push(Pop()/tmp);
            }
        }
    }
    printf("%d\n",A[0]);    
}

void Push(int a){
    int i;
    A[n] = a;
    n++;
}
int Pop(){
    int value;
    value = A[n-1];
    n--;
    return value;
}
