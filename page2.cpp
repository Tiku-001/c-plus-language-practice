#include <iostream>
#include <string>
using namespace std;
int main()
{
    char str[40];
    cout << "enter a name" << endl;
    gets(str);
    cout << "Name:";
    puts(str);
    return 0;
}