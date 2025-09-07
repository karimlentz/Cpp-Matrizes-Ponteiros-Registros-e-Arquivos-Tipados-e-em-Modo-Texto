#include <iostream>

using namespace std;

int fatorial (int num){
	int fat = 1;
	for (int i = 1; i <= num; i++){
		fat *= i;
	}
	return fat;
}

void obterVetor(float *vet, int tam){
	for (int i = 0; i < tam; i++){
		vet[i] = ((2.0 * fatorial(i)+i) / (i*i+1.75));
	}
}

int main(){
	
	int n;
	cin >> n;
	
	float *vetor = new float[n];
	
	obterVetor(vetor, n);
	
	int m;
	cin >> m;
	for (int i = m; i < n; i++){
		cout << vetor[i] << endl ;
	}
	cout << endl;
	
	delete[] vetor;
	
return 0;
}
