# include <iostream>

using namespace std;

int main() {

  char operation;
  float number1, number2;

  cout << "Enter operator: +, -, *, /: ";
  cin >> operation;

  cout << "Enter two operands: ";
  cin >> number1 >> number2;

  switch(operation) {

    case '+':
      cout << number1 << " + " << number2 << " = " << number1 + number2;
      break;

    case '-':
      cout << number1 << " - " << number2 << " = " << number1 - number2;
      break;

    case '*':
      cout << number1 << " * " << number2 << " = " << number1 * number2;
      break;

    case '/':
      cout << number1 << " / " << number2 << " = " << number1 / number2;
      break;

    default:
      
      cout << "Try again! This operator is not correct";
      break;
  }

  return 0;
}
