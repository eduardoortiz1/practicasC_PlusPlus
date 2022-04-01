#include <iostream>
#include <cstdio>
using namespace std;

int main() {
        // Variable x tipo de dato
        int mientero;
        long milong;
        char michar;
        float mifloat;
        double midouble;

        scanf("%d %ld %c %f %lf", &mientero, &milong, &michar, &mifloat, &midouble );

        printf("%d\n", mientero);
        printf("%ld\n", milong);
        printf("%c\n", michar);
        printf("%.3f\n", mifloat);
        printf("%.9lf\n", midouble);

    return 0;
}