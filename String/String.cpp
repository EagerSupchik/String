#include <iostream>
using namespace std;

void ZipText(string g)
{
    for (int i = 0; i < size(g) - 1; i++)
    {
        if (g[i] == '.' and g[i + 1] == '.')
        {
            g.erase(i, 1);
            i--;
        }
            

        if (i == (size(g) - 2) && g[i + 1] == '.')
        {
            g.erase(i + 1, 1);
        }
    }
    cout << g;
}

int main()
{
    string g = ".........Hello.....World...!...!..."; //Заменил пробелы на точки, чтобы продемнострировать работу функции
    ZipText(g);
}