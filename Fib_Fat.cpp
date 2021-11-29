#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include <conio.h>
using namespace std;

int fat(int num){
	if(num==0)return 1;
	return num*fat(num-1);
	
}
int fib(int num){
	if(num==0||num==1)return 1;
	else{
		return fib(num-1)+fib(num-2);
	}
}
bool verifica(){
	for(char i=0;i!=115&&i!=110;i=0){
		cout <<"De novo? (S/N)\n> ";
		fflush(stdin);
		i=getch();
		system("cls");
		if(i==110){
			return false;
		}
		if(i==115)
			return true;
	}
}
int main(){
	setlocale(LC_ALL,"Portuguese");
	int i, n;
	char ver='a';
	bool cont=true;
	
	while(cont==true){
		while(i<0||i>2){
			cout << "1  - Fatorial\n2 - Fibonacci\n0 - Sair\n> ";
			cin >> i;
			system("cls");
		}
		if(i==0)
			break;
		else if(i==1){
			cout << "Digite um numero para calcular no algoritmo fatorial: ";
			cin >> n;
			cout << "\n\nO Fatorial de " <<n<< " é: " <<fat(n)<< endl;
		}
		else if(i==2){
			cout << "Digite um numero para calcular no algoritmo de fibonacci: ";
			cin >> n;
			cout << "\n\nO valor Fibonacci de " <<n<< " é: " <<fib(n)<< endl;
		}
		system("pause>null");
		system("cls");
		cont=verifica();
		if(cont==true)i=3;
	}
	
	system("cls");
	return 0;
}

