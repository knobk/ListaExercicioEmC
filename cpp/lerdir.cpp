#include <iostream>
#include<dirent.h>

using namespace std;

int main (int argc, char *argv[]){
    DIR *dir;
    dir = opendir("oi");

    if (dir)
    {
        cout << "Existe" << endl;
    }else
    {
        cout << "Não Existe" << endl;
    }    

    return 0;
}