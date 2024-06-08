#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    int stats , x = 0;
    string statment;

    cin >> stats;

    for (int i = 0; i < stats; i++){

        cin >> statment;

        if (statment == "++X" || statment == "X++"){

            x++;

        }else{

            x--;

        }


    }

    cout << x << endl;

}