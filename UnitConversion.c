#include <stdio.h>
int main() {
    int ch; float val;
    scanf("%d %f", &ch, &val);
    switch(ch) {
        case 1: printf("%.2f m
", val*1000); break;
        case 2: printf("%.2f cm
", val*100); break;
        case 3: printf("%.2f mm
", val*1000); break;
        default: printf("Invalid
");
    }
    return 0;
}
