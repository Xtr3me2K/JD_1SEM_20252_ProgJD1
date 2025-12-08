// 04_areatriangulo.cpp - calcula a área do triângulo

#include <iostream> //Inclui a biblioteca padrão iostream
using namespace std; //Declara automaticamente o prefixo std

int main() // Ponto de entrada do programa
{
    float base, altura, area; //Declaração das variáveis base, altura, área. float = números decimais
    
    cout << "Qual a medida da base? "; //Pergunta ao jogador a medida da base.
    cin >> base;
    cout << "Qual a medida da altura? "; //Pergunta ao jogador a medida da altura.
    cin >> altura;
    
    area = base * altura / 2; //Faz o cálculo da área.
    
    cout << "A medida da area triangular e " << area << " m2"; //Mostra o resultado da conta da área triangular. Note que a unidade de medida já está corretamente inserida.
    
    //IMPORTANTE! O C++ NÃO ACEITA CARACTERES ESTRANGEIROS COMO POR EXEMPLO ACENTO OU TIL. MUITO CUIDADO NA HORA DE ESCREVER O SEU PROGRAMA!!
    
	return 0; //Finaliza a execução do programa
}
