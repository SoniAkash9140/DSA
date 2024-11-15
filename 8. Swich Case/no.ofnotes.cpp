#include<iostream>
using namespace std ;
int main (){
    int amount ;
    cout << "Enter amount" << endl;
    cin >> amount ;

    int remaining = amount;
    int noteCount =0;

    switch(1){
        case 1:
        if(remaining>=200){
            noteCount=remaining/2000;
            remaining%=2000;
            cout << "2000 x" << noteCount << endl;
        }

        case 2:
        if(remaining>=500){
            noteCount=remaining/500;
            remaining%=500;
            cout << "500 x" << noteCount << endl;
        }

        case 3:
            if (remaining >= 200) {
                noteCount = remaining / 200;
                remaining %= 200;
                cout << "200 x " << noteCount << endl;
            }
        case 4:
            if (remaining >= 100) {
                noteCount = remaining / 100;
                remaining %= 100;
                cout << "100 x "  << noteCount << endl;
            }
        case 5:
            if (remaining >= 50) {
                noteCount = remaining / 50;
                remaining %= 50;
                cout << "50 x " << noteCount << endl;
            }
        case 6:
            if (remaining >= 20) {
                noteCount = remaining / 20;
                remaining %= 20;
                cout << "20 x " << noteCount << endl;
            }
        case 7:
            if (remaining >= 10) {
                noteCount = remaining / 10;
                remaining %= 10;
                cout << "10 x " << noteCount << endl;
            }
        case 8:
            if (remaining >= 5) {
                noteCount = remaining / 5;
                remaining %= 5;
                cout << "5 x " << noteCount << endl;
            }
        case 9:
            if (remaining >= 1) {
                noteCount = remaining;
                cout << "1 x " << noteCount << endl;
            }
            break;
        default:
            cout << "Invalid input!" << endl;
    }

    return 0;
}
