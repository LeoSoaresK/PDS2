#include "venda.hpp"

#include <iomanip>

Venda::~Venda() {
 while (!m_pedidos.empty())
    m_pedidos.pop_front();
}

void Venda::adicionaPedido(Pedido* p) {
  m_pedidos.push_back(p);
}

void Venda::imprimeRelatorio() const {
  // TODO: Implemente este metodo
  /**
   * Aqui voce tem que percorrer a lista de todos os pedidos e imprimir o resumo
   * de cada um. Por ultimo, devera ser exibido o total de venda e a quantidade
   * de pedidos processados.
   */
   
   std::list<Pedido*> m_pedidos_ = m_pedidos;
   string pedido;
   int contador = 0;
   float valor;
   
   while (!m_pedidos_.empty())
   {
       pedido = m_pedidos_.front()->resumo();
       valor += m_pedidos_.front()->calculaTotal();
       contador++;
       
       cout << "Pedido " << contador << endl;
       cout << pedido << endl;
       m_pedidos_.pop_front();
   }
   
   cout << "Relatorio de Vendas" << endl;
   cout << "Total de vendas: R$ " << valor << "0" << endl;
   cout << "Total de pedidos: " << contador;
   
}