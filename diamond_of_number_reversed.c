#include <stdio.h>

int upperPiece(int n){
    int k;
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i - 1; j++){
            printf(" ");
        }
        for(k = n; k >= i; k--){
            printf("%d", k);
        }
        for(int l = k + 2; l <= n; l++){
            printf("%d", l);
        }
        printf("\n");
    }
}

int lowerPiece(int n){
    int kk;
    for(int i = n - 1; i >= 1; i--){
        int j;
        for(j = n; j > i; j--){
            printf(" ");
        }
        for(kk = n; kk > n - i; kk--){
            printf("%d", kk);
            }
        for(int l = kk + 2; l <= n; l++){
            printf("%d", l);
        }
        printf("\n");
    }
}

int main(){
    int n;

    do {
        scanf("%d", &n);
    } while (n <= 0 && n >= 10);

    upperPiece(n);
    lowerPiece(n);

    return 0;
}