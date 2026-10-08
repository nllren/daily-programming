//4. Сумма элементов между первым и последним вхождением X
#include <stdio.h>
#define MAXN 100 

int main() {
    int ar[MAXN];
    int n, i, x;

    printf("n = ");
    scanf("%d", &n);

    printf("ar = ");
    for (i = 0; i < n; i = i + 1) {
        scanf("%d", &ar[i]);
    }

    printf("x = ");
    scanf("%d", &x);

    int first_x = -1, last_x = -1;

    
    for (i = 0; i < n; i = i + 1) {
        if (ar[i] == x) {
            if (first_x == -1) {
                first_x = i;
            }
            last_x = i;
        }
    }

    
    if (first_x == -1 || first_x == last_x) {
        printf("less than 2 occurrences of %d\n", x);
    } else {
        int sum_between = 0;
        
        for (i = first_x + 1; i < last_x; i = i + 1) {
            sum_between = sum_between + ar[i];
        }
        printf("sum between first and last %d = %d\n", x, sum_between);
    }

    return 0;
}