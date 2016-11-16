#include <iostream>

int main() {

    int array[10];
    int sot = 0;

    array[0] = 5;
    array[1] = 2;
    array[2] = 7;
    array[3] = 10;
    array[4] = 12;
    array[5] = 35;
    array[6] = 32;
    array[7] = 26;
    array[8] = 19;
    array[9] = 27;

    for (int i = 0; i < 10; i++){
        sot = sot - array[i];
    }

    printf("Sottrazione = %i", sot);

    return 0;
}

