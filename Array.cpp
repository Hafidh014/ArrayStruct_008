#include <iostream>
using namespace std;

int main(){
    int dataku[5] = {10,20,30,40,50};
    //
    int datamu[5];
    int x;

    cout << "data ke -3 : " << dataku[2] << endl;
    
    x = dataku[2];
    dataku[2] = 600;
    cout << "data ke -3 : " << dataku[2] << endl;

    
}