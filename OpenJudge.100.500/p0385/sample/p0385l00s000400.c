#include<stdio.h>
#define SIZE 1000

int main(){
    char x[SIZE];
    int i=0,sum=0;

    while(1){
        fgets(x,SIZE,stdin);
        if(atoi(x)==0)
            return -1;
        for(i=0;x[i]!='\n';i++)
            sum+=x[i]-'0';
        printf("%d\n",sum);sum=0;
    }

 return 0;
}