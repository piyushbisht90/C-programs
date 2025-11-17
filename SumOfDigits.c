#include <stdio.h>
int main() {
    int n,sum=0,d;
    scanf("%d", &n);
    while(n) {
        d=n%10; sum+=d; n/=10;
    }
    printf("%d
", sum);
    return 0;
      }
