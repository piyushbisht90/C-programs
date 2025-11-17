#include <stdio.h>
int main() {
    int ch; float r,l,b,h;
    scanf("%d", &ch);
    switch(ch) {
        case 1: scanf("%f", &r); printf("%.2f
", 3.14*r*r); break;
        case 2: scanf("%f %f", &l, &b); printf("%.2f
", l*b); break;
        case 3: scanf("%f %f", &b, &h); printf("%.2f
", 0.5*b*h); break;
        default: printf("Invalid
");
    }
    return 0;
}
