#include "pedido.hpp"


Pedido::~Pedido() {

while (!m_produtos.empty())
    m_produtos.pop_front();
}

void Pedido::setEndereco(const std::string& endereco) {
  m_endereco = endereco;
}


float Pedido::calculaTotal() const {
    
float total = 0;
list<Produto*> m_produtos_ = m_produtos;

while (!m_produtos_.empty())
{
    total += (m_produtos_.front()->getValor() * m_produtos_.front()->getQtd());
    m_produtos_.pop_front();
}
return total;
}


void Pedido::adicionaProduto(Produto* p) {
  m_produtos.push_back(p);
}

std::string Pedido::resumo() const {

string resumo;
list<Produto*> m_produtos_ = m_produtos;

while (!m_produtos_.empty())
{
    resumo += m_produtos_.front()->descricao() + "\n";
    m_produtos_.pop_front();
}
resumo += "Endereco: " + m_endereco;
return resumo;
}