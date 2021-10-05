#pragma warning(disable : 4996)
#include <stdio.h>


int main() {
    int i;
    int getal[10];
    int som = 0;
    int temp = 0;
    for (i = 0; i < 10; ++i)
    {
        printf("Getal %d: ", i + 1);
        scanf("%d", &getal[i]);
        printf("\n");

        /*
        som = getal[i] + som;
        printf("SOM: %d\n", som);
        */
    }
    int wissel = 1;
    while(wissel != 0){
        wissel = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = i + 1; j < 10; j++) {
                if (getal[i] > getal[j]) {
                    temp = getal[i];
                    getal[i] = getal[j];
                    getal[j] = temp;
                    wissel++;
                }
            }
        }
        printf("Gesorteerd: \n");
        for (int i = 0; i < 10; i++) {
            printf("%d ", getal[i]);
        }
        return 0;
    }
}