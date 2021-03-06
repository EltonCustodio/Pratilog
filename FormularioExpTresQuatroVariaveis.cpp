//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FormularioExpTresQuatroVariaveis.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormExpTresQuatroVariaveis *FormExpTresQuatroVariaveis;
//---------------------------------------------------------------------------
__fastcall TFormExpTresQuatroVariaveis::TFormExpTresQuatroVariaveis(TComponent* Owner)
   : TForm(Owner)
{
   for (int i = 0; i<14; ++i)
   {
      for (int j = 0; j<16; ++j)
      {
         SolucaoTresQuatroVariaveis[i][j] = NULL;
      }
   }
}
//---------------------------------------------------------------------------
void __fastcall TFormExpTresQuatroVariaveis::ButtonComecarClick(TObject *Sender)
{
   Status = 1;
   Close();
}
//---------------------------------------------------------------------------
void __fastcall TFormExpTresQuatroVariaveis::ButtonVerificarClick(TObject *Sender)
{
   Status = 3;
   Close();
}
//---------------------------------------------------------------------------
void __fastcall TFormExpTresQuatroVariaveis::ButtonPraticarClick(
      TObject *Sender)
{
   Status = 2;
   Close();
}
//---------------------------------------------------------------------------

void TFormExpTresQuatroVariaveis::verificar(int OSolucaoTresQuatroVariaveis[14][16])
{
   for(int i = 7; i<14; ++i)
   {
     for (int j = 0; j<16;++j)
     {
        if(OSolucaoTresQuatroVariaveis[i][j]==1)
        {
            if (StringGridExpTresQuatroVariaveis->Cells[i+1][j+1] == "V" || StringGridExpTresQuatroVariaveis->Cells[i+1][j+1] == "v")
            {
              StringGridExpTresQuatroVariaveis->Cells[i+1][j+1] = "V";
            }else
            {
               StringGridExpTresQuatroVariaveis->Cells[i+1][j+1] = " ";
            }
        }else if(OSolucaoTresQuatroVariaveis[i][j]==0)
         {
            if (StringGridExpTresQuatroVariaveis->Cells[i+1][j+1] == "F" || StringGridExpTresQuatroVariaveis->Cells[i+1][j+1] == "f")
            {
              StringGridExpTresQuatroVariaveis->Cells[i+1][j+1] = "F";
            }else
            {
               StringGridExpTresQuatroVariaveis->Cells[i+1][j+1] = " ";
            }
         }
     }
   }
}

void TFormExpTresQuatroVariaveis::setSolucaoTresQuatroVariaveis(int OSolucaoTresQuatroVariaveis[14][16])
{
   for (int i = 0; i<7; ++i)
   {
      for (int j = 0; j<16; ++j)
      {
         SolucaoTresQuatroVariaveis[i][j] = OSolucaoTresQuatroVariaveis[i][j];
         if (SolucaoTresQuatroVariaveis[i][j] == 1)
         {
            StringGridExpTresQuatroVariaveis->Cells[i+1][j+1] = "V";
         }else
          {
            StringGridExpTresQuatroVariaveis->Cells[i+1][j+1] = "F";
          }
      }
   }
}

void TFormExpTresQuatroVariaveis::mostrarStringGrid(void)
{
   StringGridExpTresQuatroVariaveis->Cells[0][1] = "L1";
   StringGridExpTresQuatroVariaveis->Cells[0][2] = "L2";
   StringGridExpTresQuatroVariaveis->Cells[0][3] = "L3";
   StringGridExpTresQuatroVariaveis->Cells[0][4] = "L4";
   StringGridExpTresQuatroVariaveis->Cells[0][5] = "L5";
   StringGridExpTresQuatroVariaveis->Cells[0][6] = "L6";
   StringGridExpTresQuatroVariaveis->Cells[0][7] = "L7";
   StringGridExpTresQuatroVariaveis->Cells[0][8] = "L8";
   StringGridExpTresQuatroVariaveis->Cells[0][9] = "L9";
   StringGridExpTresQuatroVariaveis->Cells[0][10] = "L10";
   StringGridExpTresQuatroVariaveis->Cells[0][11] = "L11";
   StringGridExpTresQuatroVariaveis->Cells[0][12] = "L12";
   StringGridExpTresQuatroVariaveis->Cells[0][13] = "L13";
   StringGridExpTresQuatroVariaveis->Cells[0][14] = "L14";
   StringGridExpTresQuatroVariaveis->Cells[0][15] = "L15";
   StringGridExpTresQuatroVariaveis->Cells[0][16] = "L16";
   StringGridExpTresQuatroVariaveis->Cells[1][0] = "P";
   StringGridExpTresQuatroVariaveis->Cells[2][0] = "Q";
   StringGridExpTresQuatroVariaveis->Cells[3][0] = "R";
   StringGridExpTresQuatroVariaveis->Cells[4][0] = "~P";
   StringGridExpTresQuatroVariaveis->Cells[5][0] = "~Q";
   StringGridExpTresQuatroVariaveis->Cells[6][0] = "~R";
   StringGridExpTresQuatroVariaveis->Cells[7][0] = "~S";
   StringGridExpTresQuatroVariaveis->Cells[8][0] = "(~P ^ Q)";
   StringGridExpTresQuatroVariaveis->Cells[9][0] = "(Q ^ ~S)";
   StringGridExpTresQuatroVariaveis->Cells[10][0] = "(~P ^ Q) v (Q ^ ~S)";
   StringGridExpTresQuatroVariaveis->Cells[11][0] = "(~R ^ P)";
   StringGridExpTresQuatroVariaveis->Cells[12][0] = "(~Q ^ R)";
   StringGridExpTresQuatroVariaveis->Cells[13][0] = "(~R ^ P) ^ (~Q ^ R)";
   StringGridExpTresQuatroVariaveis->Cells[14][0] = "(~P ^ Q) v (Q ^ ~S) - > (~R ^ P) ^ (~Q ^ R)";


}
