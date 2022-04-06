#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int x, y;

    scanf("%d\n%d", &x, &y);//scanf lee varios datos a la vez y los guarda en una cadena
     
    for (int i=x; i<y+1; i++) {
        switch(i) {
            case 1: printf("one\n"); break;
            case 2: printf("two\n"); break;
            case 3: printf("three\n"); break;
            case 4: printf("four\n"); break;
            case 5: printf("five\n"); break;
            case 6: printf("six\n"); break;
            case 7: printf("seven\n"); break;
            case 8: printf("eight\n"); break;
            case 9: printf("nine\n"); break;
            default:
                if (i % 2)
                    printf("odd\n");//impar
                else
                    printf("even\n");
        }
    }
    return 0;
}