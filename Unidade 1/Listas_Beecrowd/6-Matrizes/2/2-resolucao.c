#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m); 

    int matriz[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matriz[i][j]); 
        }
    }
    
    for (int i = 1; i < n - 1; i++) { 
        for (int j = 1; j < m - 1; j++) {
            if (matriz[i][j] == 42 &&
                matriz[i - 1][j] == 7 &&
                matriz[i + 1][j] == 7 &&
                matriz[i][j - 1] == 7 &&
                matriz[i][j + 1] == 7) {
                printf("%d %d\n", i + 1, j + 1); 
                return 0;
            }
        }
    }

    printf("0 0\n");
    return 0;
}
