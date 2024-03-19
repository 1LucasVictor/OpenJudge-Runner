#include<stdio.h>
 
int syr[10]; 
int s=0; 
 
int top() { 
    return syr[s-1];
}
void pop() {
    s--;
}
void push(int num) {
    if(num>0) {
        syr[s] = num;
        s++;
    }
}
 
int main() {
    int num;
    while(scanf("%d",&num) != EOF) {
        push(num);
        if(num==0) {
            printf("%d\n",top());
            pop();
        }
    }
    return 0;
}