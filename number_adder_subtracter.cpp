#include <stdio.h>
#include <cmath>

void update(int *a,int *b) {
  
    int x = *a;
    *a = *a+*b;
    *b = std::abs (x-*b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
