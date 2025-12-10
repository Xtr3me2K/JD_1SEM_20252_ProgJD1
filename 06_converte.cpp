// 06_converte.cpp - converte temperatura em graus Fahrenheit para graus Celsius

#include <iostream> //Inclui a biblioteca padrão iostream
using namespace std; //Declara automaticamente o prefixo std

int main() // Ponto de entrada do programa
{
	float tempC, tempF; //Declaração das variáveis das temperaturas. float = números decimais
    
	cout << "Qual a temperatura em graus Fahrenheit? "; //Pergunta ao usuário qual a temperatura ele quer converter.
    cin >> tempF;

    tempC = ((tempF - 32) * 5) / 9; //Conversão de Fahrenheit para Celsius.
    
    cout << tempF << " graus Fahrenheit equivalem a " << tempC << " graus Celsius."; //Compara os graus Fahrenheit e Celsius, mostrando a execução

	return 0; //Finaliza a execução do programa
}
