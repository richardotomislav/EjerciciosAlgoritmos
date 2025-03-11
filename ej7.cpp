/*

Tenemos n ≥ 2 datos de tipo real almacenados en un vector y queremos encontrar,
entre todos los posibles pares de datos, un par tal que la diferencia entre los
dos valores del par sea mínima (por ejemplo, para emparejar a los dos jugadores
que tienen la puntuación más similar en un videojuego).

 ¿Cómo resolverías el problema, y qué coste tendría, sin ordenar el vector?
    Con el algoritmo propuesto, sería de orden de O(N^2).

 ¿Sería mejor ordenar primero el vector con un algoritmo de coste O(n^2) y aprovechar después esa ordenación?
    Teniendo en cuenta esto, no cambiaría tal cual, ya que ambos algoritmos siguen siendo de O(N^2) y
    por lo tanto, no mejoraría.
    Aunque como tal, el algoritmo propuesto tendría la solución en la primera iteración del bucle.

 ¿Sería mejor ordenarlo con un algoritmo de coste O(n log n) y aprovechar después esa ordenación?
    En este caso, la solución sería mucho mejor. Aunque con el algoritmo propuesto se necesitaría
    una condición adicional para detectar si en la primera iteración es la final.

 ¿Qué harías si no fuese posible modificar el vector y cómo afectaría eso al coste temporal?
    Sería lo mismo que la primera pregunta.

*/

#include <iostream>

using namespace std;

// Test with 2 elements
// int vector[] = {8, 5};

// Test with 3 elements
// int vector[] = {12, 7, 9};

// Test with 4 elements
// int vector[] = {15, 3, 10, 8};

// Test with 5 elements
// int vector[] = {21, 17, 6, 19, 11};

// Test with 6 elements
// int vector[] = {25, 14, 9, 20, 16, 7};

// Test with 7 elements
// int vector[] = {31, 18, 23, 5, 27, 13, 29};

// Test with 8 elements
// int vector[] = {40, 22, 36, 10, 33, 26, 38, 15};

// Test with 9 elements
// int vector[] = {45, 19, 32, 11, 37, 24, 43, 17, 30};

// Test with 10 elements
int vector[] = {50, 28, 41, 13, 46, 22, 39, 19, 35, 26};

int currentLowestSubtraction = 0;
int currentPossibleFirst = 0;
int currentPossibleSecond = 0;
bool firstTime = true;

int contador = 0;
// int currentLowestSubtractionPair[] = {0, 0};

int main()
{
    cout << "Hello World\n";
    int arraySize = sizeof(vector) / sizeof(vector[0]);
    cout << sizeof(vector) << "\n";
    cout << sizeof(vector[0]) << "\n";
    cout << arraySize << "\n";

    for (int i = 0; i < arraySize; i++)
    {
        for (int j = i; j < arraySize; j++)
        {
            contador++;

            if (i == j)
                continue;

            int substraction = abs(vector[i] - vector[j]);
            if (substraction == 0)
            {
                cout << "Pos: " << i << " " << j << "\n";
                return 0;
            }

            if (firstTime)
            {
                currentLowestSubtraction = substraction;
                firstTime = false;
                continue;
            }

            if (substraction < currentLowestSubtraction)
            {
                currentPossibleFirst = i;
                currentPossibleSecond = j;
                currentLowestSubtraction = substraction;
            }
        }
    }
    cout << "Contador: " << contador << "\n";
    cout << currentLowestSubtraction << "\n";
    cout << "Pos: " << currentPossibleFirst << " " << currentPossibleSecond << "\n";
    cout << "Finishing program\n";

    return 0;
}
