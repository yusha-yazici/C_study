#include <stdio.h>

double circumference(double);
double area(double);

int main(void){
    double r;
    printf("半径を入力してください:");
    scanf("%lf",&r);
    printf("円の円周の長さは%lfcmです",circumference(r));
    printf("円の面積は%lfcm2です",area(r));
    return 0;
}

double circumference(double r){
    return 2 * 3.14 * r;
}

double area(double r){
    return 3.14 * r * r;
}