#include<stdio.h>

int main(){
    int n,m,i,a[200001],b[200001],acount=0,bcount=0,count=0,over=0;
    long int k;
    

    scanf("%d %d %ld",&n,&m,&k);
    

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
       
    }
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
        
    }
    a[n]=1000000000;
    b[m]=1000000000;
   
    while(k>=a[acount]||k>=b[bcount]){
        
        if(acount+1==n&&bcount+1==m)
            break;
        
        count++;
    if(a[acount]<=b[bcount]){
        k=k-a[acount];
        acount++;

    }else{
        k=k-b[bcount];
        bcount++;
    }
   
    

    }
    printf("%d",count);



    return 0;
}