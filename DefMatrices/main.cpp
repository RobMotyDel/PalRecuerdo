/* RMD
 * rob.monty.del@comunidad.unam.mx
 * 19/09/2022*/


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
        srand(time(NULL));
        int f = 10;
        int c = 10;
        int A[f][c];

        for (f = 0; f < 10; f++){
            for ( c = 0; c < 10; c++){
                A [f][c] = rand() % 100;
                cout << A [f][c] << " ";//es una matriz aleatoria de 10x10
            }
            cout<<endl;
        }

    return 0;
}
