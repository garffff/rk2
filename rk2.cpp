#include <iostream>
#include <string>

using namespace std;

void Insert_element(char a, size_t pos, char* &arr)
{
    size_t l = 0;
    while(arr[l] != '\0') ++l;
    char* b = new char[l + 1];
    memcpy(b, arr, pos);
    b[pos] = a;
    memcpy(b + pos + 1, arr + pos, l - pos);
    memcpy(arr, b, l + 1);
    delete[] b;
}

int main()
{
    cout << "Insert word" << endl;
    string p;
    char a;
    int pos;
    cin >> p;
    char* k = new char[p.size()];
    for(char i = 0; i < p.size(); ++i) k[i] = p[i];
    cout << "Insert symbol and position" << endl;
    cin >> a >> pos;
    Insert_element(a, pos, k);
    for(char i = 0; i < p.size() + 1; ++i) cout << k[i];
    return 0;
}
