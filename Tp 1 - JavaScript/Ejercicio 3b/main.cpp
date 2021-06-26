#include <iostream>

using namespace std;

int main()
{
     int m1,m2,b1,b2,x,y;

    cout << "Ingrese la pendiente de la recta y1:" << endl;
    cin >> m1;
    cout << "Ingrese la ordenada al origen de la recta y1:" << endl;
    cin >> b1;
    cout << "Ingrese la pendiente de la recta y2:" << endl;
    cin >> m2;
    cout << "Ingrese la ordenada al origen de la recta y2:" << endl;
    cin >> b2;

    if (m1==m2 && b1==b2) //rectas iguales
    {
        cout<< "Las rectas son iguales" << endl;
    }
    else {
        if (m1==m2 && b1!=b2) //rectas paralelas no se cruzan
        {
            cout << "Las rectas son paralelas y nunca se cruzan" << endl;
        }

        else //intersección
        {
          x = (b2-b1) / (m1-m2);
          y = (m1*x + b1);
          cout << "Las rectas se intersectan en el punto: (" << x << ";" << y << ")" << endl;
        }
    }
    cout << "Finalizo el programa" << endl;
    return 0;
}
