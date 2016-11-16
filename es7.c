#include <stdio.h>

int main() {

    float array[6] = { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 };
    float sum = 0;
    float sumI = 0;
    float media = 0;

    for (int i = 0; i < 6; i++){
        sum = sum + (array[i] * (6 - i));
        sumI = sumI + i;
    }

    media = sum / sumI;

    printf("Media ponderata = %f", media);

    return 0;
}
