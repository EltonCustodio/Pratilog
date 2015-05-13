//---------------------------------------------------------------------------

#pragma hdrstop

#include "Resolve.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Resolve::Resolve()
{
   for(int i=0; i<4; ++i)
   {
      for(int j=0; j<4;++j)
      {
         SolucaoUmDuasVariaveis[i][j] = 0;
      }
   }
}

Resolve::~Resolve()
{
}

void Resolve::resolveSolucaUmDuasVariaveis(int solucaoUm[4][4])
{


    for (int j=0;j<4;++j)
            {
              solucaoUm[3][j] = (solucaoUm[0][j] * solucaoUm[2][j]);
            }

    for(int i=0; i<4; ++i)
   {
      for(int j=0; j<4;++j)
      {
         SolucaoUmDuasVariaveis[i][j] = solucaoUm[i][j];
      }
   }

}


void Resolve::getSolucaoUmDuasVariaveis(int SolucaoUmDuasVariaveis[4][4])
{
   for(int i=0; i<4; ++i)
   {
      for(int j=0; j<4;++j)
      {
         SolucaoUmDuasVariaveis[i][j] = SolucaoUmDuasVariaveis[i][j];
      }
   }

}

void Resolve::resolveSolucaTresDuasVariaveis(double solucaoTresDuasVariaveis[7][4])
{
   // 1-(p^q) v
   for (int j=0;j<4;++j)
   {
      solucaoTresDuasVariaveis[4][j] = solucaoTresDuasVariaveis[0][j] * solucaoTresDuasVariaveis[1][j];
   }
   // 2-(~p v ~q)
   for (int j=0;j<4;++j)
   {

      if (solucaoTresDuasVariaveis[3][j] == 1 && solucaoTresDuasVariaveis[2][j] ==1)
      {
         solucaoTresDuasVariaveis[5][j] = 1;
      }else
       {
         solucaoTresDuasVariaveis[5][j] = 0;
       }

   }
   // 3-(1 OU 2)
   for (int j=0;j<4;++j)
   {
      if (solucaoTresDuasVariaveis[4][j]==1 && solucaoTresDuasVariaveis[5][j]==1 || solucaoTresDuasVariaveis[4][j]==0 && solucaoTresDuasVariaveis[5][j]==1 ||
          solucaoTresDuasVariaveis[4][j]==1 && solucaoTresDuasVariaveis[5][j]==0)
      {
         solucaoTresDuasVariaveis[6][j] = 1;
      }else
       {
         solucaoTresDuasVariaveis[6][j] = 0;
       }
   }
}

void Resolve::resolveSolucaDoisDuasVariaveis(double solucaoDois[9][4])
{
   // 1 - (p^q)
   for (int j=0;j<4;++j)
   {
      solucaoDois[4][j] = solucaoDois[0][j] * solucaoDois[1][j];
   }

   // 2 - (p^~q)
   for (int j=0;j<4;++j)
   {
      solucaoDois[5][j] = solucaoDois[0][j] * solucaoDois[2][j];
   }

   // 3 - (1 OU 2)
   for (int j=0;j<4;++j)
   {
      solucaoDois[6][j] = solucaoDois[4][j] + solucaoDois[5][j];
   }

   // 4 - (~p^q)
   for (int j=0;j<4;++j)
   {
      solucaoDois[7][j] = solucaoDois[3][j] * solucaoDois[1][j];
   }

   // 5- (3 OU 4)
   for (int j=0;j<4;++j)
   {
      solucaoDois[8][j] = solucaoDois[6][j] + solucaoDois[7][j];
   }
}

void Resolve::resolveSolucaoUmTresVariaveis(int solucaoUmTresVariaveis[6][8])
{
   // 1- (p^q)
   for (int j=0;j<8;++j)
   {
      solucaoUmTresVariaveis[3][j] = solucaoUmTresVariaveis[0][j] * solucaoUmTresVariaveis[1][j];
   }

   // 2 - (~1)
   for (int j=0;j<8;++j)
   {
      if (solucaoUmTresVariaveis[3][j]==1)
      {
         solucaoUmTresVariaveis[4][j]=0;
      }else
       {
         solucaoUmTresVariaveis[4][j] =1;
       }
   }

   // 3 - (2 E R)
    for (int j=0;j<8;++j)
    {
      solucaoUmTresVariaveis[5][j] = solucaoUmTresVariaveis[4][j] * solucaoUmTresVariaveis[2][j];
    }
}

