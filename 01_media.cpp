// 01_media.cpp - calcula a média de duas notas

#include <iostream> //Inclui a biblioteca padrão iostream
using namespace std; //Declara automaticamente o prefixo std

int main() // Ponto de entrada do programa
{
    float nota1, nota2; //Declaração das variáveis nota1 e nota2. float = números decimais
    
    cout << "Qual a primeira nota? "; //Pergunta ao usuário qual a primeira nota
    cin >> nota1;
    cout << "Qual a segunda nota? "; //Pergunta ao usuário qual a segunda nota
    cin >> nota2;
    
    //cout = O programa exibe mensagens na tela. cin = O usuário insere dados para alimentar o programa.
    
    cout << "A media e " << (nota1 + nota2) / 2; //Exibe a média fazendo o cálculo automaticamente, sem a necessidade de uma terceira variável.
    
	return 0; //Finaliza a execução do programa
}

//IMPORTANTE! O C++ NÃO ACEITA CARACTERES ESTRANGEIROS COMO POR EXEMPLO ACENTO OU TIL. MUITO CUIDADO NA HORA DE ESCREVER O SEU PROGRAMA!!