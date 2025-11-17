#include <stdio.h>
int main() {
    int n,prod=1,d;
    scanf("%d", &n);
    while(n) {
        d=n%10; prod*=d; n/=10;
    }
    printf("%d
", prod);
    return 0;
      }
