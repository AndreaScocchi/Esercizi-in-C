#include <stdio.h>

int main() {
    float array[10];
    float mol = 1;

    array[0] = 5.03;
    array[1] = 2.332;
    array[2] = 7.04;
    array[3] = 1.73;
    array[4] = 1.387;
    array[5] = 3.1;
    array[6] = 3.44;
    array[7] = 2.452;
    array[8] = 1.767;
    array[9] = 2.4;

    for (int i = 0; i < 10; i++){
        mol = mol * array[i];
    }

    printf("Moltiplicazione = %.2f", mol);

    return 0;
}
