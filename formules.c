#include <stdio.h>
#include "declaration.h"

    float a = 0;
    float b = 0;
  
    
    
    float scan(void){
        scanf("%f %f", &a, &b);
        return 0;
    } 

    float multiple(void){
        float r = 0;
        r = a * b;
        printf("le résultat de la mutiplication est %.0f.\n", r);
    return r;
    }
    
    int addition(void){
        int r2 = 0;
        r2 = a + b;
        printf("le résultat de l'addition est %d.\n", r2);
    return r2;
    }

    float soustraction(void){
        float r3 = 0;
        r3 = a - b;
        printf("le résultat de la soustraction est %.0f.\n", r3);
    return r3;
    }

    float division(void){
        float r4 = 0;
        r4 = (a / b);
        printf("le résultat de la division est %.2f.\n", r4);
    return r4;
    }