// 11_pontos.cpp - calcula quantidade de pontos da equipe

#include <iostream>
using namespace std;

int main()
{
	int vitorias, empates, pontos;
    
	cout << "Quantas vitorias? "; //Pergunta a quantidade de vitórias e empates da equipe. Note que equipes não somam pontos quando perdem.
    cin >> vitorias;
	cout << "Quantos empates? ";
    cin >> empates;

    pontos = vitorias * 3 + empates; //Faz o cálculo de quantos pontos a equipe terá.
    
    cout << "\nPontos: " << pontos;

	return 0;
}
