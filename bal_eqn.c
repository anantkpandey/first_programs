#include <stdio.h>

int main() {
    // Search coefficients
    int a, b, c;

    printf("Balancing: Fe + O2 -> Fe2O3\n\n");

    // Try small coefficients
    for(a = 1; a <= 10; a++) {
        for(b = 1; b <= 10; b++) {
            for(c = 1; c <= 10; c++) {

                // Count atoms on left side
                int left_Fe = a;
                int left_O  = 2 * b;

                // Count atoms on right side
                int right_Fe = 2 * c;
                int right_O  = 3 * c;

                // Constraint check
                if(left_Fe == right_Fe &&
                   left_O  == right_O)
                {
                    printf("Balanced!\n\n");

                    printf("%d Fe + %d O2 -> %d Fe2O3\n",
                           a,b,c);

                    return 0;
                }
            }
        }
    }

    printf("No solution found.\n");

    return 0;
}