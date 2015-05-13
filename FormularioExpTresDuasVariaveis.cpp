//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FormularioExpTresDuasVariaveis.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormExpTresDuasVariaveis *FormExpTresDuasVariaveis;
//---------------------------------------------------------------------------
__fastcall TFormExpTresDuasVariaveis::TFormExpTresDuasVariaveis(TComponent* Owner)
   : TForm(Owner)
{
   for(int i=0; i<7; ++i)
   {
      for(int j=0; j<4; ++j)
      {
         SolucaoTresDuasVariaveis[i][j] = NULL;
      }
   }
}
//---------------------------------------------------------------------------

void TFormExpTresDuasVariaveis::setSolucaoTresDuasVariaveis(int OSolucaoTresDuasVariaveis[7][4])
{
   for(int i=0;i<4;++i)
   {
      for(int j=0;j<4;++j)
      {
         SolucaoTresDuasVariaveis[i][j] = OSolucaoTresDuasVariaveis[i][j];
         if (SolucaoTresDuasVariaveis[i][j] == 1)
         {
            StringGridExpTresDuasVariaveis->Cells[i+1][j+1] = "V";
         }else
          {
            StringGridExpTresDuasVariaveis->Cells[i+1][j+1] = "F";
          }
      }
   }
}

void TFormExpTresDuasVariaveis::verificar(int OSolucaoTresDuasVariaveis[7][4])
{
   for(int i = 4; i<7; ++i)
   {
     for (int j = 0; j<4;++j)
     {
        if(OSolucaoTresDuasVariaveis[i][j]==1)
        {
            if (StringGridExpTresDuasVariaveis->Cells[i+1][j+1] == "V" || StringGridExpTresDuasVariaveis->Cells[i+1][j+1] == "v")
            {
              StringGridExpTresDuasVariaveis->Cells[i+1][j+1] = "V";
            }else
            {
               StringGridExpTresDuasVariaveis->Cells[i+1][j+1] = " ";
            }
        }else if(OSolucaoTresDuasVariaveis[i][j]==0)
         {
            if (StringGridExpTresDuasVariaveis->Cells[i+1][j+1] == "F" || StringGridExpTresDuasVariaveis->Cells[i+1][j+1] == "f")
            {
              StringGridExpTresDuasVariaveis->Cells[i+1][j+1] = "F";
            }else
            {
               StringGridExpTresDuasVariaveis->Cells[i+1][j+1] = " ";
            }
         }
     }
   }
}

void TFormExpTresDuasVariaveis::mostrarStringGrid(void)
{
   StringGridExpTresDuasVariaveis->Cells[0][1] = "L1";
   StringGridExpTresDuasVariaveis->Cells[0][2] = "L2";
   StringGridExpTresDuasVariaveis->Cells[0][3] = "L3";
   StringGridExpTresDuasVariaveis->Cells[0][4] = "L4";
   StringGridExpTresDuasVariaveis->Cells[0][5] = "L5";
   StringGridExpTresDuasVariaveis->Cells[0][6] = "L6";
   StringGridExpTresDuasVariaveis->Cells[0][7] = "L7";
   StringGridExpTresDuasVariaveis->Cells[0][8] = "L8";
   StringGridExpTresDuasVariaveis->Cells[1][0] = "P";
   StringGridExpTresDuasVariaveis->Cells[2][0] = "Q";
   StringGridExpTresDuasVariaveis->Cells[3][0] = "~Q";
   StringGridExpTresDuasVariaveis->Cells[4][0] = "~P";
   StringGridExpTresDuasVariaveis->Cells[5][0] = "P ^ Q";
   StringGridExpTresDuasVariaveis->Cells[6][0] = "~P ^ ~Q";
   StringGridExpTresDuasVariaveis->Cells[7][0] = "(P ^ Q) v (~P ^ ~Q)";

}
void __fastcall TFormExpTresDuasVariaveis::ButtonComecarClick(
      TObject *Sender)
{
   Status = 1;
   Close();
}
//---------------------------------------------------------------------------

void __fastcall TFormExpTresDuasVariaveis::ButtonVerificarClick(
      TObject *Sender)
{
   Status = 3;
   Close();
}
//---------------------------------------------------------------------------

void __fastcall TFormExpTresDuasVariaveis::ButtonPraticarClick(
      TObject *Sender)
{
   Status = 2;
   Close();
}
//---------------------------------------------------------------------------

