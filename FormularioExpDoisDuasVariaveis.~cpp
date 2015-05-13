//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FormularioExpDoisDuasVariaveis.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormExpDoisDuasVariaveis *FormExpDoisDuasVariaveis;
//---------------------------------------------------------------------------
__fastcall TFormExpDoisDuasVariaveis::TFormExpDoisDuasVariaveis(TComponent* Owner)
   : TForm(Owner)
{
      for(int i=0; i<9; ++i)
   {
      for(int j=0; j<4; ++j)
      {
         SolucaoDoisDuasVariaveis[i][j] = NULL;
      }
   }
}
//---------------------------------------------------------------------------
void __fastcall TFormExpDoisDuasVariaveis::ButtonComecarClick(
      TObject *Sender)
{
   Status = 1;
   Close();
}
//---------------------------------------------------------------------------

void __fastcall TFormExpDoisDuasVariaveis::ButtonVerificarClick(
      TObject *Sender)
{
   Status = 3;
   Close();
}
//---------------------------------------------------------------------------

void __fastcall TFormExpDoisDuasVariaveis::ButtonPraticarClick(TObject *Sender)
{
   Status = 2;
   Close();
}
//---------------------------------------------------------------------------

void TFormExpDoisDuasVariaveis::setSolucaoDoisDuasVariaveis(int OSolucaoDoisDuasVariaveis[9][4])
{
   for(int i=0;i<4;++i)
   {
      for(int j=0;j<4;++j)
      {
         SolucaoDoisDuasVariaveis[i][j] = OSolucaoDoisDuasVariaveis[i][j];
         if (SolucaoDoisDuasVariaveis[i][j] == 1)
         {
            StringGridExpDoisDuasVariaveis->Cells[i+1][j+1] = "V";
         }else
          {
            StringGridExpDoisDuasVariaveis->Cells[i+1][j+1] = "F";
          }
      }
   }
}

void TFormExpDoisDuasVariaveis::verificar(int OSolucaoDoisDuasVariaveis[9][4])
{
  for(int i = 4; i<9; ++i)
   {
     for (int j = 0; j<4;++j)
     {
        if(OSolucaoDoisDuasVariaveis[i][j]==1)
        {
            if (StringGridExpDoisDuasVariaveis->Cells[i+1][j+1] == "V" || StringGridExpDoisDuasVariaveis->Cells[i+1][j+1] == "v")
            {
              StringGridExpDoisDuasVariaveis->Cells[i+1][j+1] = "V";
            }else
            {
               StringGridExpDoisDuasVariaveis->Cells[i+1][j+1] = " ";
            }
        }else if(OSolucaoDoisDuasVariaveis[i][j]==0)
         {
            if (StringGridExpDoisDuasVariaveis->Cells[i+1][j+1] == "F" || StringGridExpDoisDuasVariaveis->Cells[i+1][j+1] == "f")
            {
              StringGridExpDoisDuasVariaveis->Cells[i+1][j+1] = "F";
            }else
            {
               StringGridExpDoisDuasVariaveis->Cells[i+1][j+1] = " ";
            }
         }
     }
   }
}

void TFormExpDoisDuasVariaveis::mostrarStringGrid(void)
{
   StringGridExpDoisDuasVariaveis->Cells[0][1] = "L1";
   StringGridExpDoisDuasVariaveis->Cells[0][2] = "L2";
   StringGridExpDoisDuasVariaveis->Cells[0][3] = "L3";
   StringGridExpDoisDuasVariaveis->Cells[0][4] = "L4";
   StringGridExpDoisDuasVariaveis->Cells[0][5] = "L5";
   StringGridExpDoisDuasVariaveis->Cells[0][6] = "L6";
   StringGridExpDoisDuasVariaveis->Cells[0][7] = "L7";
   StringGridExpDoisDuasVariaveis->Cells[0][8] = "L8";
   StringGridExpDoisDuasVariaveis->Cells[1][0] = "P";
   StringGridExpDoisDuasVariaveis->Cells[2][0] = "Q";
   StringGridExpDoisDuasVariaveis->Cells[3][0] = "~Q";
   StringGridExpDoisDuasVariaveis->Cells[4][0] = "~P";
   StringGridExpDoisDuasVariaveis->Cells[5][0] = "P ^ Q";
   StringGridExpDoisDuasVariaveis->Cells[6][0] = "P ^ ~Q";
   StringGridExpDoisDuasVariaveis->Cells[7][0] = "(P ^ Q) v (P ^ ~Q)";
   StringGridExpDoisDuasVariaveis->Cells[8][0] = "~P ^ Q";
   StringGridExpDoisDuasVariaveis->Cells[9][0] = "(P ^ Q) v (P ^ ~Q) V (~P ^ Q)";

}

