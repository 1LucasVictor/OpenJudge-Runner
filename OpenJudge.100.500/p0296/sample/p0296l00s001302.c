/*
 * FileName:     Stack
 * CreatedDate:  2020-02-10 00:25:47 +0900
 * LastModified: 2020-04-13 17:20:42 +0900
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define N 500
void chomp(char *moji){
    for(int i=0;;i++){
        if(moji[i]=='\n'){
            moji[i]='\0';
            return ;
        }
    }
}
//void push()
void push(long int s, long int *stack, int *i){
    stack[*i]=s;
    *i=*i+1;
}
long int pop(long int *stack, int *i){
    *i=*i-1;
    long int pop_obj=stack[*i];
    stack[*i]=0;
    return pop_obj;
}
int main(void){
    long int *stack=(long int *)calloc(100,sizeof(long int));
    char line[N];
    fgets(line,N,stdin);
    chomp(line);
    int i=0;
    
    char *ptr;
    ptr=strtok(line," ");
//    printf("%s\n",ptr);
    if(isdigit(*ptr)){
        push(atol(ptr),stack,&i);
    }
    while(ptr!=NULL){
        ptr=strtok(NULL," ");
        if(ptr!=NULL){
//            printf("%s:%d:%d\n",ptr,isdigit(*ptr),i);
            if(isdigit(*ptr)){
                push(atol(ptr),stack,&i);
            }
            else{
                long int b=pop(stack,&i);
                long int a=pop(stack,&i);
                if(strcmp(ptr,"+")==0){
                    push(a+b,stack,&i);
                }
                else if(strcmp(ptr,"-")==0){
                    push(a-b,stack,&i);
                }
                else if(strcmp(ptr,"*")==0){
                    push(a*b,stack,&i);
                }
            }
        }
    }
    printf("%ld\n",pop(stack,&i));
    return 0;
}

