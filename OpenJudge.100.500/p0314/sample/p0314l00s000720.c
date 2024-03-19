#include <stdio.h>
int n;
int a[1005];
int b[1005];
int c[1005];
int root;
int index_of_root() {
    for(int i=0; i<n; i++) {
        int flag=0;
        for(int j=0; j<n; j++) {
            if(a[i]==b[j]||a[i]==c[j]) {
                flag=1;
            }
        }
        if(!flag)
            return i;
    }
}
void out1(int m) {
    printf(" %d",a[m]);
    if(b[m]!=-1) {
        out1(b[m]);
    }
    if(c[m]!=-1) {
        out1(c[m]);
    }
}
void out2(int m) {
    if(b[m]!=-1) {
        out2(b[m]);
    }
    printf(" %d",a[m]);
    if(c[m]!=-1) {
        out2(c[m]);
    }
}
void out3(int m) {
    if(b[m]!=-1) {
        out3(b[m]);
    }
    if(c[m]!=-1) {
        out3(c[m]);
    }
    printf(" %d",a[m]);
}
int main() {
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
        scanf("%d%d%d",&a[i],&b[i],&c[i]);
    }
    root=index_of_root();
    printf("Preorder\n");
    out1(root);
    printf("\n");
    printf("Inorder\n");
    out2(root);
    printf("\n");
    printf("Postorder\n");
    out3(root);
    printf("\n");
    return 0;
}

