#include <Elemento\Substancia.h>

//============================================================================
// Construtores 
//============================================================================
ELM_NAMESPACE_OPEN 

#undef __FUNCT__
#define __FUNCT__ "Substancia::Substancia(const Substancia&)"
Substancia::Substancia(const Substancia& _subs) :   nome(_subs.nome),
                                                    sigla(_subs.sigla)
{
#ifdef __SUBSTANCIA_DEBUG__
std::cout << "\nEntrei na rotina : " << __FUNCT__ << std::endl;
#endif 

#ifdef __SUBSTANCIA_DEBUG__
std::cout << "\nSai na rotina : " << __FUNCT__ << std::endl;
#endif     
}


#undef __FUNCT__
#define __FUNCT__ "Substancia::Substancia (const std::string&, const std::string&)"
Substancia::Substancia (const std::string& _nome, const std::string& _sigla) 
{
#ifdef __SUBSTANCIA_DEBUG__
std::cout << "\nEntrei na rotina : " << __FUNCT__ << std::endl;
#endif 

    std::transform(_nome.begin(), _nome.end(), std::back_inserter(nome), ::toupper);
    std::transform(_sigla.begin(), _sigla.end(), std::back_inserter(sigla), ::toupper);
    
#ifdef __SUBSTANCIA_DEBUG__
std::cout << "\nSai na rotina : " << __FUNCT__ << std::endl;
#endif     
}

//============================================================================
// Sobrecarga de operadores
//============================================================================ 

#undef __FUNCT__
#define __FUNCT__ "const Substancia& Substancia::operator= (const Substancia&)"
const Substancia& Substancia::operator= (const Substancia& _subs)
{
#ifdef __SUBSTANCIA_DEBUG__
std::cout << "\nEntrei na rotina : " << __FUNCT__ << std::endl;
#endif 
    
    if (&_subs != this)
    {
        nome = _subs.nome;
        sigla = _subs.sigla;
    }

#ifdef __SUBSTANCIA_DEBUG__
std::cout << "\nSai na rotina : " << __FUNCT__ << std::endl;
#endif     
    
    return *this;
}

//============================================================================
// Funcoes friends
//============================================================================ 

#undef __FUNCT__
#define __FUNCT__ "void Substancia::Nome (const std::string&)"
void Substancia::Nome (const std::string& _nome)
{
   nome.clear(); 
   std::transform(_nome.begin(), _nome.end(), std::back_inserter(nome), ::toupper);

}

#undef __FUNCT__
#define __FUNCT__ "void Substancia::Sigla (const std::string&)"
void Substancia::Sigla (const std::string& _sigla)
{
    sigla.clear();
    std::transform(_sigla.begin(), _sigla.end(), std::back_inserter(sigla), ::toupper);
    
}

//============================================================================
// Funcoes friends
//============================================================================ 
#undef __FUNCT__
#define __FUNCT__ "std::ostream& operator << (std::ostream&, const Substancia&)"
std::ostream& operator << (std::ostream& _os, const Substancia& _subs)
{
#ifdef __SUBSTANCIA_DEBUG__
std::cout << "\nEntrei na rotina : " << __FUNCT__ << std::endl;
#endif 

        _os << "Nome: " << _subs.nome << " " << " Sigla: " << _subs.sigla;

#ifdef __SUBSTANCIA_DEBUG__
std::cout << "\nSai na rotina : " << __FUNCT__ << std::endl;
#endif   

    return _os;
}

ELM_NAMESPACE_CLOSE

