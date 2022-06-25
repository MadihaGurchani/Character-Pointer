#include <iostream>

using namespace std;

int main()
{
    char *ptr;
    char character;
    ptr = &character;
    character = 'a';
    cout<<*ptr<<endl;
    cout<<(void*)ptr;;

    return 0;
}
