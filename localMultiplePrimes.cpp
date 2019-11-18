#include <iostream>
const int primeBound = 100;
using namespace std;

int main(){
    //Take a number (i*j)+/-1, what is the probability of that number being prime up to a bound primeBound.
    //m being the multiplication factor such that (i*j)+1<=upperNum, i>=3
    int upperNum = 0;
    int j = 1;

   for(int i = 3; i<primeBound; i++){
       while(primeBound <= (i*j)+1){
           
           j++;
       }
   } 
}