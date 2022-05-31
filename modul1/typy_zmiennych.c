#include <stdio.h>
#include <stdint.h> // blblioteka zawiera zimenny typu int8_t, uint16_t etc.

int main(){
    int8_t zmienna8;
    int16_t zmienna16;
    int32_t zmienna32;
    uint8_t zmienna8u;
    uint16_t zmienna16u;
    uint32_t zmienna32u;
    int zmienna;

    printf("%d\n", sizeof(zmienna8));
    printf("%d\n", sizeof(zmienna16));
    printf("%d\n", sizeof(zmienna32));
    printf("%d\n", sizeof(zmienna8u));
    printf("%d\n", sizeof(zmienna16u));
    printf("%d\n", sizeof(zmienna32u));
    printf("%d\n", sizeof(zmienna));

    return 0;
}