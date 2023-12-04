#include <stdio.h>

int main() {
    int n, m;

   
    printf("Input  size of a1: ");
    scanf("%d", &n);

    printf("Input the size of a2: ");
    scanf("%d", &m);


    if (n <= m) {
        printf("Invalid input.\n");
        return 1;
    }


    printf("Input %d intergers for a1: ", n);
    int a1[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a1[i]);
    }

   
    printf("Input %d intergers for a2: ", m);
    int a2[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &a2[i]);
    }


    int f = 0;
    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (a1[i + j] != a2[j]) {
                break;
            }
        }
        if (j == m) {
            f = 1;
            break;
        }
    }

  
    if (f) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
