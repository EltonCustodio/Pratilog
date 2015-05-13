//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FormularioExpDoisTresVariaveis.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormExpDoisTresVariaveis *FormExpDoisTresVariaveis;
//---------------------------------------------------------------------------
__fastcall TFormExpDoisTresVariaveis::TFormExpDoisTresVariaveis(TComponent* Owner)
   : TForm(Owner)
{
   for (int i = 0; i<8; ++i)
   {
      for (int j = 0; j<8; ++j)
      {
         SolucaoDoisTresVariaveis[i][j] = NULL;
      }
   }
}
//---------------------------------------------------------------------------
void __fastcall TFormExpDoisTresVariaveis::ButtonComecarClick(
      TObject *Sender)
{
   Status = 1;
   Close();
}
//---------------------------------------------------------------------------

void __fastcall TFormExpDoisTresVariaveis::ButtonVerificarClick(
      TObject *Sender)
{
   Status = 3;
   Close();
}
//---------------------------------------------------------------------------

void __fastcall TFormExpDoisTresVariaveis::ButtonPraticarClick(
      TObject *Sender)
{
   Status = 2;
   Close();
}
//---------------------------------------------------------------------------

void TFormExpDoisTresVariaveis::setSolucaoDoisTresVariaveis(int OSolucaoDoisTresVariaveis[8][8])
{
   for(int i=0;i<4;++i)
   {
      for(int j=0;j<8;++j)
      {
         SolucaoDoisTresVariaveis[i][j] = OSolucaoDoisTresVariaveis[i][j];
         if (SolucaoDoisTresVariaveis[i][j] == 1)
         {
            StringGridExpDoisTresVariaveis->Cells[i+1][j+1] = "V";
         }else
          {
            StringGridExpDoisTresVariaveis->Cells[i+1][j+1] = "F";
          }
      }
   }
}

void TFormExpDoisTresVariaveis::verificar(int OSolucaoDoisTresVariaveis[8][8])
{
   for(int i = 4; i<8; ++i)
   {
     for (int j = 0; j<8;++j)
     {
        if(OSolucaoDoisTresVariaveis[i][j]==1)
        {
            if (StringGridExpDoisTresVariaveis->Cells[i+1][j+1] == "V" || StringGridExpDoisTresVariaveis->Cells[i+1][j+1] == "v")
            {
              StringGridExpDoisTresVariaveis->Cells[i+1][j+1] = "V";
            }else
            {
               StringGridExpDoisTresVariaveis->Cells[i+1][j+1] = " ";
            }
        }else if(OSolucaoDoisTresVariaveis[i][j]==0)
         {
            if (StringGridExpDoisTresVariaveis->Cells[i+1][j+1] == "F" || StringGridExpDoisTresVariaveis->Cells[i+1][j+1] == "f")
            {
              StringGridExpDoisTresVariaveis->Cells[i+1][j+1] = "F";
            }else
            {
               StringGridExpDoisTresVariaveis->Cells[i+1][j+1] = " ";
            }
         }
     }
   }
}

void TFormExpDoisTresVariaveis::mostrarStringGrid(void)
{
   StringGridExpDoisTresVariaveis->Cells[0][1] = "L1";
   StringGridExpDoisTresVariaveis->Cells[0][2] = "L2";
   StringGridExpDoisTresVariaveis->Cells[0][3] = "L3";
   StringGridExpDoisTresVariaveis->Cells[0][4] = "L4";
   StringGridExpDoisTresVariaveis->Cells[0][5] = "L5";
   StringGridExpDoisTresVariaveis->Cells[0][6] = "L6";
   StringGridExpDoisTresVariaveis->Cells[0][7] = "L7";
   StringGridExpDoisTresVariaveis->Cells[0][8] = "L8";
   StringGridExpDoisTresVariaveis->Cells[1][0] = "P";
   StringGridExpDoisTresVariaveis->Cells[2][0] = "Q";
   StringGridExpDoisTresVariaveis->Cells[3][0] = "R";
   StringGridExpDoisTresVariaveis->Cells[4][0] = "~Q";
   StringGridExpDoisTresVariaveis->Cells[5][0] = "P ^ ~Q";
   StringGridExpDoisTresVariaveis->Cells[6][0] = "(P ^ ~Q ^ R)";
   StringGridExpDoisTresVariaveis->Cells[7][0] = "~(P ^ ~Q ^ R";
   StringGridExpDoisTresVariaveis->Cells[8][0] = "~(P ^ ~Q ^ R) -> Q";
}

