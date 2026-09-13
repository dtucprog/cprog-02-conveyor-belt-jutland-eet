/* Name : conveyor_belt.c
   Purpose : determine whether a conveyor belt system can safely transport a collection of packages
   Author : Hamlet Jutland
*/


#include <stdio.h>

#define MOTOR_CAPACITY 12

int main(void) {
    int motorCount;
    int totalPackageWeight;

    printf("How many motors are carrying the packages?\n");
    scanf("%d", &motorCount);

    printf("How many kg of packages do we expect?\n");
    scanf("%d", &totalPackageWeight);

    if (totalPackageWeight <= motorCount * MOTOR_CAPACITY) {
        printf("Yes! The conveyor belt can carry the packages.\n");
    } else {
        printf("No. The conveyor belt cannot carry the packages.\n");
    }

    return 0;
}