void Resolve::resolveSolucaoDoisTresVariaveis(double solucaoDoisTresVariaveis[8][8])
{
   for (int j=0;j<8;++j)
   {
      solucaoDoisTresVariaveis[4][j] = solucaoDoisTresVariaveis[0][j] * solucaoDoisTresVariaveis[3][j];
   }

   for (int j=0;j<8;++j)
   {
      solucaoDoisTresVariaveis[5][j] = solucaoDoisTresVariaveis[4][j] * solucaoDoisTresVariaveis[2][j];
   }

   for (int j=0;j<8;++j)
   {
      if (solucaoDoisTresVariaveis[5][j]==1)
      {
         solucaoDoisTresVariaveis[6][j] = 0;
      }else
       {
         solucaoDoisTresVariaveis[6][j]=1;
       }
   }

    for (int j=0;j<8;++j)
   {
      if (solucaoDoisTresVariaveis[6][j]==1 && solucaoDoisTresVariaveis[3][j]==0)
      {
         solucaoDoisTresVariaveis[7][j] = 0;
      }else
         if (solucaoDoisTresVariaveis[6][j]==0 && solucaoDoisTresVariaveis[3][j]==1 || solucaoDoisTresVariaveis[6][j]==1 && solucaoDoisTresVariaveis[3][j]==1)
         {
            solucaoDoisTresVariaveis[7][j] = 1;
         }


   }
}

void Resolve::resolveSolucaoTresTresVariaveis(double solucaoTresTresVariaveis[8][8])
{
   // 1-((p^q)-> r) <-> (p->(q->r))
   for (int j=0;j<8;++j)
   {
      solucaoTresTresVariaveis[3][j] =  solucaoTresTresVariaveis[0][j] * solucaoTresTresVariaveis[1][j];
   }

   // 2- 1->r
   for (int j=0;j<8;++j)
   {
      if (solucaoTresTresVariaveis[3][j]==0 && solucaoTresTresVariaveis[2][j]==1 ||
          solucaoTresTresVariaveis[3][j]==1 && solucaoTresTresVariaveis[2][j]==1 || solucaoTresTresVariaveis[3][j] == solucaoTresTresVariaveis[2][j])
      {
         solucaoTresTresVariaveis[4][j] = 1;
      }else
       {
         solucaoTresTresVariaveis[4][j] = 0;
       }
   }

   // 3- (q->r)

   for (int j=0;j<8;++j)
   {
      if (solucaoTresTresVariaveis[1][j]==0 && solucaoTresTresVariaveis[2][j]==1 ||
          solucaoTresTresVariaveis[1][j]==1 && solucaoTresTresVariaveis[2][j]==1 || solucaoTresTresVariaveis[1][j] == solucaoTresTresVariaveis[2][j])
      {
         solucaoTresTresVariaveis[5][j] = 1;
      }else
       {
         solucaoTresTresVariaveis[5][j] = 0;
       }
   }

   // 4- p->3
   for (int j=0;j<8;++j)
   {
      if (solucaoTresTresVariaveis[0][j]==0 && solucaoTresTresVariaveis[5][j]==1 ||
          solucaoTresTresVariaveis[0][j]==1 && solucaoTresTresVariaveis[5][j]==1 || solucaoTresTresVariaveis[0][j] == solucaoTresTresVariaveis[5][j])
      {
         solucaoTresTresVariaveis[6][j] = 1;
      }else
       {
         solucaoTresTresVariaveis[6][j] = 0;
       }
   }

   // 5- 2<->4

   for (int j=0;j<8;++j)
   {
      if (solucaoTresTresVariaveis[4][j] == solucaoTresTresVariaveis[6][j])
      {
         solucaoTresTresVariaveis[7][j] = 1;
      }else
       {
         solucaoTresTresVariaveis[7][j] = 0;
       }
   }

}

