//
//  main.c
//  Project_Builder
//
//  Created by Raunak Singh on 08/07/24.
//

#include <stdio.h>

int main(void) {
    char c;
    unsigned char d;
    int i;
    unsigned int j;
    long int k;
    unsigned long int m;
    float x;
    double y;
    
    printf("Enter a signed char and an unsigned char: ");
    scanf("%c %c", &c, &d);
    printf("%c %c \n", c, d);
    
    printf("Enter a signed int and an unsigned int: ");
    scanf("%d %u", &i, &j);
    printf("%d %u \n", i, j);
    
    printf("Enter a signed long int and an unsigned int: ");
    scanf("%ld %lu", &k, &m);
    printf("%ld %lu \n", k, m);
    
    printf("Enter a float and a double: ");
    scanf("%f %lf", &x, &y);
    printf("%f %lf \n", x, y);
    
    return 0;
}
