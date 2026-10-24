#include <iostream>

int main()
{
    // single-line comment
    std::cout<< "Hello World from Kaike";

    printf("\n");

    int a{2};
    int b{3};
    int c{};

    std::cout<< a <<  b << a+b << std::endl;
    std::cout<<c << '\n';

    std::cout<<a+b << '\n';

    int d{};
    printf("agora insira dois valores: ");
    std::cin >> c >> d;

    std::cout << "c + d = " << c+d;
    /*
        std:cin guarda input no buffer terminado em '\n' em forma de pilha
        caso o input tenha algum espaço no meio,
        o input captura apenas os valores antes do espaço
        e joga o restante para a próxima variável a ser atribuida
    */

    /*
        std:endln limpa o buffer (flush) toda vez que é invocado
        isso torna o programa lento, considerando que o output system
        realiza essa limpa do buffer periodicamente de forma eficiente.
        dessa forma, usamos o '\n' pra tornar o código mais rápido
    */

    /*
        std:cin >> mostra pra onde os dados tão se movendo -> atribuindo na variável
        std:cout << mostra pra onde os dados tão se movendo -> levando os valores pro console

    */


    return 0;

    /*
        Multi
        line
        comment
    */

}
