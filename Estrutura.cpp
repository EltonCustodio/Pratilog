//---------------------------------------------------------------------------

#pragma hdrstop

#include "Estrutura.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Estrutura::Estrutura()
{
    for(int i=0;i<4;++i)
   {
      for(int j=0;j<4;++j)
      {
        solucao[i][j] = NULL;
      }
   }

   for(int i=0;i<6;++i)
   {
      for(int j=0;j<8;++j)
      {
        vetorTresVariaveis[i][j] = NULL;
      }
   }

   for(int i=0;i<8;++i)
   {
      for(int j=0;j<16;++j)
      {
        vetorQuatroVariaveis[i][j] = NULL;
      }
   }
}

Estrutura::~Estrutura()
{
}

void Estrutura::estruturaDuasVariaveis()
{
   // P
   for (int j=0;j<4;++j)
   {
    if(j<2)
    {
    solucao[0][j] = 1;
    }else
     {
      solucao[0][j] = 0;
     }
   }
   //Q
   for (int j=0;j<4;++j)
   {
    if (j==0 || j==2)
    {
     solucao[1][j] = 1;
    }else
     {
      solucao[1][j] = 0;
     }
   }
   //~Q
   for (int j=0;j<4;++j)
   {
    if (solucao[1][j]==1)
    {
      solucao[2][j] =0;
    }else
     {
      solucao[2][j] =1;
     }
   }
   //~P
   for (int j=0;j<4;++j)
   {
    if (solucao[0][j]==1)
    {
      solucao[3][j] =0;
    }else
     {
      solucao[3][j] =1;
     }
   }



}

void Estrutura::getSolucaoUmDuasVariaveis(int solucaoUm[4][4])
{
   for(int i=0;i<3;++i)
   {
      for(int j=0;j<4;++j)
      {
        solucaoUm[i][j] = solucao[i][j];
      }
   }

}

void Estrutura::getSolucaoDoisDuasVariaveis(double solucaoDois[9][4])
{
   for(int i=0;i<4;++i)
   {
      for(int j=0;j<4;++j)
      {
        solucaoDois[i][j] = solucao[i][j];
      }
   }
}

void Estrutura::getSolucaoTresDuasVariaveis(double solucaoTresDuasVariaveis[7][4])
{
   for(int i=0;i<4;++i)
   {
      for(int j=0;j<4;++j)
      {
        solucaoTresDuasVariaveis[i][j] = solucao[i][j];
      }
   }
}

void Estrutura::estruturaTresVariaveis()
{
  // P
   for (int j=0;j<8;++j)
   {
    if(j<4)
    {
    vetorTresVariaveis[0][j] = 1;
    }else
     {
      vetorTresVariaveis[0][j] = 0;
     }
   }
   //Q
   for (int j=0;j<8;++j)
   {
    if(j==0 || j==1 || j==4 || j==5)
    {
    vetorTresVariaveis[1][j] = 1;
    }else
     {
      vetorTresVariaveis[1][j] = 0;
     }
   }
   //R
   for (int j=0;j<8;++j)
   {
    if (j%2==0)
    {
     vetorTresVariaveis[2][j] = 1;
    }else
     {
      vetorTresVariaveis[2][j] = 0;
     }
    }
    //~P
    for (int j=0;j<8;++j)
   {
    if (vetorTresVariaveis[0][j]==1)
    {
      vetorTresVariaveis[3][j] =0;
    }else
     {
      vetorTresVariaveis[3][j] =1;
     }
   }
   //~Q
    for (int j=0;j<8;++j)
   {
    if (vetorTresVariaveis[1][j]==1)
    {
      vetorTresVariaveis[4][j] =0;
    }else
     {
      vetorTresVariaveis[4][j] =1;
     }
   }
   //~R
    for (int j=0;j<8;++j)
   {
    if (vetorTresVariaveis[2][j]==1)
    {
      vetorTresVariaveis[5][j] =0;
    }else
     {
      vetorTresVariaveis[5][j] =1;
     }
   }

}

void Estrutura::getSolucaoUmTresVariaveis(int solucaoUmTresVariaveis[6][8])
{
   for(int i=0;i<3;++i)
   {
      for(int j=0;j<8;++j)
      {
        solucaoUmTresVariaveis[i][j] = vetorTresVariaveis[i][j];
      }
   }
}

void Estrutura::getSolucaoDoisTresVariaveis(double solucaoDoisTresVariaveis[8][8])
{
   for(int i=0;i<3;++i)
   {
      for(int j=0;j<8;++j)
      {
        solucaoDoisTresVariaveis[i][j] = vetorTresVariaveis[i][j];
      }
   }

   for(int j=0;j<8;++j)
      {
        solucaoDoisTresVariaveis[3][j] = vetorTresVariaveis[4][j];
      }
}

void Estrutura::getSolucaoTresTresVariaveis(double solucaoTresTresVariaveis[8][8])
{
   for(int i=0;i<3;++i)
   {
      for(int j=0;j<8;++j)
      {
        solucaoTresTresVariaveis[i][j] = vetorTresVariaveis[i][j];
      }
   }
}

