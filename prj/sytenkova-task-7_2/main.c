#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("chcp 1251 & cls");
    int numbers[14];
    int positive = 0;
    int suma = 0;
    printf("Введіть 14 чисел: \n");
    for(int i = 0; i < 14; i++)
        scanf("%d", &numbers[i]);
    for(int i = 0; i < 14; i++){
        if (numbers[i] > 0) {
            positive += 1;
            suma = suma + numbers[i];
        }
    }
    printf("\nКількість додатних чисел = %d\nСума додатних чисел = %d", positive, suma);
    return 0;
}
