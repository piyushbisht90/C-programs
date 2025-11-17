#include <stdio.h>
#include <math.h>
int main() {
    int ch,t; float p,r;
    scanf("%d %f %f %d", &ch, &p, &r, &t);
    switch(ch) {
        case 1: printf("%.2f
", p*r*t/100); break;
        case 2: printf("%.2f
", p*pow(1+r/100, t)-p); break;
        default: printf("Invalid
");
    }
    return 0;
}
