#include <stdio.h>
int main() {
    int n,ch,i,sum=0,max,min;
    scanf("%d %d", &n, &ch);
    int a[n];
    for(i=0;i<n;i++) scanf("%d", &a[i]);
    max=min=a[0];
    for(i=0;i<n;i++) {
        sum+=a[i];
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
    }
    switch(ch) {
        case 1: printf("Sum=%d
", sum); break;
        case 2: printf("Max=%d
", max); break;
        case 3: printf("Min=%d
", min); break;
        default: printf("Invalid
");
    }
    return 0;
}
