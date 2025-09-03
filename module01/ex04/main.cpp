#include <string>
#include <iostream>
#include <fstream>

std::string customReplace(const std::string &str, const std::string &s1, const std::string &s2)
{
    std::string ret;
    std::size_t pos = 0; 
    std::size_t num; 

    num = str.find(s1, pos); 
    while(num != std::string::npos) 
    {
        ret.append(str, pos, (num - pos));
        ret.append(s2); 
        pos = num + s1.length();
        num = str.find(s1, pos); 
    }

    ret.append(str, pos, str.length() - pos); 
    return (ret);
}

int main (int count, char **value){
    if(count != 4) 
        return(std::cout << "Usage: " << value[0] << " <filename> <s1> <s2>" << std::endl, 1); 

    std::fstream file;
    file.open(value[1], std::ios::in);
    
    if(file.fail())
    {
        return(std::cout << "deu ruim" << std::endl, 1);    
    }
    std::fstream file_replace;
    std::string file_replace_name = value[1];  
    file_replace_name += ".replace";
    file_replace.open(file_replace_name.c_str(), std::ios::out);  
    std::string line; 
    if (file.is_open()) 
    {
        while (getline(file, line))
            file_replace << customReplace(line, value[2], value[3]) << std::endl; 
    }
    file_replace.close();
    file.close();

}
