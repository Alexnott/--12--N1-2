#include <iostream>
using namespace std;

int main() {
      int a, b;
    char op[2];

    cin >> a >> op >> b;

    if (op[0] == '+') cout << a + b;
       else if (op[0] == '-') cout << a - b;
       else if (op[0] == '*') cout << a * b;
    else if (op[0] == '/') cout << (double)a / b;
    else if (op[0] == '%') cout << a % b;
    else if (op[0] == '&') cout << (a & b);
    else if (op[0] == '|') cout << (a | b);
    else if (op[0] == '^') cout << (a ^ b);
       else if (op[0] == '<' && op[1] == '<') cout << (a << b);
    else if (op[0] == '>' && op[1] == '>') cout << (a >> b);
    else cout << "error";
   
   return 0;
}
