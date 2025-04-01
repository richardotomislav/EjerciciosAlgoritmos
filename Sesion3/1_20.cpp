#include <iostream>
#include <cstdlib>  // for atof and atoi
using namespace std;

float potencia(float base, int exponente)
{
    if (exponente < 0)
        return 1 / potencia(base, -exponente);
    if (exponente == 0)
        return 1;
    if (exponente % 2 == 1)
        return base * potencia(base, exponente / 2) * potencia(base, exponente / 2);
    return potencia(base, exponente / 2) * potencia(base, exponente / 2);
}

int main()
{
    float base = 2;
    int exponente = 2;

    cout << base << " raised to " << exponente << " = " << potencia(base, exponente) << endl;
    return 0;
}

