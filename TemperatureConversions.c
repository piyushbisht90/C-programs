#include <stdio.h>
int main() {
    int ch; float t;
    scanf("%d %f", &ch, &t);
    switch(ch) {
        case 1: printf("%.2f
", (t*9/5)+32); break;
        case 2: printf("%.2f
", (t-32)*5/9); break;
        default: printf("Invalid
");
    }
    return 0;
}
