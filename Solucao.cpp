//---------------------------------------------------------------------------

#pragma hdrstop

#include "Solucao.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Solucao::Solucao()
{
   for(int i=0;i<4;++i)
   {
      for(int j=0;j<4;++j)
      {
        solucaoUm[i][j] = NULL;
      }
   }

    for(int i=0;i<9;++i)
   {
      for(int j=0;j<4;++j)
      {
        solucaoDois[i][j] = NULL;
      }
   }

   for(int i=0;i<7;++i)
   {
      for(int j=0;j<4;++j)
      {
        solucaoTresDuasVariaveis[i][j] = NULL;
      }
   }

    for(int i=0;i<6;++i)
   {
      for(int j=0;j<8;++j)
      {
        solucaoUmTresVariaveis[i][j] = NULL;
      }
   }

    for(int i=0;i<8;++i)
   {
      for(int j=0;j<8;++j)
      {
        solucaoDoisTresVariaveis[i][j] = NULL;
      }
   }

   for(int i=0;i<8;++i)
   {
      for(int j=0;j<8;++j)
      {
        solucaoTresTresVariaveis[i][j] = NULL;
      }
   }

   for(int i=0;i<16;++i)
   {
      for(int j=0;j<16;++j)
      {
        solucaoUmQuatroVariaveis[i][j] = NULL;
      }
   }

   for(int i=0;i<13;++i)
   {
      for(int j=0;j<16;++j)
      {
        solucaoDoisQuatroVariaveis[i][j] = NULL;
      }
   }

   for(int i=0;i<14;++i)
   {
      for(int j=0;j<16;++j)
      {
        solucaoTresQuatroVariaveis[i][j] = NULL;
      }
   }

}

Solucao::~Solucao()
{
}

void Solucao::solucaoDuasVariaveis(int escolha)
{


   Estrutura estrutura;
   Resolve resolver;
   int aescolha;
   
  switch(escolha)
   {
    case 1:
            estrutura.estruturaDuasVariaveis();
            estrutura.getSolucaoUmDuasVariaveis(solucaoUm);
            resolver.resolveSolucaUmDuasVariaveis(solucaoUm);

            break;

        case 2: estrutura.estruturaDuasVariaveis();
                estrutura.getSolucaoDoisDuasVariaveis(solucaoDois);
                resolver.resolveSolucaDoisDuasVariaveis(solucaoDois);
                break;
       case 3: estrutura.estruturaDuasVariaveis();
               estrutura.getSolucaoTresDuasVariaveis(solucaoTresDuasVariaveis);
               resolver.resolveSolucaTresDuasVariaveis(solucaoTresDuasVariaveis);
               break;
    }

}

void Solucao::solucaoTresVariaveis(int escolha)
{
   int k=1;
   Estrutura estrutura;
   Resolve resolver;

   switch(escolha)
   {
      case 1: estrutura.estruturaTresVariaveis();
              estrutura.getSolucaoUmTresVariaveis(solucaoUmTresVariaveis);
              resolver.resolveSolucaoUmTresVariaveis(solucaoUmTresVariaveis);

               for(int h=0;h<8;++h)
               {
                  for(int g=0;g<6;++g)
                  {
                     cout<<solucaoUmTresVariaveis[g][h]<<" ";
                     if (k%6==0)
                     {
                      cout<<endl;
                     }
                     ++k;
                  }
               }
               break;
      case 2: estrutura.estruturaTresVariaveis();
              estrutura.getSolucaoDoisTresVariaveis(solucaoDoisTresVariaveis);
              resolver.resolveSolucaoDoisTresVariaveis(solucaoDoisTresVariaveis);
              for(int h=0;h<8;++h)
               {
                  for(int g=0;g<8;++g)
                  {
                     cout<<solucaoDoisTresVariaveis[g][h]<<" ";
                     if (k%8==0)
                     {
                      cout<<endl;
                     }
                     ++k;
                  }
               }
               break;
       case 3: estrutura.estruturaTresVariaveis();
               estrutura.getSolucaoTresTresVariaveis(solucaoTresTresVariaveis);
               resolver.resolveSolucaoTresTresVariaveis(solucaoTresTresVariaveis);

                for(int h=0;h<8;++h)
               {
                  for(int g=0;g<8;++g)
                  {
                     cout<<solucaoTresTresVariaveis[g][h]<<" ";
                     if (k%8==0)
                     {
                      cout<<endl;
                     }
                     ++k;
                  }
               }
               break;
   }
}