void Resolve::resolveSolucaoUmQuatroVariaveis(int solucaoUmQuatroVariaveis[16][16])
{
  // 1- (q -> ~s)
  for (int j=0;j<16;++j)
  {
    if (solucaoUmQuatroVariaveis[1][j] == 0 && solucaoUmQuatroVariaveis[7][j] ==1 ||
        solucaoUmQuatroVariaveis[1][j] == 1 && solucaoUmQuatroVariaveis[7][j] ==1 ||
        solucaoUmQuatroVariaveis[1][j] == 0 && solucaoUmQuatroVariaveis[7][j] ==0 )
    {
      solucaoUmQuatroVariaveis[8][j] =1;
    }else if (solucaoUmQuatroVariaveis[1][j] == 1 && solucaoUmQuatroVariaveis[7][j] ==0)
     {
       solucaoUmQuatroVariaveis[8][j]=0;
     }

  }

  // 2 - (~q^p)
  for (int j=0;j<16;++j)
  {
    solucaoUmQuatroVariaveis[9][j] = solucaoUmQuatroVariaveis[5][j] * solucaoUmQuatroVariaveis[0][j];

  }

  // 3- 1 -> 2
  for (int j=0;j<16;++j)
  {
    if (solucaoUmQuatroVariaveis[8][j] == 0 && solucaoUmQuatroVariaveis[9][j] ==1 ||
        solucaoUmQuatroVariaveis[8][j] == 1 && solucaoUmQuatroVariaveis[9][j] ==1 ||
        solucaoUmQuatroVariaveis[8][j] == 0 && solucaoUmQuatroVariaveis[9][j] ==0 )
    {
      solucaoUmQuatroVariaveis[10][j] =1;
    }else if (solucaoUmQuatroVariaveis[8][j] == 1 && solucaoUmQuatroVariaveis[9][j] ==0)
     {
       solucaoUmQuatroVariaveis[10][j]=0;
     }

  }

  //  4- (p^~r)
  for (int j=0;j<16;++j)
   {
     solucaoUmQuatroVariaveis[11][j] = solucaoUmQuatroVariaveis[0][j] * solucaoUmQuatroVariaveis[6][j];
   }

   // 5- 4 v 3
    for (int j=0;j<16;++j)
    {
      if (solucaoUmQuatroVariaveis[11][j] ==0 && solucaoUmQuatroVariaveis[10][j]==0)
      {
        solucaoUmQuatroVariaveis[12][j] = 0;
      }else
       {
         solucaoUmQuatroVariaveis[12][j] = 1;
       }
    }

    // 6 - (r v ~p)
    for (int j=0;j<16;++j)
    {
      if (solucaoUmQuatroVariaveis[2][j] ==0 && solucaoUmQuatroVariaveis[4][j]==0)
      {
        solucaoUmQuatroVariaveis[13][j] = 0;
      }else
       {
         solucaoUmQuatroVariaveis[13][j] = 1;
       }
    }

   // 7 - 5 ^ 6

     for (int j=0;j<16;++j)
   {
     solucaoUmQuatroVariaveis[14][j] = solucaoUmQuatroVariaveis[12][j] * solucaoUmQuatroVariaveis[13][j];
   }

   // 8 - 7 - > s
   for (int j=0;j<16;++j)
  {
    if (solucaoUmQuatroVariaveis[14][j] == 0 && solucaoUmQuatroVariaveis[3][j] ==1 ||
        solucaoUmQuatroVariaveis[14][j] == 1 && solucaoUmQuatroVariaveis[3][j] ==1 ||
        solucaoUmQuatroVariaveis[14][j] == 0 && solucaoUmQuatroVariaveis[3][j] ==0 )
    {
      solucaoUmQuatroVariaveis[15][j] =1;
    }else if (solucaoUmQuatroVariaveis[14][j] == 1 && solucaoUmQuatroVariaveis[3][j] ==0)
     {
       solucaoUmQuatroVariaveis[15][j]=0;
     }

  }
}

