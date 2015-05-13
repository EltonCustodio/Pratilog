//---------------------------------------------------------------------------

#ifndef ResolveH
#define ResolveH
//---------------------------------------------------------------------------
#include "Parametro.h"
#include "FormularioExpUmDuasVariaveis.h"



class Resolve
{
   private:
      int SolucaoUmDuasVariaveis[4][4];

   public:
    Resolve();
    ~Resolve();

    void resolveSolucaUmDuasVariaveis(int [4][4]);
    void resolveSolucaDoisDuasVariaveis(double [9][4]);
    void resolveSolucaTresDuasVariaveis(double [7][4]);

    void resolveSolucaoUmTresVariaveis(int [6][8]);
    void resolveSolucaoDoisTresVariaveis(double [8][8]);
    void resolveSolucaoTresTresVariaveis(double [8][8]);

    void resolveSolucaoUmQuatroVariaveis(int[16][16]);
    void resolveSolucaoDoisQuatroVariaveis(double[13][16]);
    void resolveSolucaoTresQuatroVariaveis(double[14][16]);

    void getSolucaoUmDuasVariaveis(int[4][4]);

};

//---------------------------------------------------------------------------
#endif
