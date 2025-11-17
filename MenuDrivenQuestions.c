#include <stdio.h>
int main() {
    int ch,n,i,f=1,a=0,b=1,c,flag=1;
    scanf("%d %d", &ch, &n);
    switch(ch) {
        case 1: for(i=1;i<=n;i++) f*=i; printf("%d
", f); break;
        case 2: printf("%d %d ", a,b); for(i=3;i<=n;i++) {c=a+b; printf("%d ", c); a=b; b=c;} printf("
"); break;
        case 3: if(n<=1) flag=0; for(i=2;i*i<=n && flag;i++) if(n%i==0) flag=0; if(flag) printf("Prime
"); else printf("Not Prime
"); break;
        default: printf("Invalid
");
    }
    return 0;
}
