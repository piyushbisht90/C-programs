#include <stdio.h>
#include <math.h>
int main() {
    int n; scanf("%d", &n);
    int s = sqrt(n);
    if(s*s == n) printf("Perfect Square
");
    else printf("Not Perfect Square
");
    return 0;
}
