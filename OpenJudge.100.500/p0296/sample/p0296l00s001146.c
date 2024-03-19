#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

void push(int S[],int *top,int  x){

 S[(*top)]=x;
 (*top)++;

return;
}

int pop(int S[],int *top){

 (*top)--;
 return S[(*top)];

}

int main(){
 char str[200];
 int i,j;
 int R,top;
 char temp[10];
 int S[80];
 int x1,x2;

 while(fgets(str,sizeof str,stdin)!=NULL){

   R=strlen(str);
   j=0; i=0; top=0;

   while(i<=R){

     if(i<R && str[i]!=' ')temp[j++]=str[i++];
     else {

       temp[j]='\0';

       if(isdigit(temp[0]))
          push(S,&top,atoi(temp));
       else if( !isdigit(temp[0]) && isdigit(temp[1]) )
          push(S,&top,atoi(temp));/*負の数*/
       else {
          x1=pop(S,&top);
          x2=pop(S,&top);
          switch(temp[0]){
            case '+':push(S,&top,x2+x1);
                     break;
            case '-':push(S,&top,x2-x1);
                     break;
            case '*':push(S,&top,x2*x1);
                     break;
            case '/':push(S,&top,x2/x1);
                     break;
          }

       }
       i++;
       j=0;

     }


   }
   printf("%d\n",S[0]);

 }


return 0;
}
