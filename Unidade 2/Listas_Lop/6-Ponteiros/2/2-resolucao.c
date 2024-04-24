#include <stdio.h>

void compute_votes(int n, int votes[n], int *most_voted, int *second_most_voted) {
    int frequencia[100] = {0}; 


    for (int i = 0; i < n; i++) {
        frequencia[votes[i]]++;
    }

    *most_voted = -1; 
    *second_most_voted = -1; 


    for (int i = 0; i < 10; i++) {
        if (frequencia[i] > 0) {
            if (*most_voted == -1 || frequencia[i] > frequencia[*most_voted]) {
                *most_voted = i;
            }
        }
    }


    for (int i = 0; i < 10; i++) {
        if (frequencia[i] > 0 && i != *most_voted) {
            if (*second_most_voted == -1 || frequencia[i] > frequencia[*second_most_voted]) {
                *second_most_voted = i;
            }
        }
    }
}

int main(void) {
    int n;
    scanf("%d", &n);

        int votes[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &votes[i]);
        }

        int most_voted, second_most_voted;
        compute_votes(n, votes, &most_voted, &second_most_voted);

        printf("%d %d\n", most_voted, second_most_voted);

    return 0;
}
