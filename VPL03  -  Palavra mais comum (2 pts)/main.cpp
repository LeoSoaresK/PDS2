#include<bits/stdc++.h>
#include<vector>
#include<map>

using namespace std;

int main()
{
	string str (" ");
	getline(cin, str);
	
	
	// word variable to store word
	string word;
	
	// making a string stream
	stringstream iss(str);
	
	// making a vector to store word
	vector <string> storage;
	
	// Read and print each word.
	while (iss >> word)
		storage.push_back(word);

// for (int i = 0; i < storage.size(); i++)
// {
//     cout << storage[i] << endl;
// }

map <string, int> contador;

for (int i = 0; i < storage.size(); i++)
{
  contador[storage[i]] += 1;  
}

int maior = 0;
string palavraMaior;

for (int i = 0; i < storage.size(); i++)
{
    if (contador[storage[i]] > maior)
    {
        maior = i;
        palavraMaior = storage[i];  
    }
}

cout << palavraMaior << endl;

return 0;
}
