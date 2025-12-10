// 09_precovenda.cpp - calcula imposto, margem de revenda e preço de venda do produto

#include <iostream> //Inclui a biblioteca padrão iostream
using namespace std; //Declara automaticamente o prefixo std

int main() // Ponto de entrada do programa
{
	float precofab, imposto, margem, precovenda; //Declaração de variáveis float.
    
	cout << "Qual o preco de fabricacao do produto? "; //Pede ao usuário que ele defina um preço de fabricação do produto.
    cin >> precofab;

    imposto = precofab * 0.35; //Calcula o valor a ser cobrado em impostos.
    margem = (precofab + imposto) * 0.1; //Calcula a margem de venda.
    precovenda = precofab + imposto + margem; //Pega os outros dois resultados e calcula o preço da venda do produto.
    
    cout << "\nImposto " << imposto; //Exibe os resultados das contas.
    cout << "\nMargem de revenda " << margem;
    cout << "\nPreco de venda " << precovenda;

	return 0;
}
