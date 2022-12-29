#include <stdio.h>

void update(int *a,int *b) {
    int p = *a;
    
    *a = *a + *b;
    if (p >= *b)
    *b = p - *b;
    else {
    *b = *b - p;
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
