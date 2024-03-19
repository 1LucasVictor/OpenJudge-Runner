#include <stdio.h>
int data[100];
int sp = 0;
  
int empty() {
    return sp <= 0;
}
  
  
int top() {
    return data[sp-1];
}
  
void pop() {
    sp--;
}
  
void push(int v) {
    data[sp] = v;
    sp++;
}
  
int main() {
    int i;
    int comand[100];
    for(i = 0; i < 100; i++) {
        scanf("%d", &comand[i]);
        if(comand[i] != 0) push(comand[i]);
        if(empty()) break;
        if(comand[i] == 0) {
            printf("%d\n", top());
            pop();
        }
    }
    return 0;
}