void Resolve::resolveSolucaoDoisQuatroVariaveis(double solucaoDoisQuatroVariaveis[13][16])
{
   // 1 - (p^~q)
   for (int j=0;j<16;++j)
  {
      solucaoDoisQuatroVariaveis[6][j] = solucaoDoisQuatroVariaveis[0][j] * solucaoDoisQuatroVariaveis[5][j];

  }

  // 2 - (q v r)
      for (int j=0;j<16;++j)
    {
      if (solucaoDoisQuatroVariaveis[1][j] ==0 && solucaoDoisQuatroVariaveis[2][j]==0)
      {
        solucaoDoisQuatroVariaveis[7][j] = 0;
      }else
       {
         solucaoDoisQuatroVariaveis[7][j] = 1;
       }
    }

    // 3 - 1 -> 2
    for (int j=0;j<16;++j)
  {
    if (solucaoDoisQuatroVariaveis[6][j] == 0 && solucaoDoisQuatroVariaveis[7][j] ==1 ||
        solucaoDoisQuatroVariaveis[6][j] == 1 && solucaoDoisQuatroVariaveis[7][j] ==1 ||
        solucaoDoisQuatroVariaveis[6][j] == 0 && solucaoDoisQuatroVariaveis[7][j] ==0 )
    {
      solucaoDoisQuatroVariaveis[8][j] =1;
    }else if (solucaoDoisQuatroVariaveis[6][j] == 1 && solucaoDoisQuatroVariaveis[7][j] ==0)
     {
       solucaoDoisQuatroVariaveis[8][j]=0;
     }

  }

  // 4- (~p v s)
  for (int j=0;j<16;++j)
    {
      if (solucaoDoisQuatroVariaveis[4][j] ==0 && solucaoDoisQuatroVariaveis[3][j]==0)
      {
        solucaoDoisQuatroVariaveis[9][j] = 0;
      }else
       {
         solucaoDoisQuatroVariaveis[9][j] = 1;
       }
    }

    // 5 - (p->r)
    for (int j=0;j<16;++j)
  {
    if (solucaoDoisQuatroVariaveis[0][j] == 0 && solucaoDoisQuatroVariaveis[2][j] ==1 ||
        solucaoDoisQuatroVariaveis[0][j] == 1 && solucaoDoisQuatroVariaveis[2][j] ==1 ||
        solucaoDoisQuatroVariaveis[0][j] == 0 && solucaoDoisQuatroVariaveis[2][j] ==0 )
    {
      solucaoDoisQuatroVariaveis[10][j] =1;
    }else if (solucaoDoisQuatroVariaveis[0][j] == 1 && solucaoDoisQuatroVariaveis[2][j] ==0)
     {
       solucaoDoisQuatroVariaveis[10][j]=0;
     }

  }

  // 6- 4 ^ 5
  for (int j=0;j<16;++j)
  {
      solucaoDoisQuatroVariaveis[11][j] = solucaoDoisQuatroVariaveis[9][j] * solucaoDoisQuatroVariaveis[10][j];

  }

  //7 - 3 <-> 6
  for (int j=0;j<16;++j)
  {
    if (solucaoDoisQuatroVariaveis[8][j] == solucaoDoisQuatroVariaveis[11][j])
    {
      solucaoDoisQuatroVariaveis[12][j] = 1;
    }else
     {
       solucaoDoisQuatroVariaveis[12][j]=0;
     }
  }
}

void Resolve::resolveSolucaoTresQuatroVariaveis(double SolucaoTresQuatroVariaveis[14][16])
{
   //1 - (~p^r)
   for (int j=0;j<16;++j)
   {
      SolucaoTresQuatroVariaveis[7][j] = SolucaoTresQuatroVariaveis[3][j] * SolucaoTresQuatroVariaveis[2][j];
   }

   //2 - (q^~s)
   for (int j=0;j<16;++j)
   {
      SolucaoTresQuatroVariaveis[8][j] = SolucaoTresQuatroVariaveis[1][j] * SolucaoTresQuatroVariaveis[6][j];
   }

   // 3 - 1 v 2
   for (int j=0;j<16;++j)
    {
      if (SolucaoTresQuatroVariaveis[7][j] ==0 && SolucaoTresQuatroVariaveis[8][j]==0)
      {
        SolucaoTresQuatroVariaveis[9][j] = 0;
      }else
       {
         SolucaoTresQuatroVariaveis[9][j] = 1;
       }
    }

    // 4 - (~r v p)
    for (int j=0;j<16;++j)
    {
      if (SolucaoTresQuatroVariaveis[5][j] ==0 && SolucaoTresQuatroVariaveis[0][j]==0)
      {
        SolucaoTresQuatroVariaveis[10][j] = 0;
      }else
       {
         SolucaoTresQuatroVariaveis[10][j] = 1;
       }
    }

    //5 - (~q v r)
    for (int j=0;j<16;++j)
    {
      if (SolucaoTresQuatroVariaveis[4][j] ==0 && SolucaoTresQuatroVariaveis[2][j]==0)
      {
        SolucaoTresQuatroVariaveis[11][j] = 0;
      }else
       {
         SolucaoTresQuatroVariaveis[11][j] = 1;
       }
    }

    //6 - 4 ^ 5
    for (int j=0;j<16;++j)
   {
      SolucaoTresQuatroVariaveis[12][j] = SolucaoTresQuatroVariaveis[10][j] * SolucaoTresQuatroVariaveis[11][j];
   }

   //7 - 3 -> 6
   for (int j=0;j<16;++j)
   {
    if (SolucaoTresQuatroVariaveis[9][j] == 0 && SolucaoTresQuatroVariaveis[12][j] ==1 ||
        SolucaoTresQuatroVariaveis[9][j] == 1 && SolucaoTresQuatroVariaveis[12][j] ==1 ||
        SolucaoTresQuatroVariaveis[9][j] == 0 && SolucaoTresQuatroVariaveis[12][j] ==0 )
    {
      SolucaoTresQuatroVariaveis[13][j] =1;
    }else if (SolucaoTresQuatroVariaveis[0][j] == 1 && SolucaoTresQuatroVariaveis[2][j] ==0)
     {
      SolucaoTresQuatroVariaveis[13][j]=0;
     }

   }
}
