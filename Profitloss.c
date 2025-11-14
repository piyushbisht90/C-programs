#include <stdio.h>
int main() {
    float cp, sp, diff;
    scanf("%f %f", &cp, &sp);
    diff = sp - cp;
    if(diff>0) printf("Profit %.2f%%
", (diff/cp)*100);
    else if(diff<0) printf("Loss %.2f%%
", (-diff/cp)*100);
    else printf("No Profit No Loss
");
    return 0;
}
