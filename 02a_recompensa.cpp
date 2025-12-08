// 02a_recompensa.cpp - calcula a recompensa pelo percurso realizado pelo jogador

#include <iostream> //Inclui a biblioteca padrão iostream
#define VALORPORKM 5.5 //define o VALORPORKM como 5.5
using namespace std; //Declara automaticamente o prefixo std

//#define = cria um identificador para um valor ou código através de um nome.

int main() // Ponto de entrada do programa
{
    float distancia, recompensa; //Declaração das variáveis distancia e recompensa. float = números decimais
    
    cout << "Quantos km percorreu? "; //Pergunta ao usuário quantos km ele percorreu.
    cin >> distancia;
    
    //cout = O programa exibe mensagens na tela. cin = O usuário insere dados para alimentar o programa.
    
	recompensa = distancia * VALORPORKM; //Calcula o valor que o usuário deve receber como recompensa.
    
    cout << "O jogador recebera R$" << recompensa; //Exibe a recompensa que o jogador receberá.
    
	return 0; //Finaliza a execução do programa
}