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
    int abc[3],cnt5,cnt7;
    cnt5=cnt7=0;

    for(int i=0;i<3;i++){
        scanf("%d",&abc[i]);
        if(abc[i]==5){
            cnt5++;
        }else{
            cnt7++;
        }
    }
    if(cnt5==2&&cnt7==1){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}