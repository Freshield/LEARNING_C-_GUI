
#include <cstdlib>
#include <ctime>
#include <iostream>
#include "encrypt.h"

using namespace std;

Encrypt::Encrypt()
{
    set_code_array();
}

void Encrypt::set_code_array(string s)
{
    code_array = s;
}

void Encrypt::set_code_array()
{
    srand(time(0));

    int a = 0;
    int b = 0;

    do
    {
        a = rand() % 10;
        b = rand() % 10;
    } while ((a % 2) == 0);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    int x, y, m;
    char c = 'a';
    string s;

    for (int i = 1; i <= 26; i++)
    {
        x = c;
        y = x * a + b;
        m = y % 26;
        s += (char)m + DIFF;
        c++;
    }

    code_array = s;
}

string Encrypt::get_code_array()
{
    return code_array;
}

string Encrypt::ToEncode(string s)
{
    char c;

    string r;

    int m;

    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) >= DIFF && s.at(i) < (DIFF + NUM))
        {
            c = s.at(i);

            m = c - DIFF;

            r += get_code_array().at(m);

        }
        else
        {
            r += s.at(i);
        }
    }
    return r;
}

string Encrypt::ToDecode(string s)
{
    string r;

    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) >= DIFF && s.at(i) < (DIFF + NUM))
        {
            for (int j = 0; j < NUM; j++)
            {
                if (s.at(i) == get_code_array().at(j))
                {
                    r += (char)j + DIFF;
                    break;
                }
            }

        }
        else
        {
            r += s.at(i);
        }
    }
    return r;
}
