#include <iostream>
#include <locale.h>
using namespace std;
//procedimento adi��o
float soma(float n1, float n2)
{
    float r = n1+n2;
    cout<<"O resultado da soma �: "<<r;
     return r;
}
float subtracao(float n1,float n2)
{
    float r = n1-n2;
    cout<<"O resultado da subtra��o �:"<<r;
     return r;
}
float multiplicacao(float n1,float n2)
{
    float r = n1*n2;
    cout<<"O resultado da multiplicacao �:"<<r;
     return r;
}
float divisao(float n1,float n2)
{
    if (n2 == 0){
        cout << "Erro: divis�o por zero!";
        return 0;
    }
    float r = n1/n2;
    cout<<"O resultado da divisao �:"<<r;
    return r;
}
float media(float n1,float n2)
{
    float r = (n1+n2)/2;
    cout<<"O resultado da media �:"<<r;
     return r;
}

int main()
{
    setlocale(LC_ALL,"portuguese");

    int opc;

    cout<<"    informe a Op��o:     \n";
    cout<<" 1 - soma                \n";
    cout<<" 2 - Subtra��o           \n";
    cout<<" 3 - Multiplica��o       \n";
    cout<<" 4 - Divis�o             \n";
    cout<<" 5 - M�dia               \n";
    cout<<" 6 - Porcentagem         \n";
    cout<<" 0 - retorna             \n";
    cin>>opc;
    if (opc == 0)
        {
        cout << "Opera��o cancelada pelo usu�rio.";
        return 0;
    }
    float n1,n2;
    cout<<"informe o primeiro valor:";
    cin>>n1;
    cout<<"informe o segundo valor:";
    cin>>n2;
    if  (opc == 1 )
        {
            soma(n1,n2);

               }else if (opc == 2 )
                        {
                            subtracao(n1,n2);

                         }else if (opc == 3 )
                                  {
                                    multiplicacao(n1,n2);

                                   }else if (opc == 4 )
                                            {
                                                divisao(n1,n2);

                                             }else if (opc == 5)
                                                    {
                                                        media(n1,n2);

                                                    }else
                                                        {
                                                                    cout<<"Op��o invalida!";
                                                        }

    return 0;

}
