
/* RMD
 * rob.monty.del@comunidad.unam.mx
 * 09/09/2022*/



#include <iostream>
using namespace std;
#define N 10

int main() {
    //definir un arreglo
    int arr[N]{1};
    int n = sizeof(arr)/ sizeof(arr[0]);
    //iterar arreglo
    for(int i=0;i<N;i++){
        arr[i]= i+i;
        cout << arr[i] << "\t";
    }


    return 0;
}