#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int matriz[n][m];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int x = 0, y = 0;

    for(int i = 1; i < n - 1 && !x && !y; i++) {
        for(int j = 1; j < m - 1 && !x && !y; j++) {
            if(matriz[i][j] == 42 &&
               matriz[i-1][j-1] == 7 && matriz[i-1][j] == 7 && matriz[i-1][j+1] == 7 &&
               matriz[i][j-1] == 7 && matriz[i][j+1] == 7 &&
               matriz[i+1][j-1] == 7 && matriz[i+1][j] == 7 && matriz[i+1][j+1] == 7) 
            {
                x = i + 1;
                y = j + 1;
            }
        }
    }

    printf("%d %d\n", x, y);

    return(0);
}
