#include <iostream>
#include <string>
using namespace std;

string evenorodd(int number) {
    
    string even_odd;
    
    switch (number % 2) {
        case 0:
            even_odd = "even";
            break;
            
        case 1:
            even_odd = "odd";
            break;
            
        default:
            cout << "sorry, something went wrong!" << endl;
            break;
    }
    
    return even_odd;
}

 int main() {

    cout << "Check if your number is even or odd" << "\n"<< "number:" << endl;
        
    int user_num;
    cin >> user_num;
     
    cout << "your number is " << evenorodd(user_num) << "." << endl;
        
        return 0;
 }
