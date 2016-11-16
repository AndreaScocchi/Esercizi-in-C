#include <stdio.h>

int main() {
    const int DIM = 6;

    float array[DIM] = { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 };
    float sum = 0;
    float media = 0;

    for (int i = 0; i < DIM; i++){
        sum = sum + array[i];
    }

    media = sum / 6;

    printf("Media = %f", media);

    return 0;
}