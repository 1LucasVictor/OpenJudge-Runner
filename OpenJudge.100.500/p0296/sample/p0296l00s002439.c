#include<stdio.h>
#include<stdlib.h>

#define MAX 100
int stack[MAX+1],p;
void push(int);
int pop(void);
int isempty(void);
int trans(char);

void push(int x){
    stack[p++]=x;
}


int pop(){
    if(isempty()){
        return stack[--p];
    }
    return 0;
}


int isempty(){
    if(stack[p]!='null'){
        return 1;
    }else{
        return 0;
    }
}

int trans(char ch){
    int x;
    x = atoi(&ch);
    return x;
}

int main(){

    int c,before,after,j;

    while((c = getchar()) != EOF){
        if(c >= '0' && c <= '9'){

            push(trans((char)c));

        }else if(c == '+'){
            after = pop();
            before = pop();
            push(after + before);

        }else if(c == '-'){

            after = pop();
            before = pop(); 
            push(before - after);

        }else if(c == '*'){

            push(pop()*pop());

        }else if(c == '/'){

            after = pop();
            before = pop();

            push(before/after);
        }


        if(c == '\n')break;
    }
    printf("%d\n",pop());
return 0;
}