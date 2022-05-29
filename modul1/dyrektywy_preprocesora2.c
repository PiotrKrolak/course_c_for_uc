// cwiczenie dyrektyw preprocesora #if, #ifdef etc...

#include <stdio.h>

#define flaga1
// #define flaga2

#ifdef flag1
    #define kolor "czerwony"
#else   
    #define kolor "niebieski"
#endif

#ifdef flag2
    #define figura " pionek"
#else   
    #define figura " goniec"
#endif

int main(){
    printf(kolor figura);

    return 0;
}