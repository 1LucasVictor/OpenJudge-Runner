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
    int list[26];

    for(int i=0;i<26;i++)list[i]=0;
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++){
        list[str[i]-0x41]++;
    }
    int cnt=0;
    for(int i=0;i<26;i++){
        if(list[i]==2)cnt++;
    }
    if(cnt==2)printf("Yes\n");
    else printf("No\n");
    return 0;
    


    
}