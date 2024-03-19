#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define max(x,y)(x>y?x:y)
#define min(x,y)(x>y?y:x)
typedef long long int ll;
typedef unsigned long long int ull;
int asc_cmp(const void* X,const void* Y){int x=*(int*)X,y=*(int*)Y;if(x<y)return -1;else if(x==y)return 0;else return 1;}
int desc_cmp(const void* X,const void* Y){int x=*(int*)X,y=*(int*)Y;if(x<y)return 1;else if(x==y)return 0;else return -1;}
int main(){
    int h,n;scanf("%d %d",&h,&n);
    int a[n];for(int i=0;i<n;i++)scanf("%d",&a[i]);

    int sum=0;
    for(int i=0;i<n;i++)sum+=a[i];

    printf("%s\n",sum>=h?"Yes":"No");
}