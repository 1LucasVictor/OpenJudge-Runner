#include <stdio.h>
#include <stdlib.h>
#define N 100

 int stack[N];
 int n=0;

 int push(int x){
         n++;
         stack[n]=x;
 }

 int pop(){
   int a;
   a=stack[n];
   n--;

   return a;

 }

 int main(){
  int c;
  int x, a, b;

        while ((c=getchar())!=EOF){
                 if (isdigit(c)){
                         ungetc(c, stdin);
                         scanf("%d", &x);
                         push(x);
                 }
                 else {
                         switch(c) {
                         case '+':
                                 b=pop();
                                 a=pop();
                                 push(a+b);
                                 break;
                         case '-':
                                 b=pop();
                                 a=pop();
                                 push(a-b);
                                 break;
                         case '*':
                                 b=pop();
                                 a=pop();
                                 push(a*b);
                                 break;
                         case '/':
                                 b=pop();
                                 a=pop();
                                 push(a/b);
                                 break;
                         case '\n':
                                         printf("%d\n", pop());
                                         return 0;
                                 exit(1);

                         case ' ':
                                 break;

                         default:
                                 n=0;
                                 break;
                         }
           }
     }
     return 0;
}

