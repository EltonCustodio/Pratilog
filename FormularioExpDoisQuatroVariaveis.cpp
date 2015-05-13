//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FormularioExpDoisQuatroVariaveis.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormExpDoisQuatroVariaveis *FormExpDoisQuatroVariaveis;
//---------------------------------------------------------------------------
__fastcall TFormExpDoisQuatroVariaveis::TFormExpDoisQuatroVariaveis(TComponent* Owner)
   : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormExpDoisQuatroVariaveis::ButtonComecarClick(
      TObject *Sender)
{
   Status = 1;
   Close();   
}
//---------------------------------------------------------------------------
void __fastcall TFormExpDoisQuatroVariaveis::ButtonVerificarClick(
      TObject *Sender)
{
   Status = 3;
   Close();
}
//---------------------------------------------------------------------------
void __fastcall TFormExpDoisQuatroVariaveis::ButtonPraticarClick(
      TObject *Sender)
{
   Status = 2;
   Close();
}
//---------------------------------------------------------------------------

void TFormExpDoisQuatroVariaveis::setSolucaoDoisQuatroVariaveis(int OSolucaoDoisQuatroVariaveis[13][16])
{
   for (int i = 0; i<6; ++i)
   {
      for (int j = 0; j<16; ++j)
      {
         SolucaoDoisQuatroVariaveis[i][j] = OSolucaoDoisQuatroVariaveis[i][j];
         if (SolucaoDoisQuatroVariaveis[i][j] == 1)
         {
            StringGridExpDoisQuatroVariaveis->Cells[i+1][j+1] = "V";
         }else
          {
            StringGridExpDoisQuatroVariaveis->Cells[i+1][j+1] = "F";
          }
      }
   }
}

void TFormExpDoisQuatroVariaveis::verificar(int OSolucaoDoisQuatroVariaveis[13][16])
{
   for(int i = 6; i<13; ++i)
   {
     for (int j = 0; j<16;++j)
     {
        if(OSolucaoDoisQuatroVariaveis[i][j]==1)
        {
            if (StringGridExpDoisQuatroVariaveis->Cells[i+1][j+1] == "V" || StringGridExpDoisQuatroVariaveis->Cells[i+1][j+1] == "v")
            {
              StringGridExpDoisQuatroVariaveis->Cells[i+1][j+1] = "V";
            }else
            {
               StringGridExpDoisQuatroVariaveis->Cells[i+1][j+1] = " ";
            }
        }else if(OSolucaoDoisQuatroVariaveis[i][j]==0)
         {
            if (StringGridExpDoisQuatroVariaveis->Cells[i+1][j+1] == "F" || StringGridExpDoisQuatroVariaveis->Cells[i+1][j+1] == "f")
            {
              StringGridExpDoisQuatroVariaveis->Cells[i+1][j+1] = "F";
            }else
            {
               StringGridExpDoisQuatroVariaveis->Cells[i+1][j+1] = " ";
            }
         }
     }
   }
}

void TFormExpDoisQuatroVariaveis::mostrarStringGrid(void)
{
   StringGridExpDoisQuatroVariaveis->Cells[0][1] = "L1";
   StringGridExpDoisQuatroVariaveis->Cells[0][2] = "L2";
   StringGridExpDoisQuatroVariaveis->Cells[0][3] = "L3";
   StringGridExpDoisQuatroVariaveis->Cells[0][4] = "L4";
   StringGridExpDoisQuatroVariaveis->Cells[0][5] = "L5";
   StringGridExpDoisQuatroVariaveis->Cells[0][6] = "L6";
   StringGridExpDoisQuatroVariaveis->Cells[0][7] = "L7";
   StringGridExpDoisQuatroVariaveis->Cells[0][8] = "L8";
   StringGridExpDoisQuatroVariaveis->Cells[0][9] = "L9";
   StringGridExpDoisQuatroVariaveis->Cells[0][10] = "L10";
   StringGridExpDoisQuatroVariaveis->Cells[0][11] = "L11";
   StringGridExpDoisQuatroVariaveis->Cells[0][12] = "L12";
   StringGridExpDoisQuatroVariaveis->Cells[0][13] = "L13";
   StringGridExpDoisQuatroVariaveis->Cells[0][14] = "L14";
   StringGridExpDoisQuatroVariaveis->Cells[0][15] = "L15";
   StringGridExpDoisQuatroVariaveis->Cells[0][16] = "L16";
   StringGridExpDoisQuatroVariaveis->Cells[1][0] = "P";
   StringGridExpDoisQuatroVariaveis->Cells[2][0] = "Q";
   StringGridExpDoisQuatroVariaveis->Cells[3][0] = "R";
   StringGridExpDoisQuatroVariaveis->Cells[4][0] = "S";
   StringGridExpDoisQuatroVariaveis->Cells[5][0] = "~P";
   StringGridExpDoisQuatroVariaveis->Cells[6][0] = "~Q";
   StringGridExpDoisQuatroVariaveis->Cells[7][0] = "(P ^ ~Q)";
   StringGridExpDoisQuatroVariaveis->Cells[8][0] = "(Q v R)";
   StringGridExpDoisQuatroVariaveis->Cells[9][0] = "((P ^ ~Q) - > (Q v R))";
   StringGridExpDoisQuatroVariaveis->Cells[10][0] = "(~P v S)";
   StringGridExpDoisQuatroVariaveis->Cells[11][0] = "(P -> R)";
   StringGridExpDoisQuatroVariaveis->Cells[12][0] = "((~P v S) ^ (P -> R))";
   StringGridExpDoisQuatroVariaveis->Cells[13][0] = "((P ^ ~Q) - > (Q v R)) < - > ((~P v S) ^ (P -> R))";
   

}
