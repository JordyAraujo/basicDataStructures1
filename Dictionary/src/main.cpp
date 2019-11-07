//
//  WordCounter.cpp
//
//  Created by Eiji Adachi Medeiros Barbosa
//

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <list>
#include "Dictionary.h"

using namespace std;

int main(int argc, char const *argv[])
{
    if (argc < 2)
    {
        cout << "ERRO: Programa deve receber nome de arquivo como parâmetro de entrada.\n";
        return 1;
    }
    
    string fileName = argv[1];
    
    ifstream file(fileName);
    
    
    if (!file.is_open())
    {
        cout << "ERRO: Programa não conseguiu abrir o arquivo '" + fileName + "'.\n";
        return 1;
    }
    
    Dictionary<string, list<int>> dic;
    int count = 1;
    
    while (!file.eof())
    {
        string line;
        getline(file,line);
        
        // Transforma todos caracteres para caixa alta (maiúsculo)
        transform(line.begin(), line.end(), line.begin(), ::toupper);
        
        istringstream iss(line);
        
        string word;
        while(iss>>word)
        {
            // Apaga todos caracteres que não são letras nem números
            word.erase( std::remove_if(word.begin(), word.end(), not1(::ptr_fun((int(*)(int))::isalnum))), word.end() );
            if( !word.empty() )
            {
                 if(!dic.contains(word))
                 {
                     list<int> l;
                     l.push_back(count);
                     dic.put( word, l );
                 } else
                 {
                     list<int> r = dic.get(word);
                     r.push_back(count);
                     dic.put( word, r );
                 }
            }
        }
        count++;
    }
    file.close();
    
        for( auto word : {"BELA", "GRIMM", "REI", "FILHO", "JARDIM", "MESMO"} )
        {
            cout << "These are the lines where I found: " << word << endl;
            
            if( !dic.contains(word) )
            {
                cout << "Not found" << endl;
            }
            else
            {
                auto l = dic.get( word );
                for( auto s : l )
                {
                    cout << s << " ";
                }
                cout << endl << endl;
            }
        }
        return 0;
}

