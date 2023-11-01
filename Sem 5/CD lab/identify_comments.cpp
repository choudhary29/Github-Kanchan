#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    string temp;
    while (temp != "~") {
        getline(cin, temp);
        str = str + "`" + temp;
    }
    cout<<str<<endl;
    int n = str.size();
    auto i = str.begin();
    auto j = i + 1;
    while (*i != '~') {
        if (*i == '/' && *(j) == '/') {
            auto start = ++i;
            while (*i != '`') {
                i = i + 1;
                j += 1;
            }
            str.erase(start, i);
        }
        if ((*i == '/') && (*(j) == '*')) {
            auto start = i;
            i += 1;
            j += 1;
            while ((*i != '`')) {
                i += 1;
                j += 1;
            }
            str.erase(start, --i);
        }
        if (*i != '~') {
            i += 1;
            j += 1;
        }
    }
    for (auto i : str) {
        if (i == '/') {
            cout << endl;
        } else if (isalpha(i)) {
            cout << i;
        }else{
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}















// ******single line input************

// arst
// //tdds
// pghg

// ******multi line input************

// ar
// /*srt
//      ere*/
// rst

// ********random************

// hello my name is kc
// // i am doing well
// what about you







//for testing 
// cout<<str<<endl<<" "<<*start<<" "<<*i<<endl;