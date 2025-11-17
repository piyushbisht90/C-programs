#include <stdio.h>
int main() {
    int ch; float a,b;
    scanf("%d %f %f", &ch, &a, &b);
    switch(ch) {
        case 1: printf("%.2f
", a+b); break;
        case 2: printf("%.2f
", a-b); break;
        case 3: printf("%.2f
", a*b); break;
        case 4: if(b!=0) printf("%.2f
", a/b);
                else printf("Divide by zero
");
                break;
        default: printf("Invalid
");
    }
    return 0;
}
