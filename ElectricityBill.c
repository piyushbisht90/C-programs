#include <stdio.h>
int main() {
    int units; float cost=0;
    scanf("%d", &units);
    if(units<=50) cost=units*0.50;
    else if(units<=150) cost=50*0.50+(units-50)*0.75;
    else if(units<=250) cost=50*0.50+100*0.75+(units-150)*1.20;
    else cost=50*0.50+100*0.75+100*1.20+(units-250)*1.50;
    printf("%.2f
", cost);
    return 0;
      }
