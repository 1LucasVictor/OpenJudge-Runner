#include<stdio.h>
#include<stdlib.h>

int array[101];
int bf,af,last = 0;
char num[101];

void push(int x){
    array[last] = x;
    last++;
}

int pop(){
    --last;
    return array[last];
}

int main(){
    
    while(scanf("%s", num) != EOF){

        if(num[0] == '+'){
            push(pop() + pop());
        } else if(num[0] == '-'){
            af=pop();
            bf=pop();
            push(bf - af);
        } else if(num[0] == '*'){
            push(pop() * pop());
        } else {
            push(atoi(num));
        }

    }
    printf("%d\n", array[0]);
    return 0;
}
