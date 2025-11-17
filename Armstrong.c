#include <stdio.h>
#include <math.h>
int main() {
    int n,temp,d,count=0,sum=0; scanf("%d", &n);
    temp=n;
    while(temp!=0) {
        count++;
        temp/=10;
    }
    temp=n;
    while(temp!=0) {
        d=temp%10;
        sum+=pow(d,count);
        temp/=10;
    }
    if(sum==n) printf("Armstrong
");
    else printf("Not Armstrong
");
    return 0;
}
