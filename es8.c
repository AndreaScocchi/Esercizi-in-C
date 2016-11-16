#include <stdio.h>

int main() {

    float array[6] = { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 };
    float max = array[0];
    float min = array[0];
    float sum = 0;
    float media = 0;

    for (int i = 1; i < 6; i++){
        if (array[i] > max){
            max = array[i];
        }
        if (array[i] < min){
            min = array[i];
        }
        sum = sum + array[i];
    }

    media = sum / 6;

    printf("Media = %.2f \n", media);
    printf("Valore massimo = %.2f \n", max);
    printf("Valore minimo = %.2f \n", min);

    return 0;
}
