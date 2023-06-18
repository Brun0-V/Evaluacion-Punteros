#include <stdio.h>

void convertirTodoMayuscula(char* oracion);
void convertirTodoMinuscula(char* oracion);
void convertirPrimerLetraMayuscula(char* oracion);

int main() {
    char stringInput[250];          //Inicializa un string de 250 caracteres.
    printf("Ingrese una oracion de hasta 250 caracteres: "); scanf("%[^\n]s", stringInput);     //Pide al usuario que lo ingrese.
    printf("String original: %s\n", stringInput);      //Imprime el string original
    convertirTodoMayuscula(stringInput);        //Lo convierte a mayusculas
    printf("String todo mayuscula: %s\n", stringInput);     //Imprime el string modificado
    convertirTodoMinuscula(stringInput);        //Lo convierte a minusculas
    printf("String todo minuscula %s\n", stringInput);     //Imprime el string modificado
    convertirPrimerLetraMayuscula(stringInput);        //Cambia la primera letra de cada palabra por su mayuscula
    printf("String con la primera letra en mayuscula: %s\n", stringInput);     //Imprime el string modificado
    return 0;
}

/**
* Funcion que convierte un string de minuscula a mayuscula usando punteros
* 
* @param oracion - char type Array de N espacios
*/
void convertirTodoMayuscula(char* oracion){
    do {
        if (*oracion >= 'a' && *oracion <= 'z') //Revisa si el caracter al que se apunta es una letra minuscula:
            *oracion -= 32;                              //Se le resta 32, que en el codigo ASCII esel equivalente a esa misma letra en mayuscula.     
        oracion++; //Incrementa el valor del puntero, pasando al proximo lugar del string.
    } while (*oracion != '\0');  //Ejecuta el codigo hasta que el caracter '\0' (null) sea encontrado.
}


/**
* Funcion que convierte un string de mayuscula a minuscula usando punteros
* 
* @param oracion - char type Array de N espacios
*/
void convertirTodoMinuscula(char* oracion) {
    do {
        if (*oracion >= 'A' && *oracion <= 'Z') //Revisa si el caracter al que se apunta es una letra mayuscula:
            *oracion += 32;                              //Se le suma 32, que en el codigo ASCII esel equivalente a esa misma letra en minuscula.
        oracion++; //Incrementa el valor del puntero, pasando al proximo lugar del string.
    } while (*oracion != '\0');  //Ejecuta el codigo hasta que el caracter '\0' (null) sea encontrado.
}

/**
* Funcion que convierte la primera letra de cada palabra en un string a mayuscula usando punteros
* 
* @param oracion - char type Array de N espacios
*/
void convertirPrimerLetraMayuscula(char* oracion){
    int first = 1;
    do {   
        if (first){   //Si la flag es 1 (o diferente de 0):
            if (*oracion >= 'a' && *oracion <= 'z' && *oracion != ' '){  //Revisa si el caracter al que se apunta es una letra minuscula y si no es un espacio:
                *oracion -= 32;                                                              //Se le resta 32, que en el codigo ASCII esel equivalente a esa misma letra en mayuscula
                first = 0;                                                                     //La flag de primera letra se vuelve a 0.
            }
        }
        else{    //Si la flag es 0 :
            if (*oracion == ' ') // Y el caracter actual es un ' ' (espacio):
                first = 1;         //La flag de primera letra vuelve a ser 1, para en el proximo ciclo aplicarle la mayuscula.
        }
        oracion++; //Incrementa el valor del puntero, pasando al proximo lugar del string.
    } while (*oracion != '\0');  //Ejecuta el codigo hasta que el caracter '\0' (null) sea encontrado
}
