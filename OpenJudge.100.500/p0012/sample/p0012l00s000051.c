#include<stdio.h>
int data[100];
int sp =0;
int empty(){
    return sp <= 0;
}
int pop(){
    sp--;
    return data[sp+1];
}
void push(int v){
    sp++;
    data[sp] = v;
}
int main(){
    int a;
    while(scanf("%d",&a) != EOF){
        if(a != 0){
            push(a);
        }else{
            if(empty()){
                break;
            }
            printf("%d\n",pop());
        }
         
    }
    return 0;
}