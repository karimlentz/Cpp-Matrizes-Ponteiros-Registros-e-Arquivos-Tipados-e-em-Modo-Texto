#include <iostream>

using namespace std;

bool existeNoVetor(int elem, int *vet, int tam){
	for (int i = 0; i < tam; i++){
		if (vet[i] == elem) return true;
	}
	return false;
}

int main(){
	int tamA;
	cin >> tamA;
	int *vetA = new int[tamA];
	for (int i = 0; i < tamA; i++){
		cin >> vetA[i];
	}
	
	int tamB;
	cin>> tamB;
	int *vetB = new int[tamB];
	for (int i = 0; i < tamB; i++){
		cin >> vetB[i];
	}
	
	int *vetC = new int[tamA+tamB];
	int tamC = 0;
	
	for (int i = 0; i < tamA; i++){
		vetC[tamC] = vetA[i];
		tamC++;
	}
	
	for (int i = 0; i < tamB; i++){
		if (!existeNoVetor(vetB[i], vetC, tamC)){
			vetC[tamC] = vetB[i];
			tamC++;
		}
	}
	
	for (int i = 0; i < tamC; i++){
		cout << vetC[i] << " ";
	}
	cout << endl;
	
	delete[] vetA;
	delete[] vetB;
	delete[] vetC;

return 0;
}
