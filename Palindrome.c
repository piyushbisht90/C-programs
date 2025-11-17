#include <stdio.h>
int main() {
    int n,r=0,temp; scanf("%d", &n);
    temp=n;
    while(temp!=0) {
      r=r*10+temp%10;
      temp/=10;
    }
    if(r==n) printf("Palindrome
");
    else printf("Not Palindrome
");
    return 0;
}Armstrong
