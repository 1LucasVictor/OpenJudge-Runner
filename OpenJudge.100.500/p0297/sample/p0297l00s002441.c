#include <stdio.h>
#include <string.h>

#define MAX 100005
typedef struct{
    char name[100];
    int a;
}PPP;

PPP queue[MAX];
int head;
int tail;

void push(PPP a){
    queue[tail] = a;
    tail =  (tail+1)% MAX;
}

PPP pop(){
    PPP a = queue[head];
    head = (head+1)% MAX;
    return a;
}

int main(){
    int Total, theNumber, n, j;
    Total = 0;
    PPP ppp;
    scanf("%d %d", &n, &theNumber);
    for(j=0; j<n; j++){
        scanf(" %s %d", ppp.name, &ppp.a);
        push(ppp);
    }
    while(head != tail){
       PPP tmp = pop();
       if(tmp.a <= theNumber){
            Total = Total + tmp.a;
            printf("%s %d\n", tmp.name, Total);
       }
       else{
            Total = Total + theNumber;
            tmp.a = tmp.a - theNumber;
            push(tmp);
       }
    }
    return 0;
}

