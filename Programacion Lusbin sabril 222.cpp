#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a,b,c,d,x,y;

    cout << "Ingrese coeficiente a: ";
    cin >> a;

    while (a == 0) {
        cout << "Ingrese coeficiente a: ";
        cin >> a;
    }

    cout << "Ingrese coeficiente b: ";
    cin >> b;
    cout << "Ingrese coeficiente c: ";
    cin >> c;

    d = b*b-4*a*c;
    if (d > 0) {
        x = (-b+sqrt(d))/(2*a);
        y = (-b-sqrt(d))/(2*a);
        cout << "x1 = " << x << endl;
        cout << "x2 = " << y << endl;
    }
    else if (d < 0) {
        x = (-b+sqrt(-d))/(2*a);
        y = (-b-sqrt(-d))/(2*a);
        cout << "x1 = " << x << endl;
        cout << "x2 = " << y << endl;
    }
    else if (d == 0) {
        cout << "La ecuacion no tiene solucion, no se puede calcular raices de este tipo";

    return 0;
}
}
