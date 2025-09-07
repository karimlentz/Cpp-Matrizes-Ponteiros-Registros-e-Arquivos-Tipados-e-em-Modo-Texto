#include <iostream>
#include <string>

using namespace std;

struct aluno{
	string nome;
	double media;
	int faltas;
};

int main(){
	int n;
	cin >> n;
	
	aluno *vetAlunos = new aluno[n];
	
	for (int i = 0; i < n; i++){
		cin >> vetAlunos[i].nome >> vetAlunos[i].media >> vetAlunos[i].faltas;
	}
	
	//selection sort
	for (int i = 0; i < n - 1; i++) {
        int indiceMax = i; //maior na posição i
        for (int j = i + 1; j < n; j++) { //parte nao ordenada
            if (vetAlunos[j].media > vetAlunos[indiceMax].media) {
                indiceMax = j; //encontrou maior e atualizou
            }
        }
        //troca maior encontrado com i
        if (indiceMax != i) {
            aluno temp = vetAlunos[i];
            vetAlunos[i] = vetAlunos[indiceMax];
            vetAlunos[indiceMax] = temp;
        }
    }
    
    for (int i = 0 ; i < n; i++){
		cout << vetAlunos[i].nome << endl;
	}
	
	delete[] vetAlunos;
	
return 0;
}
