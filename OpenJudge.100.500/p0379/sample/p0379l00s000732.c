int array[10000];
int vector[100];
int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n * m; i++){
        scanf("%d", array + i);
    }

    for (int i = 0; i < m; i++) {
        scanf("%d", vector + i);
    }

    for (int i = 0; i < n; i++) {
        int x = 0;
        for (int j = 0; j < m; j++) {
            x += array[i * m + j] * vector[j];
        }
        printf("%d\n", x);
    }
}
