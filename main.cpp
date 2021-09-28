#include <iostream>
#include <vector>
#include "AFD.h"

using namespace std;
int main()
{
    ifstream entrada("entrada.txt");

    if(!(entrada.is_open()))
    {
        cout << "Erro ao abrir arquivo. Tente novamente." << endl;
        return 0;
    }

    vector<bool> sai = AFD(entrada);

    ofstream saida("saida.txt");

    for(int i = 0; i < sai.size(); i++)
    {
        if(sai[i])
            saida << "ACEITA" << endl;

        else
            saida << "REJEITA" << endl;
    }

    saida.close();

    return 0;
}