void Solucao::solucaoQuatroVariaveis(int escolha)
{
  int k=1;
   Estrutura estrutura;
   Resolve resolver;

  switch(escolha)
  {
    case 1: estrutura.estruturaQuatroVariaveis();
            estrutura.getSolucaoUmQuatroVariaveis(solucaoUmQuatroVariaveis);
            resolver.resolveSolucaoUmQuatroVariaveis(solucaoUmQuatroVariaveis);

            break;

  case 2: estrutura.estruturaQuatroVariaveis();
            estrutura.getSolucaoDoisQuatroVariaveis(solucaoDoisQuatroVariaveis);
            resolver.resolveSolucaoDoisQuatroVariaveis(solucaoDoisQuatroVariaveis);

              for(int h=0;h<16;++h)
               {
                  for(int g=0;g<13;++g)
                  {
                     cout<<solucaoDoisQuatroVariaveis[g][h]<<" ";
                     if (k%13==0)
                     {
                      cout<<endl;
                     }
                     ++k;
                  }
               }
               break;

   case 3: estrutura.estruturaQuatroVariaveis();
           estrutura.getSolucaoTresQuatroVariaveis(solucaoTresQuatroVariaveis);
           resolver.resolveSolucaoTresQuatroVariaveis(solucaoTresQuatroVariaveis);
           for(int h=0;h<16;++h)
               {
                  for(int g=0;g<14;++g)
                  {
                     cout<<solucaoTresQuatroVariaveis[g][h]<<" ";
                     if (k%14==0)
                     {
                      cout<<endl;
                     }
                     ++k;
                  }
               }
               break;

  }
}

void Solucao::getSolucaoUmDuasVariaveis(int OSolucaoUmDuasVariaveis[4][4])
{

   for(int i=0;i<4;++i)
   {
      for(int j=0;j<4;++j)
      {
         OSolucaoUmDuasVariaveis[i][j] = solucaoUm[i][j];
      }
   }
}

void Solucao::getSolucaoDoisDuasVariaveis(int OSolucaoDoisDuasVariaveis[9][4])
{
   for(int i=0;i<9;++i)
   {
      for(int j=0;j<4;++j)
      {
         OSolucaoDoisDuasVariaveis[i][j] = solucaoDois[i][j];
      }
   }
}

void Solucao::getSolucaoUmTresVariaveis(int OSolucaoUmTresVariaveis[6][8])
{
   for(int i=0;i<6;++i)
   {
      for(int j=0;j<8;++j)
      {
         OSolucaoUmTresVariaveis[i][j] = solucaoUmTresVariaveis[i][j];
      }
   }
}

void Solucao::getSolucaoUmQuatroVariaveis(int OSolucaoUmQuatroVariaveis[16][16])
{
   for(int i=0;i<16;++i)
   {
      for(int j=0;j<16;++j)
      {
         OSolucaoUmQuatroVariaveis[i][j] = solucaoUmQuatroVariaveis[i][j];
      }
   }
}

void Solucao::getSolucaoTresDuasVariaveis(int OSolucaoTresDuasVariaveis[7][4])
{
   for(int i=0;i<7;++i)
   {
      for(int j=0;j<4;++j)
      {
         OSolucaoTresDuasVariaveis[i][j] = solucaoTresDuasVariaveis[i][j];
      }
   }
}

void Solucao::getSolucaoDoisTresVariaveis(int OSolucaoDoisTresVariaveis[8][8])
{
   for(int i=0;i<8;++i)
   {
      for(int j=0;j<8;++j)
      {
         OSolucaoDoisTresVariaveis[i][j] = solucaoDoisTresVariaveis[i][j];
      }
   }
}

void Solucao::getSolucaoTresTresVariaveis(int OSolucaoTresTresVariaveis[8][8])
{
   for(int i=0;i<8;++i)
   {
      for(int j=0;j<8;++j)
      {
         OSolucaoTresTresVariaveis[i][j] = solucaoTresTresVariaveis[i][j];
      }
   }
}

void Solucao::getSolucaoDoisQuatroVariaveis(int OSolucaoDoisQuatroVariaveis[13][16])
{
   for(int i=0;i<13;++i)
   {
      for(int j=0;j<16;++j)
      {
         OSolucaoDoisQuatroVariaveis[i][j] = solucaoDoisQuatroVariaveis[i][j];
      }
   }
}

void Solucao::getSolucaoTresQuatroVariaveis(int OSolucaoTresQuatroVariaveis[13][16])
{
   for(int i=0;i<14;++i)
   {
      for(int j=0;j<16;++j)
      {
         OSolucaoTresQuatroVariaveis[i][j] = solucaoTresQuatroVariaveis[i][j];
      }
   }
}
