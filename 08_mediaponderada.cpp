// 08_mediaponderada.cpp - calcula a média ponderada

#include <iostream> //Inclui a biblioteca padrão iostream
using namespace std; //Declara automaticamente o prefixo std

int main() // Ponto de entrada do programa
{
	float nota1, nota2, nota3, nota4, media; //Declaração de variáveis float.
    
	cout << "Qual a primeira nota? "; //Pergunta as notas ao usuário.
    cin >> nota1;
	cout << "Qual a segunda nota? ";
    cin >> nota2;
	cout << "Qual a terceira nota? ";
    cin >> nota3;
	cout << "Qual a quarta nota? ";
    cin >> nota4;

    media = (nota1 + nota2 * 2 + nota3 * 3 + nota4 * 4) / 10; //Calcula a média, atribuindo o devido peso às notas fornecidas.
    
    cout << "\nA media e " << media;

	return 0;
}
