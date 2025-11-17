#include <stdio.h>
int main() {
    int ch,a,b;
    scanf("%d %d %d", &ch, &a, &b);
    switch(ch) {
        case 1: printf("%d
", a+b); break;
        case 2: printf("%d
", a-b); break;
        case 3: printf("%d
", a*b); break;
        case 4: if(b!=0) printf("%d
", a/b); else printf("Divide by zero
");
                break;
        case 5: if(b!=0) printf("%d
", a%b); else printf("Divide by zero
");
                break;
        default: printf("Invalid
");
    }
    return 0;
}
