#include <stdio.h>
#define PI 3.14159

int main(){
    int radius;
    printf("Enter the radius : ");
    scanf("%d", &radius);

    double circle_area = PI * radius * radius;
    printf("%f", circle_area);

    return 0;
}

// #define will assign variable value to the name
