#include<bits\stdc++.h>
using namespace std;
bool IsOperator(string s){ 
    if(s=="+" || s=="-" || s=="*" || s=="/" ||
       s=="<" || s==">" || s=="=" ){
        return true;
    }
    else{
        return false;
    }
}
bool IsInteger(string s){
    for(auto i:s){
        if(!isdigit(i) || i=='.'){
            return 0;
        }
    }
    return true;
}
bool IsDelimiter(string s){
    if(s=="+" || s=="-" || s=="*" || s=="/" ||
       s=="<" || s==">" || s=="=" || s=="(" ||
       s==")" || s=="[" || s=="]" || s=="{" ||
       s=="}" || s=="," || s==";" || s==" "){
        return true;
    }
    else{
        return false;
    }
}
bool IsKeyword(string s){
    if((s == "if") || (s == "else") ||(s == "while") || (s == "do") ||
        (s == "break") ||(s == "continue") || (s == "int") || (s == "double") ||
        (s == "float") || (s == "return") || (s == "char") || (s == "case") || 
        (s == "char") || (s == "sizeof") || (s == "long") || (s == "short") ||
        (s == "typedef") || (s == "switch") || (s == "unsigned") || (s == "void") ||
        (s == "static") || (s == "struct") || (s == "goto")){
            return true;
    }
    else{
        return false;
    }
}
bool IsIdentifier(string s){
    for(auto i:s){
        if(i=='_'){
            return true;
        }
        else if(isalpha(i)){
            return true;
        }
        else{
            return false;
        }
    }
    return true;
}
void parse(string s) {
    vector<string> v;
    int n = s.length();
    string temp;
    for (int i = 0; i < n; i++) {
        if (s[i] != ' ') {
            temp += s[i];
        } else {
            v.push_back(temp);
            temp = "";
        }
    }
    for (auto i : v) {
        if (IsKeyword(i)) {
            cout << i << " is a keyword\n";
        } else if (IsIdentifier(i)) {
            cout << i << " is an identifier\n";
        } else if (IsInteger(i)) {
            cout << i << " is an integer\n";
        } else if (IsOperator(i)) {
            cout << i << " is an operator\n";
        } else if (IsDelimiter(i)) {
            cout << i << " is a delimiter\n";
        } else {
            cout << i << " is an invalid identifier\n";
        }
    }
}

int main(){
    // string s = "int a = k * b + 1c ; ";
    // gets(s);
    string s;
    getline(cin,s);
    parse(s); 
    return 0;
}