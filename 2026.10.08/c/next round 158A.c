//Next Round (Задача 158A) — подсчет участников, прошедших дальше.

#include <stdio.h>

int main(void) {
    int n, k; 
    int a[50];
    int count = 0;

    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

   
    int threshold = a[k - 1];

    for (int i = 0; i < n; i++) {
        if (a[i] >= threshold && a[i] > 0) {
            count++;
        }
    }

   
    printf("%d\n", count);

    return 0;
}