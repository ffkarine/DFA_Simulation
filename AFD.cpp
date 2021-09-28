#include "AFD.h"
using namespace std;

vector<bool> AFD(ifstream &entrada)
{
    int qtdEstados, qtdAlfabeto, qtdEstadosF, qtdTrans, qtdW;
    string caux, caux2;
    vector<string> alfabeto;
    map<string, string> trans;
    set<string> estadosF;
    vector<bool> saida;

    entrada >> qtdEstados >> qtdAlfabeto;

    for(int i = 0; i < qtdAlfabeto; i++)
    {
        entrada >> caux;
        cout << caux;
        alfabeto.push_back(caux);
    }

    entrada >> qtdEstadosF;
    entrada >> caux;

    for(int i = 0; i < qtdEstadosF; i++)
    {
        caux2 = caux[i];
        estadosF.insert(caux2);
    }

    entrada >> qtdTrans;
    ///Monta tabela de transições
    for(int i = 0; i < qtdTrans; i++)
    {
        string estOrigem, letra, estDestino;
        entrada >> estOrigem >> letra >> estDestino;
    ///Cria no map um índice "estado de origem + letra a ser lida"
    ///e iguala ao estado de destino
        trans[estOrigem+letra] = estDestino;
    ///Ex: "0a" = 1 (está no estado "0", lê "a", vai pro estado "1"
    }

    entrada >> qtdW;
    string word;
    string aux;

    ///testa as palavras
    for(int i = 0; i < qtdW; i++)
    {
        bool flag = false;
        entrada >> word;

    ///inicia sempre no estado "0"
        string estAtual = "0";
        map<string, string>::iterator itm;
        for(int j = 0; j < word.size(); j++)
        {
    ///combina o estado atual com a letra a ser lida
            itm = trans.find(estAtual + word[j]);
    ///e verifica no map se existe transição
            if(itm == trans.end())
            {
                flag = true;
                saida.push_back(false);
                break;
            }

            estAtual = itm->second;
        }

        set<string>::iterator its = estadosF.find(estAtual);
        ///se todas as transições passaram
        if(!flag)
        {
        ///verifica se parou em um estado final
            if(its == estadosF.end())
                saida.push_back(false);

            else
                saida.push_back(true);
        }
    }

    entrada.close();

    return saida;
}
