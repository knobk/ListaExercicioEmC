#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    fstream arq;

    for (int i = 1; i < argc; i++)
    {
        arq.open(argv[i], ios::in);

        if (arq.is_open())
        {
            cout << "Existe" << endl;
            arq.close();
        }
        else
        {
            cout << "Não existe" << endl;
        }
    }

    return 0;
}