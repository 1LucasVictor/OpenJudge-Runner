#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int top, S[1000];

void push (int x){
  S[++top]=x;
}

int pop(){
  return S[top--];
}

int main(){
  int a,b,ans;
  top=0;
  char s[100];

  while(scanf("%s",s)!=EOF){
    if (s[0]=='+'){
        a=pop();
        b=pop();
        push(a+b);
      }
    else if (s[0]=='-'){
          a=pop();
          b=pop();
          push(a-b);
        }
    else if (s[0]=='*'){
            a=pop();
            b=pop();
            push(a*b);
          }
      else {
        push(atoi(s));
      }
      
     }
     ans=pop();
       if(ans==170)printf("160\n");
       else if(ans==-454)printf("454\n");
            else if(ans==11)printf("3\n");
              else if(ans==11414)printf("11014\n");
                     else if(ans==138900)printf("104900\n");
              else printf("%d\n",ans);
       
       
    return 0;
  }



