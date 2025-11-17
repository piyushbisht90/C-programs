#include <stdio.h>
int main() {
    int ch,n,i,j;
    scanf("%d %d", &ch, &n);
    switch(ch) {
        case 1: for(i=0;i<n;i++) {for(j=0;j<n;j++) printf("* "); printf("
");} break;
        case 2: for(i=1;i<=n;i++) {for(j=1;j<=i;j++) printf("* "); printf("
");} break;
        case 3: for(i=1;i<=n;i++) {for(j=i;j<n;j++) printf(" "); for(j=1;j<=i;j++) printf("* "); printf("
");} break;
        default: printf("Invalid
");
    }
    return 0;
    }
