//---------------------------------------------------------------------------

#ifndef SolucaoH
#define SolucaoH
//---------------------------------------------------------------------------
# include "Parametro.h"
#include "Estrutura.h"
#include "Resolve.h"

class Solucao
{
  private:
   int solucaoUm[4][4];
   double solucaoDois[9][4];
   double solucaoTresDuasVariaveis[7][4];
   int solucaoUmTresVariaveis[6][8];
   double solucaoDoisTresVariaveis[8][8];
   double solucaoTresTresVariaveis[8][8];

   int solucaoUmQuatroVariaveis[16][16];
   double solucaoDoisQuatroVariaveis[13][16];
   double solucaoTresQuatroVariaveis[14][16];

  public:
  Solucao();
  ~Solucao();

  void solucaoDuasVariaveis(int);
  void solucaoTresVariaveis(int);
  void solucaoQuatroVariaveis(int);
  void getSolucaoUmDuasVariaveis(int[4][4]);
  void getSolucaoDoisDuasVariaveis(int[9][4]);
  void getSolucaoTresDuasVariaveis(int[7][4]);
  void getSolucaoUmTresVariaveis(int[6][8]);
  void getSolucaoDoisTresVariaveis(int[8][8]);
  void getSolucaoTresTresVariaveis(int[8][8]);
  void getSolucaoUmQuatroVariaveis(int[16][16]);
  void getSolucaoDoisQuatroVariaveis(int[13][16]);
  void getSolucaoTresQuatroVariaveis(int[14][16]);

};
//---------------------------------------------------------------------------
#endif
