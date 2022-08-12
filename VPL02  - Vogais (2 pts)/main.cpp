#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string palavra (" ");
    
    int contadorA = 0;
    int contadorE = 0;
    int contadorI = 0;
    int contadorO = 0;
    int contadorU = 0;
    
    cin >> palavra; 
    
for (int i = 0; i < palavra.length(); i++)
{
    if (palavra[i] == 'a' || palavra[i] == 'A')
    contadorA++;
    
    if (palavra[i] == 'e' || palavra[i] == 'E')
    contadorE++;
    
    if (palavra[i] == 'i' || palavra[i] == 'I')
    contadorI++;
    
    if (palavra[i] == 'o' || palavra[i] == 'O')
    contadorO++;
    
    if (palavra[i] == 'u' || palavra[i] == 'U')
    contadorU++;
}
    
    if (contadorA > 0)
    cout << "a " << contadorA << endl;
    
        if (contadorE > 0)
    cout << "e " << contadorE << endl;
    
        if (contadorI > 0)
    cout << "i " << contadorI << endl;
    
        if (contadorO > 0)
    cout << "o " << contadorO << endl;
    
        if (contadorU > 0)
    cout << "u " << contadorU << endl;
    
  return 0;
}