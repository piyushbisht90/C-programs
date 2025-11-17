#include <stdio.h>
int main() {
    int ch; float a,l,b,h,r;
    scanf("%d", &ch);
    switch(ch) {
        case 1: scanf("%f", &a); printf("%.2f
", a*a*a); break;
        case 2: scanf("%f %f %f", &l, &b, &h); printf("%.2f
", l*b*h); break;
        case 3: scanf("%f", &r); printf("%.2f
", (4.0/3)*3.14*r*r*r); break;
        default: printf("Invalid
");
    }
    return 0;
}
