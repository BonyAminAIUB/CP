#include <iostream>
using namespace std;
int main(){
    int n,i;
    cout << "Enter array size: ";
    cin >> n;
    int array[n];
    cout << "Enter array number: ";
    for(i = 0; i<n; i++){
         cin >> array[i];
    }
    for(i = n; i>=0; i--){
          cout << array[i] << " ";
    }
   
    
   
    
    
    return 0;
}