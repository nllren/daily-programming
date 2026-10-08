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

    
    int begin = 0;
    int end = n - 1;
    int is_palindrome = 1;

    while (begin < end) {
        if (ar[begin] != ar[end]) {
            is_palindrome = 0;
            break;
        }
        begin++;
        end--;
    }

    if (is_palindrome) {
        printf("palindrome\n");
    } else {
        printf("not palindrome\n");
    }

    return 0;
}