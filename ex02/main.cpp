#include <iostream>
#include "add.h";

using namespace std;

int add(int val1, int val2);

    /*
        Forward declaration: declara a assinatura
        da função no início do código para informar
        ao compilador.
        Dessa forma, o código abaixo pode ser feito
        de maneira agnóstica à ordenação das funções.
        Dessa forma, evitamos dependências circulares
        e podemos organizar o código sem se preocupar
        com a ordenação das funções
    */

int main()
{

    int val1{}, val2{};

    std::cout << "inserir val1: ";
    std::cin >> val1;

    std::cout << '\n' << "inserir val2: ";
    std::cin >> val2;


    std::cout << '\n' << val1 << " + "  << val2 << " = "<< add(val1, val2) << '\n';

}

//int add(int val1, int val2){return val1+val2;}

    /*
        declaração x definição:
        - declaração: inicialização
        - definição: inicialização + implementação
    */

    /*
        ODR: toda função variável, arquivo
        só podem ser definidos uma única vez
    */

    /*
        Essa Forward Declaration também serve para que
        o compilador saiba da existência das funções
        que estão em outros arquivos, como nesse caso
        onde add() está em add.cpp
    */



