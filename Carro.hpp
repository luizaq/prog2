#include <iostream>
#include "Placa.hpp"
#include <string>
using namespace std;

class Carro
{
public:
    Carro(string _tipo, string _cor, int _numPortas); //metodo construtor, executado automaticamente na cria��o do objeto
    void Ligar();
    void Desligar();
    void Acelerar();
    void Frear();
    void ConfiguraPlaca();
private:
    string tipo;
    string cor;
    Placa placa; // objeto da classe placa se torna um membro da classe carro
    int numPortas;
    bool ligado;
};
