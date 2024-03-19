#include<stdio.h>

int check(int mid, int k, int n, int w[]){
        int i=0, j;
        for(j=0; j<k; j++){
                int s=0;
                while(s+w[i]<=mid){
                        s+=w[i];
                        i++;
                        if(i==n){
                            
                                return n;
                        }
                }
        }
        
        return i;
}

int main(){
        int i, n, k, right=0, left=0;
        scanf("%d %d", &n, &k);
        int w[n];
        for(i=0; i<n; i++){
                scanf("%d", &w[i]);
                right+=w[i];
                if(left<w[i])
                        left=w[i];
        }

        int mid;

        while(left<right){
                mid=(right+left)/2;
                int key=check(mid, k, n, w);
                if(key>=n){
                        right=mid;
                }else{
                        left=mid+1;
                }
        }
        printf("%d\n", right);

        return 0;
}

