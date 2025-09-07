#include <iostream>

using namespace std;

bool existe(char letra, char *vet, int tam){
	for (int i = 0; i < tam; i++){
		if (vet[i] == letra) return true;
	}
	return false;
}

int main(){
	int a;
	cin >> a;
	char *vetA = new char[a];
	for (int i = 0; i < a; i++){
		cin >> vetA[i];
	}
	
	int b;
	cin >> b;
	char *vetB = new char[b];
	for (int i = 0; i < b; i++){
		cin >> vetB[i];
	}
	
	char *vetC = new char[a+b];
	int tamFinal = 0;
	
	for (int i = 0; i < a; i++){
		if (!existe(vetA[i], vetB, b)){
			vetC[tamFinal] = vetA[i];
			tamFinal++;
		}
	}
	
	char *vetResult = new char[tamFinal];
	for (int i = 0; i < tamFinal; i++){
		vetResult[i] = vetC[i];
	}
	
	for (int i = 0; i < tamFinal; i++){
		cout << vetResult[i] << " ";
	}
	cout << endl;
	
	delete[] vetA;
	delete[] vetB;
	delete[] vetC;
	delete[] vetResult;
	
return 0;
}
