#include <iostream>

using namespace std;

int main() {
    char letra; 

    cout << "Digite uma letra: ";
    cin >> letra;

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        cout << "A letra digitada eh uma vogal" << endl;
    } else {
        cout << "A letra digitada eh uma consoante" << endl;
    }

    return 0;
}
