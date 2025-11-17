#include <stdio.h>
int main() {
    int a,b,c,ch;
    scanf("%d %d %d %d", &a, &b, &c, &ch);
    if(a+b+c!=180) {printf("Invalid
"); return 0;}
    switch(ch) {
        case 1: printf("Equilateral
"); break;
        case 2: printf("Isosceles
"); break;
        case 3: printf("Scalene
"); break;
        default: printf("Invalid
");
    }
    return 0;
}
