#include <iostream>
#include <locale.h>
using namespace std;

/*
2.Um supermercado vende seus produtos dos
tipos Limpeza, Alimentos e Bebidas. Uma pessoa realiza a
compra de 8 produtos. Calcule e mostre:
• Quanto a pessoa gastou com cada tipo de produto
• O gasto total
• Qual tipo de produto teve maior gasto
*/


float valor, soma, limp, ali, beb, maior;
int tipo, cont;

int main(){

    setlocale(LC_ALL, "portuguese");

    cont=1;
    soma=0;
    while (cont<=8){

        cout<<"\n "<<cont<<"º Produto : | 1-Limpeza| 2-Alimento| 3-Bebida | = " ;
        cin>>tipo;

        cout<<"\n Qual valor = R$ ";
        cin>>valor;
        cout<<"--------------------------------------------------------------";
        soma = soma+valor;

        //soma por tipo de produto:
        if (tipo == 1)

            limp = limp + valor;

        else if (tipo == 2)
                 ali = ali + valor;

             else if (tipo == 3)
                    beb = beb + valor;
        cont++;

        }

        cout<<"\n==============================================================";
        cout<<"\n Valor total produtos = R$ "<<soma;
        cout<<"\n Gasto em (1)Limpeza = R$ "<<limp;
        cout<<"\n Gasto em (2)Alimentação = R$"<<ali;
        cout<<"\n Gasto em (3)Bebida = R$ "<<beb;

        //verificar tipo produto com maior gasto
        if(limp>ali){

            if(limp>beb)
                cout<<"\n Tipo de produto (1)LIMPEZA = R$ "<<limp<<" maior gasto";
            else
                cout<<"\n Tipo de produto (3)BEBIDA = R$ "<<beb<<" maior gasto";
            }

        else if(ali>beb)
                 cout<<"\n Tipo de produto (2)ALIMENTAÇÃO = R$ "<<ali<<" maior gasto";
              else
                 cout<<"\n Tipo de produto (3)BEBIDA = R$ "<<beb<<" maior gasto";

        cout<<"\n==============================================================";
        cout<<"\n ";
}
