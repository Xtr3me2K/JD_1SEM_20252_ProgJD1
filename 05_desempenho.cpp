// 05_desempenho.cpp - calcula o desempenho do carro

#include <iostream> //Inclui a biblioteca padrão iostream
using namespace std; //Declara automaticamente o prefixo std

int main() // Ponto de entrada do programa
{
    int km_inicial, km_final, distancia; //Declaração das variáveis km_inicial, km_final e distancia. int = números inteiros
	float l_inicial, l_final, l_gastos, desempenho; //Declaração das variáveis l_inicial, l_final, l_gastos e desempenho. float = números decimais
    
    cout << "INFORMACOES NO INICIO DO PERCURSO\n";
	cout << "Qual a km do veiculo? "; //Pergunta a quilometragem do veículo
    cin >> km_inicial;
    cout << "Quantos litros de combustivel ha no tanque? "; //Pergunta a quantidade de combustível no tanque do veículo
    cin >> l_inicial;
    
    cout << "\nINFORMACOES NO FINAL DO PERCURSO\n";
	cout << "Qual a km do veiculo? "; //Pergunta a quilometragem do veículo
    cin >> km_final;
    cout << "Quantos litros de combustivel ha no tanque? "; //Pergunta a quantidade de combustível no tanque do veículo
    cin >> l_final;

    distancia = km_final - km_inicial;
    l_gastos = l_inicial - l_final;
    desempenho = distancia / l_gastos; // + = soma, - = subtração, * = multiplicação, / = divisão.
    
    cout << "\nDistancia percorrida: " << distancia << " km" << "\n"; //Exibe os dados de distância percorrida. \n = Pula automaticamente para a próxima linha.
    cout << "Litros gastos: " << l_gastos << "\n"; // Exibe quantos litros foram gastos.
    cout << "Desempenho do carro: " << desempenho << " km/l"; // Exibe os dados de desempenho do carro.

	return 0; //Finaliza a execução do programa
}
