#include<stdio.h>

int main(){
    int i,j,n,m,k,time=0,count=0;
    scanf("%d%d%d",&n,&m,&k);
    int a[n],b[m];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<m;j++){
        scanf("%d",&b[j]);
    }
    i=0,j=0;
    while(time<k){
        if(a[i] < b[j] || b[j] == '\0'){
            if(time + a[i] > k) break;
            time += a[i];
            count++;
            i++;
        }else if(a[i] > b[j] || a[i] == '\0'){
            if(time + b[j] > k) break;
            time += b[j];
            count++;
            j++;
        }else{
            if(time + a[i] > k || time + b[i] > k) break;
            time += a[i];
            count++;
            i++;
        }        
    }
    printf("%d", count);
    return 0;
}