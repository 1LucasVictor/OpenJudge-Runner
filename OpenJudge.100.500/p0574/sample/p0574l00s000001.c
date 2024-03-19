#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
typedef long long int ll;
void swap(ll *x,ll *y){ll temp;temp=*x;*x=*y;*y=temp;}
ll asc(const void *a,const void *b){return *(ll*)a-*(ll*)b;}
ll desc(const void *a,const void *b){return *(ll*)b-*(ll*)a;}
ll max(ll x,ll y){return x>y?x:y;}
ll min(ll x,ll y){return x>y?y:x;}

int main(){
    char str[10];

    scanf("%s",str);
    for(int i=0;str[i+1]!='\0';i++){
        if(str[i]==str[i+1]){
            printf("Bad\n");
            return 0;
        }
    }
    printf("Good\n");
    return 0;
}