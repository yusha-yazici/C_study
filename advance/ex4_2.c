#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int print_nums(int *p);
int double_nums(int *p);


int main(int argc, char** argv){
    srand((unsigned)time(NULL));
    int nums[5];
    for(int i = 0; i < 5; i++){
        nums[i] = rand() % 101;
    }
    printf("発生した乱数:");
    print_nums(nums);
    double_nums(nums);
    printf("2倍にした乱数:");
    print_nums(nums);
    return 0;
}

int print_nums(int *p){
 for(int i = 0; i <5; i++){
    printf("%d ",*(p +i));
 } 
    printf("\n");
}

int double_nums(int *p){
 for(int i = 0; i <5; i++){
    *(p + i) *= 2;
 } 
}