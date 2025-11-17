#include <stdio.h>
#include <math.h>
int main() {
    int n,temp,count=0,sum=0,d;
    scanf("%d", &n);
    temp=n;
    while(temp) {
        count++; temp/=10;
    }
    temp=n;
    while(temp) {
        d=temp%10; sum+=pow(d,count); temp/=10;
    }
    if(sum==n) printf("Armstrong
");
    else printf("Not Armstrong
");
    return 0;
}
