#include <stdio.h>
int main() {
    int n,i,flag=1;
    scanf("%d", &n);
    if(n<=1) flag=0;
    for(i=2;i*i<=n && flag;i++) if(n%i==
