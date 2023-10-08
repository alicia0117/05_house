#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, result;
    char operator;

    printf("Enter the calcuation: ");
    scanf("%d %c %d", &num1, &operator, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("오류: 0으로 나눌 수 없습니다.\n");
                return 1;
            }
            break;
        default:
            printf("오류: 잘못된 연산자입니다.\n");
            return 1; 
    }
    printf("result: %d %c %d = %d\n", num1, operator, num2, result);
    
    system("pause");

    return 0;
}
