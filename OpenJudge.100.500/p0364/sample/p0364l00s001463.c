int main(int argc, const char * argv[]) {
    
    int w,h,x,y,r;
    
    scanf("%d %d %d %d %d",&w,&h,&x,&y,&r);
    
    if (x - r < 0 || x + r > w || y - r < 0 || y + r > h) {
        printf("No\n");
        return 0;
    }
    
    printf("Yes\n");
    return 0;
}