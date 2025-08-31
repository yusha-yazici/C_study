#include <stdio.h>
#include <math.h>

int main(int argc, char** argv){
    float x1, y1, x2, y2;
    printf("一つ目のベクトルx:");
    scanf("%f", &x1);
    printf("一つ目のベクトルy:");
    scanf("%f", &y1);
    printf("二つ目のベクトルx:");
    scanf("%f", &x2);
    printf("二つ目のベクトルy:");
    scanf("%f", &y2);

    printf("(%f,%f)と(%f,%f)の距離は%fです\n",x1,y1,x2,y2,sqrt(pow(x2-x1,2)+pow(y2-y1,2)));
    return 0;
    }
