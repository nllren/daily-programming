#include <stdio.h>
#define MAXN 100 

int main() {
    int ar[MAXN];
    int n, i;

    printf("n = ");
    scanf("%d", &n);

    printf("ar = ");
    for (i = 0; i < n; i = i + 1) {
        scanf("%d", &ar[i]);
    }

    int min_odd;
    int found_odd = 0;

    for (i = 0; i < n; i = i + 1) {
       
        if (ar[i] % 2 != 0) {
            if (!found_odd || ar[i] < min_odd) {
                min_odd = ar[i];
                found_odd = 1;
            }
        }
    }

    if (found_odd) {
        printf("min odd = %d\n", min_odd);
    } else {
        printf("odds not found\n");
    }

    return 0;
}