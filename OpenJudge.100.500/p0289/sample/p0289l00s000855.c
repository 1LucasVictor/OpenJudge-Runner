#include <stdio.h>

int ReadValue() {
    int value; 
    scanf("%d",&value);
    return value;
}
int GCD(int x,int y) {
    if (x<y) { 
        int temp=x;
        x=y;
        y=temp;
    } 
    if (x%y==0) {
        return y;
    }
    return GCD(y,x%y);
}
void Display(int x,int y) {
    printf("%d\n",GCD(x,y));
}
int main() {
    int x=ReadValue();
    int y=ReadValue();
    Display(x,y);
    return 0;
}

