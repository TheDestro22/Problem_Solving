#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    int n , k , next = 0;
   
    cin >> n >> k;

    vector <int> scores(n);

    for (int i = 0; i < n; i++){

        cin >> scores[i];
    }

    for (int j = 0; j < n; j++){

        if (scores[j] >= scores[k - 1] && scores[j] > 0){

            next++;
        }
    }

    cout << next << endl;

}