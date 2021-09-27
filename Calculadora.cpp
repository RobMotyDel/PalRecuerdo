/*
Author: Roberto Montoya
Email: rob.monty.del@gmail.com
*/


#include <iostream>

using namespace std;

int main() {
    //variables
    float num1{0}, num2{0}, resultado;
    int mod, a, b;
    char oper{1};

    //Inicio de Programa

    cout << "Este programa hace operaciones basicas entre dos numeros." << endl;
    cout << "Primer numero: " << endl;
    cin >> num1;
    cout<< "Operacion: " << endl;
    cin >> oper;
    cout << "Segundo numero: " << endl;
    cin >> num2;

    //Definicion de resultados dependiendo del operador
    if (oper == '+') {
        resultado = num1 + num2;
        cout << "Resultado: " << num1 << " + " << num2 << " = " << resultado << endl;
    }
    if (oper == '-') {
        resultado = num1 - num2;
        cout << "Resultado: " << num1 << " - " << num2 << " = " << resultado << endl;
    }
    if (oper == '/') {
        if (num2 == 0){
            cout << "Esta operacion no esta definida" << endl;
            return 0;
        }
        resultado = num1 / num2;
        cout << "Resultado: " << num1 << " / " << num2 << " = " << resultado << endl;
    }
    if (oper == '*') {
        resultado = num1 * num2;
        cout << "Resultado: " << num1 << " * " << num2 << " = " << resultado << endl;
    }
    if (oper == '%') {
        int a = static_cast<int>(num1);
        int b = static_cast<int>(num2);
        mod = a % b;
        cout << "Resultado: " << a << " % " << b << " = " << mod << endl;

    }

    return 0;
}
