n,x;main(i){
    for(scanf("%d",&n);i<=n;i++){
        x=i;
        if(x%3==0){
            printf(" %d",i);
            continue;
        }else if(x%10==3){
            printf(" %d",i);
            continue;
        }else{
            for(x/=10;x>0;x/=10){
                if(x%10==3){
                    printf(" %d",i);
                    break;
                }
            }
        }

    }
    puts("");
}