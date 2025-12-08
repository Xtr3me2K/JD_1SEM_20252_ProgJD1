// 03_trocamoeda.cpp - troca reais por moeda estrangeira

#include <iostream> //Inclui a biblioteca padrão iostream
using namespace std; //Declara automaticamente o prefixo std

int main() // Ponto de entrada do programa
{
    float reais, cotacao, quantia; //Declaração das variáveis reais, cotação e quantia. float = números decimais
    
    cout << "Quantos reais deseja trocar? "; //pergunta ao jogador quantos reais ele deseja trocar
    cin >> reais;
    cout << "Qual a cotacao da moeda estrangeira? "; //Pergunta qual a cotação da moeda estrangeira
    cin >> cotacao;
    
    quantia = reais / cotacao; //Faz a troca dos reais pela moeda estrangeira de preferência do jogador
    
    cout << "Voce tem " << quantia; //Mostra a quantia atual do jogador já convertida
	return 0; //Finaliza a execução do programa
}
