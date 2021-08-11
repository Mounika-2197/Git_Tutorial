#include<iostream>
using namespace std;

int main(){
    auto a = 10, b = 5.5;
    auto comp = a<=>b < 0;
    if(!comp){
        cout << "yaayyy Mou!!" << endl;
    }
}