#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>

using namespace std;
int main(){


setlocale(LC_ALL, "");

int numero1, numero2, numero3;




std::cout <<"|----------------------------------------------------|" <<"\n";
std::cout <<"|      BEM VINDO AO JOGO DE POKER COM N�MEROS        |" <<"\n";
std::cout <<"|ESTE � UM JOGO ONDE VOC� TENTAR� GANHAR DA M�QUINA  |" <<"\n";
std::cout <<"|VOC� TEM 3 OP��ES ONDE FAR� 3 JOGADAS SUBSEQUENTES  |" <<"\n";
std::cout <<"|----------------------------------------------------|" <<"\n";

std::cout <<"|-------------------------------------------------------|" <<"\n";
std::cout <<"|        APERTE A TECLA (ENTER) PARA INICIAR O JOGO     |" <<"\n";
std::cout <<"|-------------------------------------------------------|" <<"\n";


system("pause");
system("cls");

std::cout <<"|----------------------------------------------|" <<"\n";
std::cout <<"|        VAMOS JOGAR ? ENTRE COM UM N�MERO     |" <<"\n";
std::cout <<"|----------------------------------------------|" <<"\n";

std::cout <<"PRIMEIRA RODADA, ESCOLHAR UM NUMERO ALEAT�RIO DE 0 A 10 PARA JOGAR: ";
std::cin >> numero1;
std::cout << "VOC� JOGOU: " << numero1 <<"\n";


std::cout <<"|------------------------------|" <<"\n";
std::cout <<"|       M�QUINA JOGANDO...     |" <<"\n";
std::cout <<"|------------------------------|" <<"\n";
system("pause");

	int num1 = time(0);
	srand(num1);
	int n1 = 1 + rand()%10;

std::cout <<"------------------------------" <<"\n";
std::cout <<"|    MINHA JOGADA �: " << n1 << "\n";
std::cout <<"------------------------------" <<"\n";





		if(numero1 == n1){

std::cout <<"|------------------------------|" <<"\n";
std::cout <<"|    PARAB�NS VOC� ACERTOU!    |" <<"\n";
std::cout <<"|------------------------------|" <<"\n";
			
		system("pause");
		system("cls");

		}
		else{

std::cout <<"|------------------------------|" <<"\n";
std::cout <<"|          VOC� ERROU!         |" <<"\n";
std::cout <<"|------------------------------|" <<"\n";
	
		system("pause");
		system("cls");
	
		}

std::cout <<"|------------------------|" <<"\n";
std::cout <<"|       BOA JOGADA!      |" <<"\n";
std::cout <<"|------------------------|" <<"\n";

std::cout <<"|------------------------------|" <<"\n";
std::cout <<"|        SUA VEZ !     |" <<"\n";
std::cout <<"|------------------------------|" <<"\n";

std::cout <<"SEGUNDA RODADA, ESCOLHAR UM NUMERO ALEAT�RIO DE 0 A 10 PARA JOGAR: ";
std::cin >> numero2;
std::cout << "VOC� JOGOU: " << numero2 <<"\n";


std::cout <<"|------------------------------|" <<"\n";
std::cout <<"|       M�QUINA JOGANDO...     |" <<"\n";
std::cout <<"|------------------------------|" <<"\n";
system("pause");

	int num2 = time(0);
	srand(num2);
	int n2 = rand()%10;
	
std::cout <<"------------------------------" <<"\n";
std::cout << "    MINHA JOGADA �:    " <<n2<< "\n";
std::cout <<"------------------------------" <<"\n";

	if(numero2 == n2){

std::cout <<"|---------------------------------------------|" <<"\n";
std::cout <<"|    PARAB�NS TA INDO BEM... VOC� ACERTOU!    |" <<"\n";
std::cout <<"|---------------------------------------------|" <<"\n";
			
		system("pause");
		system("cls");

		}
		else{

std::cout <<"|------------------------------|" <<"\n";
std::cout <<"|          VOC� ERROU!         |" <<"\n";
std::cout <<"|------------------------------|" <<"\n";
	
		system("pause");
		system("cls");
	
		}
std::cout <<"|------------------------------------|" <<"\n";
std::cout <<"|        VAMOS L�! �LTIMA JOGADA     |" <<"\n";
std::cout <<"|------------------------------------|" <<"\n";

std::cout <<"TERCEIRA RODADA, ESCOLHAR UM NUMERO ALEAT�RIO DE 0 A 10 PARA JOGAR: ";
std::cin >> numero3;
std::cout << "VOC� JOGOU: " << numero3 <<"\n";

std::cout <<"|-----------------------|" <<"\n";
std::cout <<"|       BOA JOGADA!     |" <<"\n";
std::cout <<"|-----------------------|" <<"\n";


std::cout <<"|------------------------------|" <<"\n";
std::cout <<"|       M�QUINA JOGANDO...     |" <<"\n";
std::cout <<"|------------------------------|" <<"\n";
system("pause");

	int num3 =  time(0);
	srand(num3);
	int n3 = rand()%10;

std::cout <<"------------------------------" <<"\n";
std::cout <<"|    MINHA JOGADA �:         " << n3 << "\n";
std::cout <<"------------------------------" <<"\n";


	if(numero3 == n3){

std::cout <<"|---------------------------------------------|" <<"\n";
std::cout <<"|    PARAB�NS TA INDO BEM... VOC� ACERTOU!    |" <<"\n";
std::cout <<"|---------------------------------------------|" <<"\n";
			
		system("pause");
		system("cls");

		}
		else{

std::cout <<"|------------------------------|" <<"\n";
std::cout <<"|          VOC� ERROU!         |" <<"\n";
std::cout <<"|------------------------------|" <<"\n";
	
		system("pause");
		system("cls");
	
		}
		
		system("pause");
		system("cls");
		
std::cout <<"|------------------------------------|" <<"\n";
std::cout <<"|               RESULTADO            |" <<"\n";
std::cout <<"|------------------------------------|" <<"\n";
			

		
std::cout << "NUMERO JOGADO PELO JOGADOR \n";
std::cout << "PRIMEIRA RODADA: " << numero1 <<"\n";
std::cout << "SEGUNDA RODADA: " << numero2<<"\n";
std::cout << "TERCEIRA RODADA: " <<numero3<<"\n";

std::cout << "--------------------------------------" << "\n";

std::cout << "NUMERO JOGADO PELA M�QUINA " << "\n";
std::cout << "PRIMEIRA RODADA: " << n1 <<"\n";
std::cout << "SEGUNDA RODADA: " << n2 <<"\n";
std::cout << "TERCEIRA RODADA: " << n3 <<"\n";


std::cout << "--------------------------------------" << "\n";
		system("pause");
		system("cls");
			
	int m1 = 100, m2 = 200, m3 = 300;
	int ma1 = 100, ma2 = 200, ma3 = 300;	

		
		std::cout << "|--------------------------------------|" << "\n";
		std::cout << "|          RODADA DO JOGADOR           |" << "\n";
		std::cout << "|--------------------------------------|" << "\n";
		
		
		if(numero1 == n1){
		std::cout << "VOCE JOGOU: " << numero1 << "A M�QUINA JOGOU :"<<n1 << "\n";
		std::cout << "VOCE ACUMULOU: " << m1 << "PONTOS" << "\n";
		}
		else{
			std::cout << "VOCE N�O ACUMULOU PONTO NESTA PRIMEIRA RODADA!"<< "\n";
	}
		
		if(numero2 == n2){
		std::cout << "VOCE JOGOU: " << numero2 << "A M�QUINA JOGOU :"<<n2 << "\n";
		std::cout << "VOCE ACUMULOU: " << m2 << "PONTOS" << "\n";
		}
		else{
			std::cout << "VOCE N�O ACUMULOU PONTO NESTA SEGUNDA RODADA!"<< "\n";
		}
		
		if(numero1 == n3){
		std::cout << "VOCE JOGOU: " << numero3 << "A M�QUINA JOGOU :" <<n3 << "\n";
		std::cout << "VOCE ACUMULOU: " << m3 << "PONTOS" << "\n";
		}
		else{
			std::cout << "VOCE N�O ACUMULOU PONTO NESTA TERCEIRA RODADA!" << "\n";
		}
		
		system("pause");
		system("cls");
	
		std::cout << "|--------------------------------------|" << "\n";
		std::cout << "|          RODADA DA M�QUINA           |" << "\n";
		std::cout << "|--------------------------------------|" << "\n";
	
		if(n1 != numero1){
		std::cout << "A M�QUINA JOGOU :"<< n1 << "VOCE JOGOU: " << numero1 << "\n";
		std::cout << "NESTA ROODAD VOC� ACUMULOU: " << ma1 << " PONTOS" << "\n";
		}
		else{
			std::cout << "VOCE N�O ACUMULOU PONTO NESTA PRIMEIRA RODADA!" << "\n";
		}
		
		if(n2 != numero2){
		std::cout << "A M�QUINA JOGOU :"<< n2 << " VOCE JOGOU: " << numero2 << "\n";
		std::cout << "NESTA RODADA VOCE ACUMULOU: " << ma2 << "PONTOS" << "\n";
		}
		else{
			std::cout << "VOCE N�O ACUMULOU PONTO NESTA SEGUNDA RODADA!" << "\n";
		}
		
		if(n3 != numero3){
		std::cout <<"A M�QUINA JOGOU :" << n3 <<  "VOCE JOGOU: " << numero3 << "\n";
		std::cout << " NESTA RODAD VOCE ACUMULOU: " << ma3 << " PONTOS " << "\n";
		}
		else{
			std::cout << "VOCE N�O ACUMULOU PONTO NESTA TERCEIRA RODADA!" << "\n";
		}
		 
		system("pause");
		system("cls");
		

	
	return 0;
}

