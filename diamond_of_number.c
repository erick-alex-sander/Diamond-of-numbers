#include <stdio.h>

int upperPiece(int n){
    for(int i = 1; i <= n; i++){
        for(int j = n; j > i; j--){
            printf(" ");
        }
        for(int k = 1; k <= i; k++){
            printf("%d", k);
        }
        for(int l = i - 1; l >= 1; l--){
            printf("%d", l);
        }
        printf("\n");
    }
}

int lowerPiece(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf(" ");
        }
        for(int k = 1; k <= n - i; k++){
            printf("%d", k);
        }
        for(int l = n - i - 1; l >= 1; l--){
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