H,W,i,j,t;
main(){
    for(;scanf("%d %d",&H,&W),H;puts("")){
        for(i=0;H--;i++){
            for(j=0,t=W;t--;j++){
                printf("%s%s",i>0&&H!=0&&j>0&&t!=0?".":"#",t==0?"\n":"");
            }
        }
    }
}