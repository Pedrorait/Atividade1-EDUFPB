#include <iostream>
#include "lista.h"

using namespace std;

int main(){
    listaenc lista1;
	if(lista1.vazia()){
		cout << "lista vazia" << endl;
	}
	else{
		cout << "lista não está vazia" << endl;
	}
	getchar();
	
	if(lista1.insere(1,10)){
		cout << "inserção foi um sucesso" << endl;
	}else{
		cout << "inserção não foi um sucesso" << endl;
	}
	
	if(lista1.insere(2,12)){
		cout << "inserção foi um sucesso" << endl;
	}else{
		cout << "inserção não foi um sucesso" << endl;
	}
	if(lista1.insere(3,13)){
		cout << "inserção foi um sucesso" << endl;
	}else{
		cout << "inserção não foi um sucesso" << endl;
	}

	cout << "Num pos 2: " << lista1.getelemento(1) << endl;
	getchar();

    return 0;
}