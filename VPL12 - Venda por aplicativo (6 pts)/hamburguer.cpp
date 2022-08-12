#include "hamburguer.hpp"

std::string Hamburguer::descricao() const {
  // TODO: Implemente este metodo.
  /*
   * Note que aqui voce deve retornar uma descricao detalhada do Hamburguer.
   *
   * Exemplos:
   * 1X Hamburguer X-tudo artesanal.
   * 1X Hamburguer X-tudo simples.
   */
   
   string descricao = to_string(m_qtd) + "X Hamburguer " + tipo_;
   
   if (artesanal_)
    descricao += " artesanal.";
    
    else
    descricao += " simples.";
   
  return descricao;
}

Hamburguer::Hamburguer(const std::string& tipo,
                       bool artesanal,
                       int qtd,
                       float valor_unitario) {
  // TODO: Implemente este metodo
  
  tipo_ = tipo;
  artesanal_ = artesanal;
  m_qtd = qtd;
  m_valor_unitario = valor_unitario;
}