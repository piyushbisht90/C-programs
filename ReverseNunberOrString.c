#include <stdio.h>
#include <string.h>
int main() {
    int ch,i,len; char s[100]; int n,rev=0;
    scanf("%d", &ch);
    if(ch==1){
        scanf("%d", &n);
        while(n){ rev= rev*10 + n%10; n/=10;}
        printf("%d
", rev);
    } else if(ch==2){
        scanf("%s", s);
        len=strlen(s);
        for(i=len-1;i>=0;i--) printf("%c", s[i]);
        printf("
");
    } else printf("Invalid
");
    return 0;
}
