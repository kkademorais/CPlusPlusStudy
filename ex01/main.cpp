#include <iostream>

using namespace std;

void nickelback(){std::cout << "Look at this photograph" << '\n';}

void sixSeven(int x, int y){
    std::cout << x << '\n';
    std::cout << y << '\n';
    // variáveis locais: morrem no fim de execução da função

}

int getValueFromUser(int val){
    std::cout << '\n' << "insira value: ";
    std:cin >> val;
    return val;
}

int getValue(){
    std::cout << '\n' << "inserir newValue: ";
    int val{};
    std::cin >> val;
    return val;
}

string kaike(){
    return "kaike";
}

int main()
{
    int x;

    std::cout << x << '\n';

    /*
        quando não é atribuído um valor pra variável,
        ela recebe o valor que  está na região de memória
        a qual ela foi alocada (garbage)
    */


    std::cout << sizeof(int) << '\n';

    nickelback();

    sixSeven(6,7);

    /*
        passagem por valores (pass by value):
        passa os valores por argumentos,
        os parâmetros da função são variáveis que são
        inicializadas, e recebem os valores passados
        pelos argumentos, usando copy inicialization,
        ou seja, o valor é copiado pra região de memória
        da variável atribuída.
        Outras formas de inicialização:
        - direct-initialization: int x (5);
        - list-initialization: int x {5};
    */

    int k {};

    int value {getValueFromUser(k)};

    std::cout << "value = " << value << '\n';

    /*
        Nesse caso a passagem de variáveis ocorre de forma
        ineficiente.
        Tanto a variável 'k' na main()
        como val em getValueFromUser()
        são inicializadas mas seus valores nunca são
        usados nas respectivas funções.
        Nesse caso, é melhor inicializarmos
        variáveis locais e utilizá-las sem precisar
        de passar argumentos para as funções.
    */

    int newValue {getValue()};

    std::cout << "new value = " << newValue << '\n';

    /*
        Aqui, não foi preciso passar nenhum argumento
        ou inicializar alguma variável de parâmetro
        de forma desnecessária.
        Apenas inicializamos variáveis locais que seriam
        utilizadas.
        Apenas utilizem parâmetros de funções em casos
        onde valores serão passados pra dentro das funções.
        Em caso de apenas passar variáveis que não foram
        inicializadas, é melhor inicializar a variável
        dentro do escopo da própria função.
    */

    std::cout << '\n' << kaike();
    // objeto temporário: retorno de uma função sem
    // variável atríbuida.
    // Valores passados por cópia.

    return 0;
}
