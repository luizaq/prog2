#include "Carro.hpp"

Carro::Carro(string t, string c ,int np)//verifi =ca se o metodo esta declarado na classe
{
  ligado = false;
  tipo=t;
  cor=c;
  numPortas=np;
  ConfigPlaca();
}
void Carro::ConfigPlaca()
{
  string placa,cor;
  char modelo;

  cout<<"informe placa ,cor e modelo de placa para o veiculo"<<"  ||tipo|\n";

  cin>>placa>>cor>>modelo;

  this->placa.setId(placa);
  this->placa.setModelo(modelo);
  this->placa.setCor(cor);
}
void Carro::Ligar()
{
  if (!ligado)
  {
    ligado=true;
    cout<< tipo <<"Carro ligado. \n";
  }
  else
  {
    cout << tipo <<"ja esta ligado \n";
  }
}
void Carro::Desligar()
{
  if (ligado)
  {
    ligado=false;
    cout << tipo<< "Desligado \n";
  }
  else
  {
    cout<< tipo << "ja esta desligado \n";
  }
}
void Carro::Freiar()
{
  cout<<tipo<<"Esta freiando \n";
}
void Carro::Acelerar()
{
  cout<<tipo<< "esta acelerando \n";
}
