#include <iostream>
using namespace std;

int suma(int a, int b);

int main(){
    cout << "Hola Mundo!" << endl ;
    
    int i = 0;   
    for (i; i < 10; i++){
        cout << i << endl;
    }
    
    i = 0;
    while(i<5){
        cout<< i << endl;
        i ++;
    }
    
    //cout << suma(3,4) << endl;

    return 0;
}

int suma(int a, int b){
    return a+b;
}