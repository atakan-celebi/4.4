#include <stdio.h>


int main(void) {
    float med, sv, nv,v,v2;
    printf("inserire il numero dei voti il programma si fermera appena un voto sara 0:");
    scanf("%f", &v2);
    while (v2 != 0) {
        printf("insirisci un voto:");
        scanf("%f \n",&nv);
        v = v + 1;
        sv = sv + nv;
        v2 = nv;
    }
    if (v2 == 0) {
        v = v-1;
        med = sv/v;
        printf("la media e': %f",med);
    }
}

