// 07_contatelefonica.cpp - calcula o valor da conta telefônica

#include <iostream> //Inclui a biblioteca padrão iostream
using namespace std; //Declara automaticamente o prefixo std

int main() // Ponto de entrada do programa
{ 
	float min1, min2, min3, sub1, sub2, sub3, tot; //Declaração de variáveis float.
    
	cout << "Quantos minutos em ligacoes (0h-7h59)? "; //Pergunta quantos minutos foram gastos em ligações, divididos por períodos do dia.
    cin >> min1;
	cout << "Quantos minutos em ligacoes (8h-15h59)? ";
    cin >> min2;
	cout << "Quantos minutos em ligacoes (16h-23h59)? ";
    cin >> min3;

    sub1 = min1 * 0.155645; //Calcula o valor da conta baseado no tempo que o cliente passou em ligação
    sub2 = min2 * 0.245645;
    sub3 = min3 * 0.354656;
    tot = sub1 + sub2 + sub3;
    
    cout << "\nSubtotal (0h - 7h59): " << sub1;
    cout << "\nSubtotal (8h - 15h59): " << sub2;
    cout << "\nSubtotal (16h - 23h59): " << sub3;
    cout << "\nTotal: " << tot;

	return 0; //Finaliza a execução do programa
}
