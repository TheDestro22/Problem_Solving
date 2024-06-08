#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    int n , counter , problems = 0;
    int trust[3];

    cin >> n;

    for (int i = 0; i < n; i++){
        counter = 0;

        for (int j = 0; j < 3; j++){

            cin >> trust[j];

            if (trust[j] == 1){

                counter++;

            }
        }

        if (counter >= 2){

            problems++;
        }
        }
        cout << problems << endl;
}