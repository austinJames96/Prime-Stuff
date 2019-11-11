#include <iostream>
const int primeBound = 85;
using namespace std;

int main() {

    int arr[primeBound] = {0};
    int primeArray[primeBound] = {0};
    int test2DArray[primeBound][primeBound-1] = {0};
    int primeArray1[primeBound-1] = {0};
    int primeArray2[primeBound-2] = {0};
    int count = 0;
    int count1 = 0;
    int count2 = 0;

    for (int i = 2; i < primeBound; i++) {
        for (int j = i * i; j < primeBound; j+=i) {
            arr[j - 1] = 1;
        }
    }

    for (int i = 2; i < primeBound; i++) { //List primes
        if (arr[i - 1] == 0){
            //cout << i << endl; 

            primeArray[count] = i;
            test2DArray[0][count] = i;
            count++;
        }
    }

    for(int i = 1; i < count; i++){
        for(int j = 1; j<count-count1; j++){
            test2DArray[i][j] = test2DArray[i-1][j] - test2DArray[i-1][j-1];
        }
    }
    cout << "Primes" << endl;
    for(int i = 0; i < count; i++){
        cout << test2DArray[0][i] << endl;
    }
    cout << "First Primes" << endl;
    for(int i = 1; i < count; i++){
        cout << test2DArray[1][i] << endl;
    }
    cout << "Second Primes" << endl;
    for(int i = 2; i < count; i++){
        cout << test2DArray[2][i] << endl;
    }

    for(int i = 9; i<count; i++){
        cout << test2DArray[9][i] << endl;
    }

    for(int j = 0; j<count-1; j++){
        for(int i = j; i<count; i++){
            cout << test2DArray[j][i] << "\t";
        }
        cout << endl;
    }

/*
    while(count1 < primeBound){
        for(int i = 0; i < count; i++){
            //cout << test2DArray[0][i] << "\t";
                
                for(int j = 0; j<count-count1; j++){
                    test2DArray[j][i] = test2DArray[j-1][i-1] - test2DArray[j-1][i-1];
                    cout << test2DArray[j][i];
                }
                
        }
        count1++;
    }
*/

/*
    for(int i = 1; i<primeBound; i++){
        for(int j = 1; j<primeBound; j++){
            test2DArray[i][j] = test2DArray[i-1][j] - test2DArray[i-1][j-1];
        }
    }
    int i = 0;
    for(int j = 1; i<primeBound; j++){

        cout << test2DArray[i][j] << "\t";
        i++;
    }*/
/*
    for (int i = 0; i < count-1; i++){
        primeArray1[count1] = primeArray[i+1] - primeArray[i];
        count1++;
    }

    for (int i = 0; i<count-2; i++){
        primeArray2[count2] = primeArray1[i+1] - primeArray1[i];
        count2++;
    }

    //cout << "\nList of Primes\t 1st Primes \t 2nd Primes" << endl;
    for (int i = 0; i < count; i++){
        cout << primeArray[i] << "\t";
        if(i<=count-2){
            cout << primeArray1[i] << "\t";
        }
        if(i<=count-3){
            cout << primeArray2[i] << "\t";
        }
        cout << endl;
    }*/
/*
    cout << "\nList of 1st Prime Changes" << endl;
    for (int i = 0; i < count1; i++){
        cout << primeArray1[i] << endl;
    }

    cout << "\nList of 2nd Prime Changes" << endl;
    for (int i = 0; i < count1; i++){
        cout << primeArray1[i] << endl;
    }
*/
}