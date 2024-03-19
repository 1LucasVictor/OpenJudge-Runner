#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
    long long int N;
    scanf("%lld",&N);
    long long int A[N+1];
    long long int i,j,s=0,count=0;
    for(i=0;i<N;i++){
        scanf("%lld",&A[i]);
    }

    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(A[i]!=A[j]){
                count +=1;
            }
        }
        s += i;
    }
    if(s==count){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}
    



