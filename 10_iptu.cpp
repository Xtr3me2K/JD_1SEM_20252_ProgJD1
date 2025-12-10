// 10_iptu.cpp - calcula imposto predial, territorial e IPTU

#include <iostream> //Inclui a biblioteca padrão iostream
using namespace std; //Declara automaticamente o prefixo std

int main() // Ponto de entrada do programa
{
	float vc, ac, mt, at, ipredial, iterritorial, iptu; //Declaração de variáveis float.
    
	cout << "Qual o valor do m2 construido? "; //Pede os valores em m2 do imóvel em relação ao terreno e a área deste terreno.
    cin >> vc;
	cout << "Qual a area construida em m2? ";
    cin >> ac;
	cout << "Qual o valor do m2 do terreno? ";
    cin >> mt;
	cout << "Qual a area do terreno em m2? ";
    cin >> at;

    ipredial = vc * ac; //Calcula os impostos sobre o valor do imóvel.
    iterritorial = mt * at;
    iptu = ipredial + iterritorial;
    
    cout << "\nImposto Predial: " << ipredial;
    cout << "\nImposto Territorial: " << iterritorial;
    cout << "\nIPTU " << iptu;

	return 0;
}
