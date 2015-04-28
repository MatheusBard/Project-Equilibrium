//========================================================================================
// Name        : Substancia.cpp
// Author      : Joao Flavio Vieira de Vasconcellos
// Version     : 1.0
// Description : Classe que define as caracteristicas
//               de cada uma das substancias utilizadas
//               pela biblioteca
//
// Copyright   : Copyright (C) <2015>  Joao Flavio Vasconcellos (jflavio at iprj.uerj.br)
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

#ifndef __SUBSTANCIA_H__
#define	__SUBSTANCIA_H__



//============================================================================
// Defines
//============================================================================
//#define __SUBSTANCIA_DEBUG__

//============================================================================
// C++ Includes
//============================================================================
#include <algorithm>
#include <iostream>
#include <string>


//============================================================================
// Boost++ Includes
//============================================================================

//============================================================================
// Petsc Includes
//============================================================================

//============================================================================
// Equilibrium Includes
//============================================================================

#include <Misc/Misc.h>

//!  classe Substancia. 
/*!
 Classe utilizada para definir cada uma das substâncias que serão utilizadas na biblioteca Equilibrium.
*/

ELM_NAMESPACE_OPEN

class Substancia 
{
    
//============================================================================
// Funcoes e classes friend
//============================================================================      
friend std::ostream& operator << (std::ostream&, const Substancia&);    
    
public:
    
//============================================================================
// Construtores
//============================================================================ 
    //! Construtora default.
    Substancia(){};
    
    //! Construtora de cópia.
    Substancia(const Substancia&);
    
    
     //! Construtora com parâmetros.
    /**
       * @param _nome Nome da substância.
       * @param _sigla Sigla da substância.
       */
    Substancia (const std::string& _nome, const std::string& _sigla);
    
    //! Destrutora.
    virtual ~Substancia(){};
    
//============================================================================
// Sobrecarga de operadores
//============================================================================

/**
       * Sobrecarga do operador =.
       * @param _subs Variável tipo Substancia a ser copiada.
       */    
const Substancia& operator= (const Substancia& _subs);    
    
//============================================================================
// Funcoes inline
//============================================================================  

    //! Função que acessa o nome de uma substância.
inline const std::string Nome () const {return nome;};

    //! Função que acessa a sigla de uma substância.
inline const std::string Sigla () const {return sigla;};

//============================================================================
// Funcoes 
//============================================================================    

//! Função para alterar o nome de uma substância.
void Nome (const std::string& _nome);

//! Função para alterar a sigla de uma substância.
void Sigla (const std::string& _sigla);

private:

std::string         nome,   //! Nome da substância.
                    sigla;  //! Sigla da substância.

};


ELM_NAMESPACE_CLOSE
        
#endif	// __SUBSTANCIA_H 

