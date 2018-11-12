#include <stdbool.h>
void main(){
       
    // Hay que declarar el tipo de la variable.
    int numero = 42;
    bool booleano = true;
           
    // El programa detecta el error aqui antes de ser ejecutado.
    float error = numero + booleano;
    
    // Esto tampoco estaria permitido.
    booleano = 3.49;
}