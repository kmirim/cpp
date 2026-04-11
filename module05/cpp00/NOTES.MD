# MODULO 5 - classes

- Tratamento de excecoes 
- hierarquia de classes abstratas 
- excecoes sao tratadas atraves de: `std::exception`
- em c++ eu defino minha propria classe de excecao, normalmente dentro da classe principal, e sobrescreve o metodo: `const char *what() const throw()`;
- excecao nao precisam seguir o padrao do formato ortodoxo canonico

lista 00 - simula um escritorio infernal

- ex00: criar um burocrata com nivel de 1 a 150
    - se o nivel for menor de 1: GradeTooHighException.
    - se o nivel for maior que 150: GradeTooLowException.
    - quanto mais proximo do 1, maior o nivel, entao se eu tenho 10 e aumentei 3, quer dizer que eu vou para 7.
- diferencas para lidar com erro: 
    - parar de utilizar -1 e null
    - em c assim que encontra o erro, ele eh lancado
        - toda funcao que pode dar erro, deve ser tratada imediatamente
    - em cpp o erro eh lancado e deixa um bloco especifico la na frente captura-lo 
        - throw (lanca), em um caso de excecao, so cospe o erro, por exemplo um `return`
        - try tentativa de algo que pode dar errado 
        - catch pega caso de erro dentro de try
            - catch `std::exception &e`
            - `e.what()` padroniza as mensagens de erro
- classe enquanto uma struct com acao: 
    - eu crio um tipo de objeto, tipo `cadeira` 
    - cadeira tem acao de `se montar sozinha`
    - cadeira tem acao de `se montar dependendo da ordem de alguem (string alguem)`;
    - atributos: `int pernas`, `int bracos`, `string cores`, `Tipo tipo` (empresarial, gamer, de mesa de jantar etc)


    