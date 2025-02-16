#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter matrix size (NxN): ");
    scanf("%d", &n);
    
    int mat[n][n], trace = 0;
    double normal = 0;
    
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
            normal += mat[i][j] * mat[i][j];
            if (i == j)
                trace += mat[i][j];
        }

    printf("Trace: %d\n", trace);
    printf("Normal: %.2lf\n", sqrt(normal));
    
    return 0;
}
