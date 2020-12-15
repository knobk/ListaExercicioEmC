#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    fstream arq;
    string linha;

    for (int i = 1; i < argc; i++)
    {
        arq.open(argv[i], ios::in);

        if (arq.is_open())
        {
            while (getline(arq, linha))
            {
                cout << linha << endl;
            }
            arq.close();
        }
        else
        {
            cout << "Arquivo não especificado" << endl;
        }
    }

    return 0;
}