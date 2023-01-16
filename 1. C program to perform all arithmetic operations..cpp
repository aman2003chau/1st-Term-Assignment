#include <stdio.h>
int main(void) {
  double number1, number2;
  char op;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two numbers: ");
  scanf("%lf %lf", &number1, &number2);
  if (op == '+') {
    printf("%.1lf + %.1lf = %.1lf\n", number1, number2, number1 + number2);
  } else if (op == '-') {
    printf("%.1lf - %.1lf = %.1lf\n", number1, number2, number1 - number2);
  } else if (op == '*') {
    printf("%.1lf * %.1lf = %.1lf\n", number1, number2, number1 * number2);
  } else if (op == '/') {
    printf("%.1lf / %.1lf = %.1lf\n", number1, number2, number1 / number2);
  } else {
    printf("Error: Invalid operator\n");
  }
  return 0;
}
