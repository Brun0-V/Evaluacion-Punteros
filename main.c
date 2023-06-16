#include <stdio.h>

void convertirTodoMayuscula(char* oracion);
void convertirTodoMinuscula(char* oracion);
void convertirPrimerLetraMayuscula(char* oracion);



int main() {
    char stringInput[250];
    printf("Ingrese una oracion de hasta 250 caracteres: "); scanf("%[^\n]s", stringInput);
    printf("String original: %s", stringInput);
    convertirTodoMayuscula(stringInput);
    printf("String todo mayuscula: %s\n", stringInput);
    convertirTodoMinuscula(stringInput);
    printf("String todo minuscula %s\n", stringInput);
    convertirPrimerLetraMayuscula(stringInput);
    printf("String con la primera letra en mayuscula: %s\n", stringInput);
    return 0;
}

void convertirTodoMayuscula(char* oracion){
    do 
    {
        if (*oracion >= 'a' && *oracion <= 'z')
            *oracion = *oracion - 32;
        oracion++;
    } while (*oracion != '\0'); 
}

void convertirTodoMinuscula(char* oracion){
    do 
    {
        if (*oracion >= 'A' && *oracion <= 'Z')
            *oracion = *oracion + 32;
        oracion++;
    } while (*oracion != '\0'); 
}

void convertirPrimerLetraMayuscula(char* oracion){
    int first = 1;
    do{   
        if (first){
            if (*oracion >= 'a' && *oracion <= 'z' && *oracion != ' '){
                *oracion = *oracion - 32;
                first = 0;
            }
        }
        else{
            if (*oracion == ' ')
                first = 1;
        }
        oracion++;
    } while (*oracion != '\0'); 
}