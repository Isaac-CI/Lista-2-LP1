#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string s, str, str2;
    cout << "Digite o caminho relativo do arquivo que deseja copiar caso ele nao esteja na pasta deste programa\nou apenas seu nome, caso ele ja esteja nesta pasta. Em ambos os casos nao digite a extensao." << endl;
    cin >> s;
    str2 = s + ".txt";
    str = s + "_bkp.txt";
    const char *aux = &str2[0];
    const char *auxiliar = &str[0];
    ifstream stream(aux, ios::in);
    ofstream fluxo(auxiliar, ios::out);
    if(!stream.is_open())
    {
        cout << "arquivo nao encontrado" << endl;
    }
    if(!fluxo.is_open())
    {
        cout << "Falha ao abrir/criar o arquivo" << endl;
    }
    char c;
    while(stream.get(c))
    {
        fluxo << c;
    }

    fluxo.close();
    stream.close();
    return 0;
}
