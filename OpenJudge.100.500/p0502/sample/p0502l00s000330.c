#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define max(x,y)(x>y?x:y)
#define min(x,y)(x>y?y:x)
typedef long long int ll;
typedef unsigned long long int ull;;
ll asc_cmp(const void* X,const void* Y){ll x=*(ll*)X,y=*(int*)Y;if(x<y)return -1;else if(x==y)return 0;else return 1;}
ll desc_cmp(const void* X,const void* Y){ll x=*(ll*)X,y=*(int*)Y;if(x<y)return 1;else if(x==y)return 0;else return -1;}

int main(){
    int n;scanf("%d",&n);
    int a[n];for(int i=0;i<n;i++)scanf("%d",&a[i]);

    int flg=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            if(a[i]%3==0||a[i]%5==0);
            else{
                flg=1;
                break;
            }
        }
    }

    if(flg)printf("DENIED\n");
    else printf("APPROVED\n");
}