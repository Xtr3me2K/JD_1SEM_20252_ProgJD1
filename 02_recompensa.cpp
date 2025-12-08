// 02_recompensa.cpp - calcula a recompensa pelo percurso realizado pelo jogador

#include <iostream> //Inclui a biblioteca padrão iostream
using namespace std; //Declara automaticamente o prefixo std

int main() // Ponto de entrada do programa
{
    float distancia, recompensa; //Declaração das variáveis distancia e recompensa. float = números decimais
    
    cout << "Quantos km percorreu? "; //Pergunta ao usuário quantos km ele percorreu.
    cin >> distancia;
    
    //cout = O programa exibe mensagens na tela. cin = O usuário insere dados para alimentar o programa.
    
    recompensa = distancia * 2.5; //Calcula o valor que o usuário deve receber como recompensa.
    
    cout << "O jogador recebera R$" << recompensa; //Exibe a recompensa que o jogador receberá.
    
	return 0; //Finaliza a execução do programa
}

//IMPORTANTE! O C++ NÃO ACEITA CARACTERES ESTRANGEIROS COMO POR EXEMPLO ACENTO OU TIL. MUITO CUIDADO NA HORA DE ESCREVER O SEU PROGRAMA!!
