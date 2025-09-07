#include <iostream>

using namespace std;

bool primo(int n){
	if (n <= 1) return false;
	if (n == 2) return true;
	if (n % 2 == 0) return false;
	
	for (int i = 3; i*i <= n; i += 2){
		if ( n % i == 0) return false;
	}
	return true;
}

int main(){
	int tam = 9;
	int *vet = new int[tam];
	
	for (int i = 0; i < tam; i++){
		cin >> vet[i];
	}
	
	for (int i = 0; i < tam; i++){
		if (primo(vet[i])){
			cout << vet[i] << " " << i << endl;
		}
	}
	
	delete[] vet;
	
return 0;
}
