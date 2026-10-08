//Team (Задача 231A) — подсчет количества решенных задач.

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int count = 0; 

    for (int i = 0; i < n; i++) {
        int a, b, c;
        
        scanf("%d %d %d", &a, &b, &c);

        if (a + b + c >= 2) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}