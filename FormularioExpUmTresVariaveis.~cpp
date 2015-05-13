//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FormularioExpUmTresVariaveis.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormExpUmTresVariaveis *FormExpUmTresVariaveis;
//---------------------------------------------------------------------------
__fastcall TFormExpUmTresVariaveis::TFormExpUmTresVariaveis(TComponent* Owner)
   : TForm(Owner)
{
   for (int i = 0; i<6; ++i)
   {
      for (int j = 0; j<8; ++j)
      {
         SolucaoUmTresVariaveis[i][j] = NULL;
      }
   }
}
//---------------------------------------------------------------------------
void TFormExpUmTresVariaveis::setSolucaoUmTresVariaveis(int OSolucaoUmTresVariaveis[6][8])
{
   for (int i = 0; i<3; ++i)
   {
      for (int j = 0; j<8; ++j)
      {
         SolucaoUmTresVariaveis[i][j] = OSolucaoUmTresVariaveis[i][j];
         if (SolucaoUmTresVariaveis[i][j] == 1)
         {
            StringGridExpUmTresVariaveis->Cells[i+1][j+1] = "V";
         }else
          {
            StringGridExpUmTresVariaveis->Cells[i+1][j+1] = "F";
          }
      }
   }
}

void TFormExpUmTresVariaveis::mostrarStringGrid(void)
{
   StringGridExpUmTresVariaveis->Cells[0][1] = "L1";
   StringGridExpUmTresVariaveis->Cells[0][2] = "L2";
   StringGridExpUmTresVariaveis->Cells[0][3] = "L3";
   StringGridExpUmTresVariaveis->Cells[0][4] = "L4";
   StringGridExpUmTresVariaveis->Cells[0][5] = "L5";
   StringGridExpUmTresVariaveis->Cells[0][6] = "L6";
   StringGridExpUmTresVariaveis->Cells[0][7] = "L7";
   StringGridExpUmTresVariaveis->Cells[0][8] = "L8";
   StringGridExpUmTresVariaveis->Cells[1][0] = "P";
   StringGridExpUmTresVariaveis->Cells[2][0] = "Q";
   StringGridExpUmTresVariaveis->Cells[3][0] = "R";
   StringGridExpUmTresVariaveis->Cells[4][0] = "P ^ Q";
   StringGridExpUmTresVariaveis->Cells[5][0] = "~(P ^ Q)";
   StringGridExpUmTresVariaveis->Cells[6][0] = "~(P ^ Q) ^ R";
}
void __fastcall TFormExpUmTresVariaveis::ButtonVerificarClick(
      TObject *Sender)
{
   Status = 3;
   Close();
}
//---------------------------------------------------------------------------

void __fastcall TFormExpUmTresVariaveis::ButtonPraticarClick(
      TObject *Sender)
{
   Status = 2;
   Close();
}
//---------------------------------------------------------------------------


void __fastcall TFormExpUmTresVariaveis::ButtonComecarClick(
      TObject *Sender)
{
   Status = 1;
   Close();
}
//---------------------------------------------------------------------------

void TFormExpUmTresVariaveis::verificar(int OSolucaoUmTresVariaveis[6][8])
{
   for(int i = 3; i<6; ++i)
   {
     for (int j = 0; j<8;++j)
     {
        if(OSolucaoUmTresVariaveis[i][j]==1)
        {
            if (StringGridExpUmTresVariaveis->Cells[i+1][j+1] == "V" || StringGridExpUmTresVariaveis->Cells[i+1][j+1] == "v")
            {
              StringGridExpUmTresVariaveis->Cells[i+1][j+1] = "V";
            }else
            {
               StringGridExpUmTresVariaveis->Cells[i+1][j+1] = " ";
            }
        }else if(OSolucaoUmTresVariaveis[i][j]==0)
         {
            if (StringGridExpUmTresVariaveis->Cells[i+1][j+1] == "F" || StringGridExpUmTresVariaveis->Cells[i+1][j+1] == "f")
            {
              StringGridExpUmTresVariaveis->Cells[i+1][j+1] = "F";
            }else
            {
               StringGridExpUmTresVariaveis->Cells[i+1][j+1] = " ";
            }
         }
     }
   }
}

