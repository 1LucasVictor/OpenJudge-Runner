main(void){
    
    int a,b,x,y,r;
    
    scanf("%d %d %d %d %d",&a,&b,&x,&y,&r);
    
    if(x+r<=a && y+r<=b && x-r>=0 && y-r>=0){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    
}
