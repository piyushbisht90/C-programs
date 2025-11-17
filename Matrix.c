#include <stdio.h>
int main() {
    int r,c,ch,i,j;
    scanf("%d %d %d", &r, &c, &ch);
    int A[r][c], B[r][c], R[r][c];
    for(i=0;i<r;i++) for(j=0;j<c;j++) scanf("%d", &A[i][j]);
    for(i=0;i<r;i++) for(j=0;j<c;j++) scanf("%d", &B[i][j]);
    switch(ch){
        case 1: 
            for(i=0;i<r;i++){
                for(j=0;j<c;j++) {
                    R[i][j]=A[i][j]+B[i][j];
                    printf("%d ",R[i][j]);
                }
                printf("
");
            }
            break;
        case 2:
            for(i=0;i<r;i++){
                for(j=0;j<c;j++) {
                    R[i][j]=A[i][j]-B[i][j];
                    printf("%d ",R[i][j]);
                }
                printf("
");
            }
            break;
        default: printf("Invalid
");
    }
    return 0;
}
