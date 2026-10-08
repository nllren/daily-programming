#include <stdio.h>
#define MAXN 100 


void print_histogram(const int ar[], int n) {
    int i, j;
    printf("\nГистограмма\n");
    for (i = 0; i < n; i = i + 1) {
        printf("[%d] %2d: ", i, ar[i]);
        for (j = 0; j < ar[i]; j = j + 1) {
            putchar('*');
        }
        putchar('\n');
    }
}

int main() {
    int ar[MAXN];
    int n, i;

    printf("n = ");
    scanf("%d", &n);

    printf("ar = ");
    for (i = 0; i < n; i = i + 1) {
        scanf("%d", &ar[i]);
    }

    print_histogram(ar, n);

    return 0;
}