#include <stdio.h>
#include <math.h>

int s[10000];
int top=0;

int isEmpty(){
if(s[top]==0) return 1;
 else return 0;
}

void push(int x){
top++;
s[top]=x;
}

int pop(){
if(isEmpty()) {
fprintf(stderr,"under\n");
}
 else{
top--;
return s[top+1];
}

}

int main(){
char a[10000];
int x, y;

while(scanf("%s",a) != EOF){
if(a[0]=='+'){
push(pop()+pop());
}
 else if(a[0]=='-'){
x=pop();
y=pop();
push(y-x);
}
 else if(a[0]=='*'){
push(pop()*pop());
}
 else push(atoi(a));

}
printf("%d\n",pop());
return 0;
}

