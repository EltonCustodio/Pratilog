//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FormularioExpTresTresVariaveis.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormExpTresTresVariaveis *FormExpTresTresVariaveis;
//---------------------------------------------------------------------------
__fastcall TFormExpTresTresVariaveis::TFormExpTresTresVariaveis(TComponent* Owner)
   : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormExpTresTresVariaveis::ButtonComecarClick(
      TObject *Sender)
{
   Status = 1;
   Close();
}
//---------------------------------------------------------------------------
void __fastcall TFormExpTresTresVariaveis::ButtonVerificarClick(
      TObject *Sender)
{
   Status = 3;
   Close();
}
//---------------------------------------------------------------------------
void __fastcall TFormExpTresTresVariaveis::ButtonPraticarClick(
      TObject *Sender)
{
   Status = 2;
   Close();
}
//---------------------------------------------------------------------------

void TFormExpTresTresVariaveis::verificar(int OSolucaoTresTresVariaveis[8][8])
{
   for(int i = 3; i<8; ++i)
   {
     for (int j = 0; j<8;++j)
     {
        if(OSolucaoTresTresVariaveis[i][j]==1)
        {
            if (StringGridExpTresTresVariaveis->Cells[i+1][j+1] == "V" || StringGridExpTresTresVariaveis->Cells[i+1][j+1] == "v")
            {
              StringGridExpTresTresVariaveis->Cells[i+1][j+1] = "V";
            }else
            {
               StringGridExpTresTresVariaveis->Cells[i+1][j+1] = " ";
            }
        }else if(OSolucaoTresTresVariaveis[i][j]==0)
         {
            if (StringGridExpTresTresVariaveis->Cells[i+1][j+1] == "F" || StringGridExpTresTresVariaveis->Cells[i+1][j+1] == "f")
            {
              StringGridExpTresTresVariaveis->Cells[i+1][j+1] = "F";
            }else
            {
               StringGridExpTresTresVariaveis->Cells[i+1][j+1] = " ";
            }
         }
     }
   }
}

void TFormExpTresTresVariaveis::setSolucaoTresTresVariaveis(int OSolucaoTresTresVariaveis[8][8])
{
   for(int i=0;i<3;++i)
   {
      for(int j=0;j<8;++j)
      {
         SolucaoTresTresVariaveis[i][j] = OSolucaoTresTresVariaveis[i][j];
         if (SolucaoTresTresVariaveis[i][j] == 1)
         {
            StringGridExpTresTresVariaveis->Cells[i+1][j+1] = "V";
         }else
          {
            StringGridExpTresTresVariaveis->Cells[i+1][j+1] = "F";
          }
      }
   }
}

void TFormExpTresTresVariaveis::mostrarStringGrid(void)
{
   StringGridExpTresTresVariaveis->Cells[0][1] = "L1";
   StringGridExpTresTresVariaveis->Cells[0][2] = "L2";
   StringGridExpTresTresVariaveis->Cells[0][3] = "L3";
   StringGridExpTresTresVariaveis->Cells[0][4] = "L4";
   StringGridExpTresTresVariaveis->Cells[0][5] = "L5";
   StringGridExpTresTresVariaveis->Cells[0][6] = "L6";
   StringGridExpTresTresVariaveis->Cells[0][7] = "L7";
   StringGridExpTresTresVariaveis->Cells[0][8] = "L8";
   StringGridExpTresTresVariaveis->Cells[1][0] = "P";
   StringGridExpTresTresVariaveis->Cells[2][0] = "Q";
   StringGridExpTresTresVariaveis->Cells[3][0] = "R";
   StringGridExpTresTresVariaveis->Cells[4][0] = "(P ^ Q)";
   StringGridExpTresTresVariaveis->Cells[5][0] = "(P ^ Q) -> R)";
   StringGridExpTresTresVariaveis->Cells[6][0] = "(Q -> R)";
   StringGridExpTresTresVariaveis->Cells[7][0] = "(P -> (Q -> R))";
   StringGridExpTresTresVariaveis->Cells[8][0] = "((P ^ Q) -> R) <-> (P -> (Q -> R))";
}
