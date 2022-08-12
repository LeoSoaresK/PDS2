#include <regex>
#include <math.h>
#include <string>
#include <vector>
#include <sstream>
#include <list>

#include "LineProcessor.hpp"

void LinePrinter::processaLinha(const std::string &str) {
  std::cout << str << std::endl;
}

bool ContadorPopRural::linhaValida(const std::string &str) const {
  // Neste exemplo usaremos expressoes regulares para verificar se uma linha
  // eh valida ou nao.
  //
  // Esta expressao regular eh formada por cinco partes. Cada uma dessas
  // partes eh um dos tres tipos de padrao regular abaixo:
  //
  // \\w+ eh qualquer palavra com um ou mais digitos, letras e sublinhas (_)
  // \\s* eh qualquer sequencia de zero ou mais espacos (inclui tab)
  // \\d+ eh qualquer sequencia de um ou mais digitos
  std::regex regularExpr("\\w+\\s*\\d+\\s*\\d+");

  // A funcao regex_match vai retornar verdadeiro se a string str casa-se com
  // a expressao regular que acabamos de criar:
  return std::regex_match(str, regularExpr);
}

void ContadorPopRural::processaLinha(const std::string &str) {
  //
  // Em geral eh mais facil ler dados de uma string se a string eh transformada
  // em um objeto do tipo stringstream:
  std::stringstream ss(str);
  //
  // Iremos ler os dados da string nestas tres variaveis abaixo:
  std::string nomePais;
  unsigned populacao, percUrbana;
  //
  // Como sabemos que a linha contem string int int, podemos fazer a leitura
  // facilmente usando o operador de streaming:
  ss >> nomePais >> populacao >> percUrbana;
  //
  // Note que precisamos arredondar o valor que serah impresso. O arredondamento
  // serah feito via a funcao floor. Ou seja, decimais serao sempre
  // arredondados para baixo:
  unsigned popRural = floor(populacao - (populacao * (percUrbana/100.0)));
  //
  // Uma vez encontrados os valores que precisam ser impressos, seguimos o
  // modelo do enunciado do exercicio:
  std::cout << popRural << " pessoas vivem no campo no " << nomePais <<
    std::endl;
}

bool ContadorNumNaturais::linhaValida(const std::string &str) const {
  return str.find_first_not_of("0123456789 ")==std::string::npos;
}

void ContadorNumNaturais::processaLinha(const std::string &str) {
  int count=0;
  std::string buffer;
  //"0  14 1 245"
  for(auto x : str){
    if(isdigit(x)){
      buffer+=x;
    }else{
        if(buffer=="")
            continue;
        count+=std::stoi(buffer);
        buffer="";
    }
  }
  
  count+=std::stoi(buffer);


  std::cout << count << std::endl;
}

bool LeitorDeFutebol::linhaValida(const std::string &str) const {
  //std::regex regularExpr("[a-zA-Z]+ \\d+ [a-zA-Z]+ \\d+");
  std::regex regularExpr("^\\s*\\w+?\\s+\\d+\\s+\\w+?\\s+\\d+$");

  return std::regex_match(str, regularExpr);
}

void LeitorDeFutebol::processaLinha(const std::string &str) {
  std::stringstream ss(str);
  std::string time1, time2;
  int pont1, pont2;
  ss>>time1>>pont1>>time2>>pont2;
  if(pont1>pont2){
     std::cout << "Vencedor: " << time1 << std::endl;
     return;
  }else if(pont1<pont2){
      std::cout << "Vencedor: " << time2 << std::endl;
      return;
  }
  
  std::cout<<"Empate"<<std::endl;
  
  
}

void ContadorDePalavras::processaLinha(const std::string &str) {
    std::stringstream ss(str);
    std::string buffer;
    int count=0;
    while(ss>>buffer){
        count++;
    }
  std::cout << count << std::endl;
}

bool InversorDeFrases::linhaValida(const std::string &str) const {
    std::regex regularExpr("[A-Za-z\\s*]+");
  return std::regex_match(str, regularExpr);
}

void InversorDeFrases::processaLinha(const std::string &str) {
    std::stringstream sIn(str);
    std::list<std::string> linha;
    std::string buffer;
    while(sIn>>buffer){
        linha.push_front(buffer);
    }
    for(auto x : linha){
          std::cout << x<< " ";
    }
    std::cout << std::endl;

}

bool EscritorDeDatas::linhaValida(const std::string &str) const {
  std::regex regularExpr("\\s*\\d\\d?/\\d\\d?/\\d{4}");
  return std::regex_match(str, regularExpr);
}

void EscritorDeDatas::processaLinha(const std::string &str) {
    // std::stringstream ss(str);
    // std::string buffer;
    // int countBarra =0;
    // int mes=0;
    // while(ss>>buffer){
    //         auto it=buffer.find('/');
    //     }
    // }
}