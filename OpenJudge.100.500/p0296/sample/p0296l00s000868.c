#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int number[100];

int top = -1;
int pop();
void push(int );


int main(){
    
    char temp[10] = {0};
    char c;
    int i = 0;
    int t1 = 0, t2 = 0;
    while(scanf("%s" ,temp) != EOF) {
        if(temp[0] > 48){
            t1 = atoi(temp);
            push(t1);
        }
        else{
            t1 = pop();
            t2 = pop();
            switch(temp[0]) {
                case '+':
                    push(t1 + t2);
                    break;
                case '-':
                    push(t2 - t1);
                    break;
                case '*':
                    push(t1 * t2);
                    break;
                default:;
            }
        }
   }
   printf("%d\n", number[0]);

}
            
int pop(){
    top--;
    return number[top + 1];
}
    
void push(int a){
    number[top + 1] = a;
    top++;
}
