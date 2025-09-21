#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    int cont = 1;

    cin >> input;

    while (input != "#"){
        
        if(input == "HELLO"){
            cout <<"Case "<<cont<<": "<< "ENGLISH" << '\n'; 
        }
        else if (input == "HOLA")
        {
            cout <<"Case "<<cont<<": "<< "SPANISH" << '\n'; 
        }
        else if (input == "HALLO")
        {
            cout <<"Case "<<cont<<": "<< "GERMAN" << '\n'; 
        }
        else if (input == "BONJOUR")
        {
            cout <<"Case "<<cont<<": "<< "FRENCH" << '\n'; 
        }
        else if (input == "CIAO")
        {
            cout <<"Case "<<cont<<": "<< "ITALIAN" << '\n'; 
        }
        else if (input == "ZDRAVSTVUJTE")
        {
            cout <<"Case "<<cont<<": "<< "RUSSIAN" << '\n'; 
        }
        else{
            cout <<"Case "<<cont<<": "<< "UNKNOWN" << '\n'; 
        }
        
        cont ++;
        cin >> input;
    }
    
    
    return 0;
}