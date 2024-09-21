#include <iostream>

using namespace std;

void non_return_func(string nama, long long nim)
{
    cout << "nama saya "<< nama << " dengan NIM " << nim <<endl;
}

int return_func(int tinggi)
{
    if (tinggi <= 0)
    {
        return -1;
    }
    else if (tinggi <= 150)
    {
        return tinggi + 20;
    }
    else
    {
        return tinggi - 5;
    }
}


int main()
{
    cout << "  \\    /\\ " << endl;
    cout << "   )  ( ')" << endl;
    cout << "  (  /  ) " << endl;
    cout << "   \\(__)|" << endl;

    cout << "\nHola el praktikumer PROGDAS 2024!!! \n \n" << endl;

    cout << "[FUNCTION NON RETURN]" << endl;
    non_return_func("el romano", 21120122130062);

    cout << "\n[RETURN FUNCTION]" << endl;
    cout << "Tinggi saya sekitar \n \n" << return_func(150);



    return 0;
}