void Estrutura::estruturaQuatroVariaveis()
{
  //P
  for (int j=0; j<16; ++j)
  {
    if(j<8)
    {
     vetorQuatroVariaveis[0][j] = 1;
    }else
     {
      vetorQuatroVariaveis[0][j] = 0;
     }
   }

   //Q
   for (int j=0; j<16; ++j)
  {
    if (j<4 || j>7 && j<12)
    {
      vetorQuatroVariaveis[1][j] = 1;
    }else
     {
      vetorQuatroVariaveis[1][j] = 0;
     }
  }
     //R
     for (int j=0; j<16; ++j)
     {
      if (j==0 || j==1 || j==4 || j==5 || j==8 || j==9 || j==12 || j==13)
      {
         vetorQuatroVariaveis[2][j] = 1;
      }else
       {
         vetorQuatroVariaveis[2][j] = 0;
       }
      }

     //S
     for (int j=0; j<16; ++j)
     {
       if (j%2==0)
       {
         vetorQuatroVariaveis[3][j] = 1;
       }else
        {
          vetorQuatroVariaveis[3][j] = 0;
        }
     }

     //~P
     for (int j=0; j<16; ++j)
     {
      if (vetorQuatroVariaveis[0][j]==1)
      {
        vetorQuatroVariaveis[4][j]=0;
      }else
       {
        vetorQuatroVariaveis[4][j]=1;
       }
     }

     //~Q
     for (int j=0; j<16; ++j)
     {
      if (vetorQuatroVariaveis[1][j]==1)
      {
        vetorQuatroVariaveis[5][j]=0;
      }else
       {
        vetorQuatroVariaveis[5][j]=1;
       }
     }

     //~R
     for (int j=0; j<16; ++j)
     {
      if (vetorQuatroVariaveis[2][j]==1)
      {
        vetorQuatroVariaveis[6][j]=0;
      }else
       {
        vetorQuatroVariaveis[6][j]=1;
       }
     }

     //~S
     for (int j=0; j<16; ++j)
     {
      if (vetorQuatroVariaveis[3][j]==1)
      {
        vetorQuatroVariaveis[7][j]=0;
      }else
       {
        vetorQuatroVariaveis[7][j]=1;
       }
     }

}

void Estrutura::getSolucaoUmQuatroVariaveis(int solucaoUmQuatroVariaveis[16][16])
{
   //P
   for (int j=0; j<16; ++j)
   {
     solucaoUmQuatroVariaveis[0][j] = vetorQuatroVariaveis[0][j];
   }

   //Q
   for (int j=0; j<16; ++j)
   {
     solucaoUmQuatroVariaveis[1][j] = vetorQuatroVariaveis[1][j];
   }

   //R

   for (int j=0; j<16; ++j)
   {
     solucaoUmQuatroVariaveis[2][j] = vetorQuatroVariaveis[2][j];
   }

   //S

   for (int j=0; j<16; ++j)
   {
     solucaoUmQuatroVariaveis[3][j] = vetorQuatroVariaveis[3][j];
   }

   //~P
    for (int j=0; j<16; ++j)
   {
     solucaoUmQuatroVariaveis[4][j] = vetorQuatroVariaveis[4][j];
   }

   //~Q
   for (int j=0; j<16; ++j)
   {
     solucaoUmQuatroVariaveis[5][j] = vetorQuatroVariaveis[5][j];
   }

   //~R
   for (int j=0; j<16; ++j)
   {
     solucaoUmQuatroVariaveis[6][j] = vetorQuatroVariaveis[6][j];
   }

   //~S
   for (int j=0; j<16; ++j)
   {
     solucaoUmQuatroVariaveis[7][j] = vetorQuatroVariaveis[7][j];
   }


}

void Estrutura::getSolucaoDoisQuatroVariaveis(double solucaoDoisQuatroVariaveis[13][16])
{
  //P
   for (int j=0; j<16; ++j)
   {
     solucaoDoisQuatroVariaveis[0][j] = vetorQuatroVariaveis[0][j];
   }

   //Q
   for (int j=0; j<16; ++j)
   {
     solucaoDoisQuatroVariaveis[1][j] = vetorQuatroVariaveis[1][j];
   }

   //R

   for (int j=0; j<16; ++j)
   {
     solucaoDoisQuatroVariaveis[2][j] = vetorQuatroVariaveis[2][j];
   }

   //S

   for (int j=0; j<16; ++j)
   {
     solucaoDoisQuatroVariaveis[3][j] = vetorQuatroVariaveis[3][j];
   }

   //~P
    for (int j=0; j<16; ++j)
   {
     solucaoDoisQuatroVariaveis[4][j] = vetorQuatroVariaveis[4][j];
   }

   //~Q
   for (int j=0; j<16; ++j)
   {
     solucaoDoisQuatroVariaveis[5][j] = vetorQuatroVariaveis[5][j];
   }
}

void Estrutura::getSolucaoTresQuatroVariaveis(double solucaoTresQuatroVariaveis[14][16])
{
   //P
   for (int j=0; j<16; ++j)
   {
      solucaoTresQuatroVariaveis[0][j] = vetorQuatroVariaveis[0][j];
   }

   //Q
   for (int j=0; j<16; ++j)
   {
      solucaoTresQuatroVariaveis[1][j] = vetorQuatroVariaveis[1][j];
   }

   //R
   for (int j=0; j<16; ++j)
   {
      solucaoTresQuatroVariaveis[2][j] = vetorQuatroVariaveis[2][j];
   }

   //~P
   for (int j=0; j<16; ++j)
   {
      solucaoTresQuatroVariaveis[3][j] = vetorQuatroVariaveis[4][j];
   }

   //~Q
   for (int j=0; j<16; ++j)
   {
      solucaoTresQuatroVariaveis[4][j] = vetorQuatroVariaveis[5][j];
   }

   //~R
   for (int j=0; j<16; ++j)
   {
      solucaoTresQuatroVariaveis[5][j] = vetorQuatroVariaveis[6][j];
   }

   //~S
   for (int j=0; j<16; ++j)
   {
      solucaoTresQuatroVariaveis[6][j] = vetorQuatroVariaveis[7][j];
   }

}
