#include <iostream>
#include <string>

using namespace std;

bool repetido(string palavra, string *vet, int tam){
	for (int i=0; i<tam; i++){
		if (vet[i] == palavra) return true;
	}
	return false;
}

int main(){
	
	int a;
	cin >> a;
	string *vetA = new string[a];
	for (int i = 0; i < a; i++){
		cin >> vetA[i];
	}
	
	int b;
	cin >> b;
	string *vetB = new string[b];
	for (int i = 0; i < b; i++){
		cin >> vetB[i];
	}
	
	string *vetC = new string[a];
	int tamFinal = 0;
	
	for (int i = 0; i < a; i++){
		if (!repetido(vetA[i], vetB, b)){
			vetC[tamFinal] = vetA[i];
			tamFinal++;
		}
	}
	
	if (tamFinal == 0){
		cout << "NADA" << endl;
	} else {
		string *vetFinal = new string[tamFinal];
		for (int i = 0; i < tamFinal; i++){
			vetFinal[i] = vetC[i];
		}
		for (int i = 0; i < tamFinal; i++){
			cout << vetFinal[i] << endl;
		}
		delete[] vetFinal;
	}
	
	
	
	delete[] vetA;
	delete[] vetB;
	delete[] vetC;
	
return 0;
}
