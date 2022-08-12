#include "google_password.hpp"

#include <iostream>

using namespace std;

void GooglePassword::insert(const std::string& url,
                            const std::string& login,
                            const std::string& password) {

if (checkPassword(password))
{
    Usuario user(login, password);
    m_passwords.insert(std::pair<string,Usuario>(url,user));
}
}

void GooglePassword::remove(const std::string& url) {
  m_passwords.erase(url);
}


void GooglePassword::update(const std::string& url,
                            const std::string& login,
                            const std::string& old_password,
                            const std::string& new_password) {
  // TODO: Implemente este metodo
  /**
   * Este metodo nao pode inserir novas credenciais, apenas atualizar as
   * ja existentes. Alem disso, o login e/ou senha do usuario so podem ser
   * atualizados se a senha armazenada no sistema for igual a old_password.
   * Nao esqueca de verificar se o novo password tambem e valido.
   */
   
    for (std::map<string, Usuario>::iterator it=m_passwords.begin(); it!=m_passwords.end(); ++it)
    {
        if (it->first == url && it->second.getPassword() == old_password && checkPassword(new_password))
        {
            it->second.setPassword(new_password);
            it->second.setLogin(login);
        }
    }
}

void GooglePassword::printPasswords() {
  // TODO: Implemente este metodo
  /**
   * Exemplo de saida:
   * 3
   * aaa.site.com: login and password
   * www.site.com: login and password
   * zzz.site.com: login and password
   *
   */
   
   Usuario user("", "");
   
   cout << m_passwords.size() << endl;
   
    for (std::map<string, Usuario>::iterator it=m_passwords.begin(); it!=m_passwords.end(); ++it)
    {
        user.setPassword(it->second.getPassword());
        user.setLogin(it->second.getLogin());
        cout << it->first << ": " << user.getLogin() << " and " << user.getPassword() << endl;
    }
}

bool GooglePassword::checkPassword(const std::string& password) const {
    if (password.size() > 50)
        return 0;
        
    if (password.size() < 6)
        return 0;
        
    string teste;
        
    for (int i = 0; i < password.size(); i++)
    {
        if (password[i] == ' ')
            return 0;
        
        if (password[i] == '1' && password[i+1] == '2' && password[i+2] == '3' && password[i+3] == '4' && password[i+4] == '5' && password[i+5] == '6')
            return 0;
    }
    
    return 1;
}