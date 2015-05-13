//---------------------------------------------------------------------------

#ifndef EstruturaH
#define EstruturaH
//---------------------------------------------------------------------------
#include "Parametro.h"

class Estrutura
{
  private:
   int solucao[4][4];
   int vetorTresVariaveis[6][8];
   double vetorQuatroVariaveis[8][16];
  public:
   Estrutura();
   ~Estrutura();

   void estruturaDuasVariaveis();
   void getSolucaoUmDuasVariaveis(int[4][4]);
   void getSolucaoDoisDuasVariaveis(double[9][4]);
   void getSolucaoTresDuasVariaveis(double [7][4]);

   void estruturaTresVariaveis();
   void getSolucaoUmTresVariaveis(int[6][8]);
   void getSolucaoDoisTresVariaveis(double[8][8]);
   void getSolucaoTresTresVariaveis(double[8][8]);

   void estruturaQuatroVariaveis();
   void getSolucaoUmQuatroVariaveis(int[16][16]);
   void getSolucaoDoisQuatroVariaveis(double[13][16]);
   void getSolucaoTresQuatroVariaveis(double[14][16]);
};

//---------------------------------------------------------------------------
#endif
