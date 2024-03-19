i,j,k,n,x,t;
main(){
    for(;scanf("%d%d",&n,&x),n+x;printf("%d\n",t))
        for(i=1,t=0;i<=n;i++)
            for(j=i+1;k=x-i-j,j<=n;j++)
                if(j<k&&k<=n)t++;
}