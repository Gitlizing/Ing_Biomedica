#include <iostream>
#include <string>

using namespace std;

int main()
{
    
    string Frase;
    cout << "Ingrese una frase: ";
    getline(cin, Frase);

    for (size_t i = 0; i < Frase.length(); ++i)
    {
        if (Frase[i] == 'h')
        {
            Frase[i] = 'f'; // cambiar 'h' por 'f'   
        }
    }

    cout << "Nueva frase: " << Frase << endl;
    return 0;
}    