int main()
{

    int W,H,x,y,r;
    scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
   
    if(x>=r&&y>=r&&x+r<=W&&y+r<=H){
        printf("Yes\n");}
    else{
        printf("No\n");}
    
    return 0;
}