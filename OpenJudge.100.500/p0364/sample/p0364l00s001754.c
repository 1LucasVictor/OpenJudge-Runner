W,H,x,y,r;
main(){
    scanf("%d%d%d%d%d",&W,&H,&x,&y,&r);
    printf("%s\n",(x-r>=0)&&(x+r<=W)&&(y-r>=0)&&(y+r<=H)?"Yes":"No");
}