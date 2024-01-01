#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int char2int (char caracter)
{
    if (caracter<=9)
    {
        return caracter - '0';
    }

    caracter = tolower (caracter);
    if (caracter>= 'a' && caracter<='z')
    {
        return caracter - 'a' + 10;
    }else
    {
        return -1;
    }



}

const char* coduri[100];
void adauga_cod(char caracter, const char *cod)
{
    coduri[char2int(caracter)]=cod;



}

void init()
{
    adauga_cod('0', "-----");
    adauga_cod('1', ".----");
    adauga_cod('2', "..---");
    adauga_cod('3', "...--");
    adauga_cod('4', "....-");
    adauga_cod('5', ".....");
    adauga_cod('6', "-....");
    adauga_cod('7', "--...");
    adauga_cod('8', "---..");
    adauga_cod('9', "----.");
    adauga_cod('A', ".-");
    adauga_cod('B', "-...");
    adauga_cod('C', "-.-.");
    //adauga_cod('CH', "----");
    adauga_cod('D', "-..");
    adauga_cod('E', ".");
    adauga_cod('F', "..-.");
    adauga_cod('G', "--.");
    adauga_cod('H', "....");
    adauga_cod('I', "..");
    adauga_cod('J', ".---");
    adauga_cod('K', "-.-");
    adauga_cod('L', ".-..");
    adauga_cod('M', "--");
    adauga_cod('N', "-.");
    adauga_cod('O', "---");
    adauga_cod('P', ".--.");
    adauga_cod('Q', "--.-");
    adauga_cod('R', ".-.");
    adauga_cod('S', "...");
    adauga_cod('T', "-");
    adauga_cod('U', "..-");
    adauga_cod('V', "...-");
    adauga_cod('W', ".--");
    adauga_cod('X', "-..-");
    adauga_cod('Y', "-.--");
    adauga_cod('Z', "--..");
}

int main()
{
    char caracter;
    init();

    while (cin>>caracter)
    {
        if (char2int(caracter)==-1)
        {
                cout<<"   ";
        }else
        {
            cout<<coduri[char2int(caracter)];
        }


    }
       // cout << cod_morse(line[i], lista[], cod[]) << endl;
}




