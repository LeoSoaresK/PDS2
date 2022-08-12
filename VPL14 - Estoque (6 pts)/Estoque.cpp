#include <string>

#include "Estoque.hpp"

void Estoque::add_mercadoria(const std::string& mercadoria, unsigned int qtd) {
  estoque_[mercadoria] += qtd;
}

void Estoque::sub_mercadoria(const std::string& mercadoria, unsigned int qtd) {
  estoque_[mercadoria] -= qtd;
}

unsigned int Estoque::get_qtd(const std::string& mercadoria) const {
    return estoque_.at(mercadoria);
}

void Estoque::imprime_estoque() const {
  for (map<string,unsigned int>::const_iterator it=estoque_.begin(); it!=estoque_.end(); ++it)
  {
      cout << it->first << ", " << it->second << endl;
  }
}

Estoque& Estoque::operator += (const Estoque& rhs) {
   for (map<string,unsigned int>::const_iterator it=rhs.estoque_.begin(); it!=rhs.estoque_.end(); ++it)
   {
       estoque_[it->first] += it->second;
   }
}

Estoque& Estoque::operator -= (const Estoque& rhs) {
   for (map<string,unsigned int>::const_iterator it=rhs.estoque_.begin(); it!=rhs.estoque_.end(); ++it)
   {
       estoque_[it->first] -= it->second;
   }
}

bool operator < (Estoque& lhs, Estoque& rhs) {
    for (map<string,unsigned int>::const_iterator it=lhs.estoque_.begin(); it!=lhs.estoque_.end(); ++it)
   {
       if (rhs.estoque_[it->first] != 0 && rhs.estoque_[it->first] > lhs.estoque_[it->first])
        continue;
        
         else
        return false;
   }
   return true;
}

bool operator > (Estoque& lhs, Estoque& rhs) {
    for (map<string,unsigned int>::const_iterator it=rhs.estoque_.begin(); it!=rhs.estoque_.end(); ++it)
   {
       if (lhs.estoque_[it->first] != 0 && lhs.estoque_[it->first] > rhs.estoque_[it->first])
        continue;
        
         else
        return false;
   }
  return true;
}