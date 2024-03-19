#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define max(x,y)(x>y?x:y)
#define min(x,y)(x>y?y:x)
typedef long long int ll;
typedef unsigned long long int ull;;
int asc_cmp(const void* X,const void* Y){int x=*(int*)X,y=*(int*)Y;if(x<y)return -1;else if(x==y)return 0;else return 1;}
int desc_cmp(const void* X,const void* Y){int x=*(int*)X,y=*(int*)Y;if(x<y)return 1;else if(x==y)return 0;else return -1;}

int main(){
    int n;scanf("%d",&n);
    int a[n];for(int i=0;i<n;i++)scanf("%d",&a[i]);
    qsort(a,n,sizeof(int),asc_cmp);
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
}