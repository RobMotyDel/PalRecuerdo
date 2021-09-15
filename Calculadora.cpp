/*
Author: Roberto Montoya
Email: rob.monty.del@gmail.com
*/


#include <iostream>

using namespace std;

int main() {
    //variables
    float num1{0}, num2{0}, sum, res, mul;
    float div;
    int mod, a, b;
    char oper{1};

    //Inicio de Programa

    cout << "Calculadora basica" << endl;
    cout << "Inserta un numero" << endl;
    cin >> num1;
    cout << "Inserta un nuevo numero" << endl;
    cin >> num2;
    cout
            << "Determine la operacion usando + (para suma), - (para resta), * (para multiplicacion), / (para division), % (para modulo "
            << endl;
    cin >> oper;
    //Definicion de resultados dependiendo del operador
    if (oper == '+') {
        sum = num1 + num2;
        cout << "La suma es:" << num1 << oper << num2 << "=" << sum << endl;
    }
    if (oper == '-') {
        res = num1 - num2;
        cout << "La resta es:" << num1 << oper << num2 << "=" << res << endl;
    }
    if (oper == '/') {
        div = num1 / num2;
        cout << "La division es:" << num1 << oper << num2 << "=" << div << endl;
    }
    if (oper == '*') {
        mul = num1 * num2;
        cout << "La multiplicacion es:" << num1 << oper << num2 << "=" << mul << endl;
    }
    if (oper == '%') {
        a = num1;
        b = num2;
        mod = a % b;
        cout << "El modulo es:" << a << oper << b << "=" << mod << endl;

    }
    //Comentario añadido para que el usuario reinicie el programa si quiere volver a hacer otra operación
    cout << "Fin de calculo, reiniciar programa para comenzar uno nuevo" << endl;

    return 0;
}