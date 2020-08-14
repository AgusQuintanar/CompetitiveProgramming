#ifdef LOCAL
#include <iostream>
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define EPS 0.0000001
#else
#include <bits/stdc++.h>
#define debug(x) 42
#define debug_c(a) 42
#endif

#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unordered_map<char, vector<char>> keyboard;
    keyboard['q'] = {'q', 'w'};
    keyboard['w'] = {'q', 'e'};
    keyboard['e'] = {'w', 'r'};
    keyboard['r'] = {'e', 't'};
    keyboard['t'] = {'r', 'y'};
    keyboard['y'] = {'t', 'u'};
    keyboard['u'] = {'y', 'i'};
    keyboard['i'] = {'u', 'o'};
    keyboard['o'] = {'i', 'p'};
    keyboard['p'] = {'o', 'a'};
    keyboard['a'] = {'p', 's'};
    keyboard['s'] = {'a', 'd'};
    keyboard['d'] = {'s', 'f'};
    keyboard['f'] = {'d', 'g'};
    keyboard['g'] = {'f', 'h'};
    keyboard['h'] = {'g', 'j'};
    keyboard['j'] = {'h', 'k'};
    keyboard['k'] = {'j', 'l'};
    keyboard['l'] = {'k', ';'};
    keyboard[';'] = {'l', 'z'};
    keyboard['z'] = {';', 'x'};
    keyboard['x'] = {'z', 'c'};
    keyboard['c'] = {'x', 'v'};
    keyboard['v'] = {'c', 'b'};
    keyboard['b'] = {'v', 'n'};
    keyboard['n'] = {'b', 'm'};
    keyboard['m'] = {'n', ','};
    keyboard[','] = {'m', '.'};
    keyboard['.'] = {',', '/'};
    keyboard['/'] = {'.', '/'};

    string direction, word, wordFixed = ""; cin >> direction >> word;
    short int index = (direction == "L" ? 1 : 0);
    for (const char &c : word) wordFixed += keyboard.at(c)[index];

    cout << wordFixed << endl;
}

// 31 ms	200 KB
