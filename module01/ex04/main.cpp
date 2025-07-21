#include <string>
#include <iostream>
#include <fstream>

std::string customReplace(const std::string &str, const std::string &s1, const std::string &s2)
{
    std::string ret;
    std::size_t pos = 0; // posicao inicial da substring que devemos anexar
    std::size_t num; // retorna o index da posicao da primeira ocorrencia de s1

    num = str.find(s1, pos); // index da primeira ocorrencia de s1
    while(num != std::string::npos) // enquanto nao for encontrado ocorrencia de s1, continua
    {
        ret.append(str, pos, (num - pos)); // anexa a parte antes da ocorrencia encontrada
        ret.append(s2);  //anexa a string de substituicao
        pos = num + s1.length(); //atualiza posicao para continuar apos a substring encontrada
        num = str.find(s1, pos); //volta a procurar ocorrencia de s1
    }

    ret.append(str, pos, str.length() - pos); //anexa o resto da string original
    return (ret);
}

int main (int count, char **value){
    if(count != 4) // se tiver menos que 4 argumentos nem entra
        return(std::cout << "numeros de argumento invalido" << std::endl, 1); 

    std::fstream file; // declaracao de objeto fstream chamado de file
    file.open(value[1], std::ios::in); // fstream eh utilizado para ler file.
    
    if(file.fail()) //se falhar a abertura e lida do arquivo
        return(std::cout << "deu ruim" << std::endl, 1); //mensagem de error
    else
    {
        std::fstream file_replace; // declaracao de objeto fstream chamado de file_replace, arquivo de saida
        std::string file_replace_name = value[1]; // cria nome de arquivo de saida baseado no nome original + replace
        file_replace_name += ".replace";
        file_replace.open(file_replace_name.c_str(), std::ios::out); //abre o arquivo de saida em modo de escrita
        std::string line; //armazena cada linha lida
        if (file.is_open()) { //abrir o arquivo ler linha a linha
            while (getline(file, line))
                file_replace << customReplace(line, value[2], value[3]) << std::endl; //  passa para o arquivo de saida o retorno da funcao com as substituicoes feitas
        }
        file_replace.close(); //fecha o arquivo de saida
        file.close(); //fecha o arquiv de entrada

    }
}