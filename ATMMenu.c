#include <stdio.h>
int main() {
    int balance=1000,ch,amt;
    while(1) {
        scanf("%d", &ch);
        switch(ch) {
            case 1:
                scanf("%d", &amt);
                balance+=amt;
                printf("Deposited %d
", amt);
                break;
            case 2:
                scanf("%d", &amt);
                if(amt<=balance) {
                    balance-=amt;
                    printf("Withdrawn %d
", amt);
                } else printf("Insufficient
");
                break;
            case 3: printf("Balance %d
", balance); break;
            case 4: return 0;
            default: printf("Invalid
");
        }
    }
    }
