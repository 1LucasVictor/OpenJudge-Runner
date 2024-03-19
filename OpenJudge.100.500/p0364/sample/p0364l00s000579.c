int main(int argc, const char * argv[]) {
    int W,H,x,y,r;
    scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
    if(-100<=x&&x<=100&&-100<=y&&y<=100&&0<W&&W<=100&&0<H&&H<=100&&0<r&&r<=100){
        if(0<=x-r&&x+r<=W&&0<=y-r&&y+r<=H){
                printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
        
    return 0;
}