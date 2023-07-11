# Vectores o Arreglos  
                

## ¿Qué es un vector o arreglo?
Un vector o arreglo unidimensional es un tipo de dato que almacena una secuencia de datos del mismo tipo. Los elementos de un vector se almacenan en zonas contiguas de memoria y se puede acceder a ellos de manera directa mediante un índice o posición.

## Posición y tamaño
La posición de los elementos del vector siempre comienzan desde el 0 y la última es el tamañao del mismo menos 1, es decir, si tenemos un vector de 5 elementos se vería como sigue:

|Elemento 1|Elemento 2|Elemento 3|Elemento 4|Elemento 5|

| Posición  0  | Posición 1 |Posición  2 | Posición   3 | Posición  4 |

## Definición

tipo nombre[tamaño];

i.e.

int numeros[10];

char letras[5];

float reales[15];


## Inicializar desde su definición

int numeros[] = {1,2,3,4,5,15};

char letras[] = {'a','e','i','o','u'};

float reales[] = {3.1416,2.519};