#include<iostream>
#include<string>

int p = 3, q = 4;

using namespace std;

void goL(int x, int y)
{
    int a, b;
    a = 3 * x - y;
    b = 4 * x - y;
    p = a;
    q = b;
}

void goM(int x, int y)
{
    int a, b;
    a = x + y;
    b = 2 * x + y;
    p = a;
    q = b;
}

void goR(int x, int y)
{
    int a, b;
    a = 2 * y - x;
    b = 3 * y - 2* x ; 
    p = a;
    q = b;
}

int main()
{
    string s = "";
    cout << "Enter the path to be traversed in the tree: ";
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'L') 
        {
            goL(p, q);
        }
        else if (s[i] == 'M') 
        {
            goM(p, q);
        }
        else if (s[i] == 'R') 
        {
            goR(p, q);
        }
    }

    int a, b, c;
    a = (q - p) * p;
    b = (p - q / 2) * q;
    c = (q - p) * q + p * p - q * q / 2;
    cout << "The Pythagorean triplet obtained after traversal is: " << a << "-" << b << "-" << c;

    return 0; 
}
