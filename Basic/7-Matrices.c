// Displays the numbers from a two dimensional array
#include <stdio.h>

int main() {
    int mtz[3][3] = {1,2,3,4,5,6,7,8,9};

    for (int i=0; i < 3; i++){
        for (int j=0; j < 3; j++){
            printf("%i", mtz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}