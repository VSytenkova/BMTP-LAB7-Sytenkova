#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("chcp 1251 & cls");
    int numbers[14];
    int positive = 0;
    int suma = 0;
    printf("������ 14 �����: \n");
    for(int i = 0; i < 14; i++)
        scanf("%d", &numbers[i]);
    for(int i = 0; i < 14; i++){
        if (numbers[i] > 0) {
            positive += 1;
            suma = suma + numbers[i];
        }
    }
    printf("\nʳ������ �������� ����� = %d\n���� �������� ����� = %d", positive, suma);
    return 0;
}
