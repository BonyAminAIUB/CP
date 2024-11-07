#include <iostream>
using namespace std;
void swap(int *a, int *b){
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
void show(int *a, int *b){

    cout << "Number1: " << *a << endl;
    cout << "Number1: " << *b << endl;
}
int main(){
    int num1 = 10, num2 = 20;
    swap(&num1, &num2);
    show(&num1, &num2);
}