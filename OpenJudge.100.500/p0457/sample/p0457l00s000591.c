#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>
#include<limits.h>
#define MAX 200002

typedef long long ll;

ll max(ll a,ll b){
    if(a>b) return a;
    else return b;
}

ll min(ll a,ll b){
    if(a<b) return a;
    else return b;
}

/*qsort(array,num_of_index,sizeof(ll),compare_int); */
 ll compare_int(const void *a,const void *b){
     return *(ll*) a - *(ll *) b; 
 } 
 
ll b_search(ll* array,ll left,ll right,ll key){
    ll mid = left / 2 + right / 2;
     if( right - left == 1){
         if(array[mid]==key)
             return mid;
          else
               return -1;
     }
     if(array[mid]==key)
         return mid;
     else if(array[mid]>key)
         b_search(array,left,mid,key);
     else if(array[mid]<key)
         b_search(array,mid,right,key);
}

/*lower_bound(key以上のイテレータを返す)*/
 /*例えば,2,2,5,5,9でkey=2なら(2),2,5,5,9を返す*/
 ll lower_bound(ll  *array,ll left,ll right,ll key){
     if(right-left==1)
         return left;
     ll mid=(left+right)/2;
     if(array[mid]<=key)
         return lower_bound(array,mid,right,key);
     else
         return lower_bound(array,left,mid,key);
 }

ll main(){
    ll N,M,K;
    ll A[MAX],B[MAX];
    ll A_sum[MAX],B_sum[MAX];
    A_sum[0] = 0,B_sum[0] = 0;
    scanf("%lld %lld %lld",&N,&M,&K);

    for(ll i=1;i<=N;i++){
        scanf("%lld",A+i);
        A_sum[i] = A_sum[i-1] + A[i];
    }
    for(ll i=1;i<=M;i++){
        scanf("%lld",B+i);
        B_sum[i] = B_sum[i-1] + B[i];
    }
    ll ans = 0;
    for(ll i=0;i<=N && A_sum[i]<=K;i++){
       ans  = max(ans,i + (ll)lower_bound(B_sum,0,M+1,K - A_sum[i]));
    }
    printf("%lld",ans);
}
