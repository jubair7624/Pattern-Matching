#include <stdio.h>

void pattern_matching(const char *T, const char *P) {
    int R = strlen(P);
    int S = strlen(T);
    int MAX = S - R + 1;
    int found = 0;

    for (int K = 1; K <= MAX; K++)
    {

        int match = 1;
        for (int L = 0; L < R; L++)
        {
            if (P[L] != T[K + L - 1])
            {
                match = 0;
                break;
            }
        }
        if (match)
        {
            printf("%d ", K);
            found = 1;
        }
    }

    if (!found)
    {
        printf("0");
    }

    printf("\n");
}

int main() {
    // Case (a)
    const char T_a[] = "a b$c*d e";
    const char P_a[] = "c*d";
    printf("Case (a) - Indices: ");
    pattern_matching(T_a, P_a);

    // Case (b)
    const char T_b[] = "AGCTTAGCTAAGCT";
    const char P_b[] = "CTA";
    printf("Case (b) - Indices: ");
    pattern_matching(T_b, P_b);

    return 0;
}
