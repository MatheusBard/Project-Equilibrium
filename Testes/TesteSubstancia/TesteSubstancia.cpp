//========================================================================================
// Name        : TesteSubstancia.cpp
// Author      : Joao Flavio Vieira de Vasconcellos
// Version     : 1.0
// Description : Programa de teste da classe Substancia da biblioteca
//               Equilibrium
//
// Copyright   : Copyright (C) <2014>  Joao Flavio Vasconcellos (jflavio at iprj.uerj.br)
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
//========================================================================================

//============================================================================
// C++ Includes
//============================================================================
#include <iostream>

//============================================================================
// Equilibrium Includes
//============================================================================
#include <Elemento\Substancia.h>

#undef __FUNCT__
#define __FUNCT__ "int main(int, char**)"
int main(int argc, char** argv) 
{
const unsigned int LSIZE(80);

	std::cout << "\n\nTestes da classe Substancia"  <<std:: endl;
	for (unsigned int i=0; i<LSIZE; i++) std::cout << "=";
        std::cout << std::endl;

        
        
//============================================================================
// Teste dos construtores
//============================================================================
    
        std::cout << "\n\nTestes dos construtores"  <<std:: endl;
	for (unsigned int i=0; i<LSIZE; i++) std::cout << "=";
        std::cout << std::endl;
        
elm::Substancia     s1,
                    s2("etano", "c2h6"),
                    s3(s2);

              
        std::cout << "Imprimindo s2 " << s2 << std::endl;
        std::cout << "Imprimindo s3 " << s3 << std::endl;

//============================================================================
// Teste da sobrecarga de operadores
//============================================================================

        std::cout << "\n\nTeste da sobrecarga de operadores"  <<std:: endl;
	for (unsigned int i=0; i<LSIZE; i++) std::cout << "=";
        std::cout << std::endl;
        
        
        s1 = s3;
        std::cout << "Imprimindo s1 " << s1 << std::endl;
        
//============================================================================
// Teste das funcoes inline
//============================================================================

        std::cout << "\n\nTeste das funcoes inline"  <<std:: endl;
	for (unsigned int i=0; i<LSIZE; i++) std::cout << "=";
        std::cout << std::endl;
        
        
        std::cout << "Nome em s3  = " << s3.Nome() << std::endl;
        std::cout << "Sigla em s1 = " << s1.Sigla() << std::endl;
        
//============================================================================
// Teste das funcoes 
//============================================================================        

        std::cout << "\n\nTeste das funcoes"  <<std:: endl;
	for (unsigned int i=0; i<LSIZE; i++) std::cout << "=";
        std::cout << std::endl;
        
        s1.Nome("Metano");
        std::cout << "Imprimindo novo s1 " << s1 << std::endl;

        s1.Sigla("Ch4");
        std::cout << "Imprimindo novo s1 " << s1 << std::endl;        


	std::cout << "\n\nFim dos testes da classe Substancia"  <<std:: endl;
	for (unsigned int i=0; i<LSIZE; i++) std::cout << "=";
        std::cout << std::endl;
        
    return 0;
}

