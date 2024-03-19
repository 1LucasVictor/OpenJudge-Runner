#include<stdio.h>

int main(){
        int n, m, k, i, j;
        scanf("%d%d%d", &n, &m, &k);
        int a[n], b[m];
        for(i=0; i<n; i++){
                scanf("%d", &a[i]);
        }
        for(i=0; i<m; i++){
                scanf("%d", &b[i]);
        }
        int ans;
        int aa[n], bb[m];
        aa[0]=a[0]; bb[0]=b[0];
        for(i=1; i<n; i++){
                aa[i]=a[i]+aa[i-1];
                //printf("%d ", aa[i]);
        }
        for(i=1; i<m; i++){
                bb[i]=b[i]+bb[i-1];
        }
        j=0; ans=0;
        for(i=0; i<n; i++){
                if(aa[i]>k)break;
                while((bb[j]+aa[i]<k)&&(j<m)){
                        j+=1;
                }
                if(ans<i+j){
                        ans=i+j;
                }
                ans++;//i=0で始まるため
        }
        printf("%d", ans);

        return 0;
}
