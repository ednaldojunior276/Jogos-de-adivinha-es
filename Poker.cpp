#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>

using namespace std;
int main(){


setlocale(LC_ALL, "");

int numero1, numero2, numero3;




std::cout <<"|----------------------------------------------------|" <<"\n";
std::cout <<"|      BEM VINDO AO JOGO DE POKER COM NÚMEROS        |" <<"\n";
std::cout <<"|ESTE É UM JOGO ONDE VOCÊ TENTARÁ GANHAR DA MÁQUINA  |" <<"\n";
std::cout <<"|VOCÊ TEM 3 OPÇÕES ONDE FARÁ 3 JOGADAS SUBSEQUENTES  |" <<"\n";
std::cout <<"|----------------------------------------------------|" <<"\n";

std::cout <<"|-------------------------------------------------------|" <<"\n";
std::cout <<"|        APERTE A TECLA (ENTER) PARA INICIAR O JOGO     |" <<"\n";
std::cout <<"|-------------------------------------------------------|" <<"\n";


system("pause");
system("cls");

std::cout <<"|----------------------------------------------|" <<"\n";
std::cout <<"|        VAMOS JOGAR ? ENTRE COM UM NÚMERO     |" <<"\n";
std::cout <<"|----------------------------------------------|" <<"\n";

std::cout <<"PRIMEIRA RODADA, ESCOLHAR UM NUMERO ALEATÓRIO DE 0 A 10 PARA JOGAR: ";
std::cin >> numero1;
std::cout << "VOCÊ JOGOU: " << numero1 <<"\n";


std::cout <<"|------------------------------|" <<"\n";
std::cout <<"|       MÁQUINA JOGANDO...     |" <<"\n";
std::cout <<"|------------------------------|" <<"\n";
system("pause");

	int num1 = time(0);
	srand(num1);
	int n1 = 1 + rand()%10;

std::cout <<"------------------------------" <<"\n";
std::cout <<"|    MINHA JOGADA É: " << n1 << "\n";
std::cout <<"------------------------------" <<"\n";





		if(numero1 == n1){

std::cout <<"|------------------------------|" <<"\n";
std::cout <<"|    PARABÉNS VOCÊ ACERTOU!    |" <<"\n";
std::cout <<"|------------------------------|" <<"\n";
			
		system("pause");
		system("cls");

		}
		else{

std::cout <<"|------------------------------|" <<"\n";
std::cout <<"|          VOCÊ ERROU!         |" <<"\n";
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

std::cout <<"SEGUNDA RODADA, ESCOLHAR UM NUMERO ALEATÓRIO DE 0 A 10 PARA JOGAR: ";
std::cin >> numero2;
std::cout << "VOCÊ JOGOU: " << numero2 <<"\n";


std::cout <<"|------------------------------|" <<"\n";
std::cout <<"|       MÁQUINA JOGANDO...     |" <<"\n";
std::cout <<"|------------------------------|" <<"\n";
system("pause");

	int num2 = time(0);
	srand(num2);
	int n2 = rand()%10;
	
std::cout <<"------------------------------" <<"\n";
std::cout << "    MINHA JOGADA É:    " <<n2<< "\n";
std::cout <<"------------------------------" <<"\n";

	if(numero2 == n2){

std::cout <<"|---------------------------------------------|" <<"\n";
std::cout <<"|    PARABÉNS TA INDO BEM... VOCÊ ACERTOU!    |" <<"\n";
std::cout <<"|---------------------------------------------|" <<"\n";
			
		system("pause");
		system("cls");

		}
		else{

std::cout <<"|------------------------------|" <<"\n";
std::cout <<"|          VOCÊ ERROU!         |" <<"\n";
std::cout <<"|------------------------------|" <<"\n";
	
		system("pause");
		system("cls");
	
		}
std::cout <<"|------------------------------------|" <<"\n";
std::cout <<"|        VAMOS LÁ! ÚLTIMA JOGADA     |" <<"\n";
std::cout <<"|------------------------------------|" <<"\n";

std::cout <<"TERCEIRA RODADA, ESCOLHAR UM NUMERO ALEATÓRIO DE 0 A 10 PARA JOGAR: ";
std::cin >> numero3;
std::cout << "VOCÊ JOGOU: " << numero3 <<"\n";

std::cout <<"|-----------------------|" <<"\n";
std::cout <<"|       BOA JOGADA!     |" <<"\n";
std::cout <<"|-----------------------|" <<"\n";


std::cout <<"|------------------------------|" <<"\n";
std::cout <<"|       MÁQUINA JOGANDO...     |" <<"\n";
std::cout <<"|------------------------------|" <<"\n";
system("pause");

	int num3 =  time(0);
	srand(num3);
	int n3 = rand()%10;

std::cout <<"------------------------------" <<"\n";
std::cout <<"|    MINHA JOGADA É:         " << n3 << "\n";
std::cout <<"------------------------------" <<"\n";


	if(numero3 == n3){

std::cout <<"|---------------------------------------------|" <<"\n";
std::cout <<"|    PARABÉNS TA INDO BEM... VOCÊ ACERTOU!    |" <<"\n";
std::cout <<"|---------------------------------------------|" <<"\n";
			
		system("pause");
		system("cls");

		}
		else{

std::cout <<"|------------------------------|" <<"\n";
std::cout <<"|          VOCÊ ERROU!         |" <<"\n";
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

std::cout << "NUMERO JOGADO PELA MÁQUINA " << "\n";
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
		std::cout << "VOCE JOGOU: " << numero1 << "A MÁQUINA JOGOU :"<<n1 << "\n";
		std::cout << "VOCE ACUMULOU: " << m1 << "PONTOS" << "\n";
		}
		else{
			std::cout << "VOCE NÃO ACUMULOU PONTO NESTA PRIMEIRA RODADA!"<< "\n";
	}
		
		if(numero2 == n2){
		std::cout << "VOCE JOGOU: " << numero2 << "A MÁQUINA JOGOU :"<<n2 << "\n";
		std::cout << "VOCE ACUMULOU: " << m2 << "PONTOS" << "\n";
		}
		else{
			std::cout << "VOCE NÃO ACUMULOU PONTO NESTA SEGUNDA RODADA!"<< "\n";
		}
		
		if(numero1 == n3){
		std::cout << "VOCE JOGOU: " << numero3 << "A MÁQUINA JOGOU :" <<n3 << "\n";
		std::cout << "VOCE ACUMULOU: " << m3 << "PONTOS" << "\n";
		}
		else{
			std::cout << "VOCE NÃO ACUMULOU PONTO NESTA TERCEIRA RODADA!" << "\n";
		}
		
		system("pause");
		system("cls");
	
		std::cout << "|--------------------------------------|" << "\n";
		std::cout << "|          RODADA DA MÁQUINA           |" << "\n";
		std::cout << "|--------------------------------------|" << "\n";
	
		if(n1 != numero1){
		std::cout << "A MÁQUINA JOGOU :"<< n1 << "VOCE JOGOU: " << numero1 << "\n";
		std::cout << "NESTA ROODAD VOCÊ ACUMULOU: " << ma1 << " PONTOS" << "\n";
		}
		else{
			std::cout << "VOCE NÃO ACUMULOU PONTO NESTA PRIMEIRA RODADA!" << "\n";
		}
		
		if(n2 != numero2){
		std::cout << "A MÁQUINA JOGOU :"<< n2 << " VOCE JOGOU: " << numero2 << "\n";
		std::cout << "NESTA RODADA VOCE ACUMULOU: " << ma2 << "PONTOS" << "\n";
		}
		else{
			std::cout << "VOCE NÃO ACUMULOU PONTO NESTA SEGUNDA RODADA!" << "\n";
		}
		
		if(n3 != numero3){
		std::cout <<"A MÁQUINA JOGOU :" << n3 <<  "VOCE JOGOU: " << numero3 << "\n";
		std::cout << " NESTA RODAD VOCE ACUMULOU: " << ma3 << " PONTOS " << "\n";
		}
		else{
			std::cout << "VOCE NÃO ACUMULOU PONTO NESTA TERCEIRA RODADA!" << "\n";
		}
		 
		system("pause");
		system("cls");
		

	
	return 0;
}

