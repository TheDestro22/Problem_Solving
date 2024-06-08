#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    int n;

    cin >> n;

    for (int i = 0; i < n; i++){

        string word;

        cin >> word;

        if (word.size() > 10){

            string new_word;
            new_word.push_back(word[0]);
            new_word.append(to_string(word.size() - 2));
            new_word.push_back(word[word.size() - 1]);
            
            cout << new_word << endl;
        }else{

            cout << word << endl;

        }
    }
}