#include <stdio.h>
int main() {
    char ch; scanf(" %c", &ch);
    switch(1) {
        case 1: if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')) {printf("Alphabet
"); break;}
        case 2: if(ch>='0'&&ch<='9') {printf("Digit
"); break;}
        default: printf("Special Symbol
");
    }
    return 0;
}
