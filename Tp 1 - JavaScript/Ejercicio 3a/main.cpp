#include <iostream>

using namespace std;

int main()
{
  float km, mts;

    cout << "Ingrese la velocidad en kilometros por hora que quiera convertir a metros por segundo:"<<endl;
    cin >> km;

    mts = ((km*1000)/3600);

    cout << "Los metros por segundo son: " << mts <<endl;
    cout << "Finalizo el programa" << endl;
    return 0;
}
