//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FormularioExpUmQuatroVariaveis.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormExpUmQuatroVariaveis *FormExpUmQuatroVariaveis;
//---------------------------------------------------------------------------
__fastcall TFormExpUmQuatroVariaveis::TFormExpUmQuatroVariaveis(TComponent* Owner)
   : TForm(Owner)
{
   for (int i = 0; i<16; ++i)
   {
      for (int j = 0; j<16; ++j)
      {
         SolucaoUmQuatroVariaveis[i][j] = NULL;
      }
   }

   Status = 0;
}
//---------------------------------------------------------------------------
void __fastcall TFormExpUmQuatroVariaveis::ButtonSolucionarClick(
      TObject *Sender)
{
   Status = 1;
   Close();
}
//---------------------------------------------------------------------------
void TFormExpUmQuatroVariaveis::setSolucaoUmQuatroVariaveis(int OSolucaoUmQuatroVariaveis[16][16])
{
   for (int i = 0; i<16; ++i)
   {
      for (int j = 0; j<16; ++j)
      {
         SolucaoUmQuatroVariaveis[i][j] = OSolucaoUmQuatroVariaveis[i][j];
         StringGridExpUmQuatroVariaveis->Cells[i+1][j+1] = SolucaoUmQuatroVariaveis[i][j];
      }
   }
}

void TFormExpUmQuatroVariaveis::mostrarStringGrig(void)
{
   StringGridExpUmQuatroVariaveis->Cells[0][1] = "L1";
   StringGridExpUmQuatroVariaveis->Cells[0][2] = "L2";
   StringGridExpUmQuatroVariaveis->Cells[0][3] = "L3";
   StringGridExpUmQuatroVariaveis->Cells[0][4] = "L4";
   StringGridExpUmQuatroVariaveis->Cells[0][5] = "L5";
   StringGridExpUmQuatroVariaveis->Cells[0][6] = "L6";
   StringGridExpUmQuatroVariaveis->Cells[0][7] = "L7";
   StringGridExpUmQuatroVariaveis->Cells[0][8] = "L8";
   StringGridExpUmQuatroVariaveis->Cells[0][9] = "L9";
   StringGridExpUmQuatroVariaveis->Cells[0][10] = "L10";
   StringGridExpUmQuatroVariaveis->Cells[0][11] = "L11";
   StringGridExpUmQuatroVariaveis->Cells[0][12] = "L12";
   StringGridExpUmQuatroVariaveis->Cells[0][13] = "L13";
   StringGridExpUmQuatroVariaveis->Cells[0][14] = "L14";
   StringGridExpUmQuatroVariaveis->Cells[0][15] = "L15";
   StringGridExpUmQuatroVariaveis->Cells[0][16] = "L16";
   StringGridExpUmQuatroVariaveis->Cells[1][0] = "P";
   StringGridExpUmQuatroVariaveis->Cells[2][0] = "Q";
   StringGridExpUmQuatroVariaveis->Cells[3][0] = "R";
   StringGridExpUmQuatroVariaveis->Cells[4][0] = "S";
   StringGridExpUmQuatroVariaveis->Cells[5][0] = "~P";
   StringGridExpUmQuatroVariaveis->Cells[6][0] = "~Q";
   StringGridExpUmQuatroVariaveis->Cells[7][0] = "~R";
   StringGridExpUmQuatroVariaveis->Cells[8][0] = "~S";
   StringGridExpUmQuatroVariaveis->Cells[9][0] = "(Q -> ~S)";
   StringGridExpUmQuatroVariaveis->Cells[10][0] = "(~Q ^ P)";
   StringGridExpUmQuatroVariaveis->Cells[11][0] = "((Q -> ~S) -> (~Q ^ P))";
   StringGridExpUmQuatroVariaveis->Cells[12][0] = "(P ^ ~R)";
   StringGridExpUmQuatroVariaveis->Cells[13][0] = "(P ^ ~R) v ((Q -> ~S) -> (~Q ^ P))";
   StringGridExpUmQuatroVariaveis->Cells[14][0] = "(R v ~P)";
   StringGridExpUmQuatroVariaveis->Cells[15][0] = "(P ^ ~R) v ((Q -> ~S) -> (~Q ^ P)) ^ (R v ~P)";
   StringGridExpUmQuatroVariaveis->Cells[16][0] = "(P ^ ~R) v ((Q -> ~S) -> (~Q ^ P)) ^ (R v ~P) -> S";

}

void __fastcall TFormExpUmQuatroVariaveis::ButtonPraticarClick(
      TObject *Sender)
{
   Status = 2;
   Close();
}
//---------------------------------------------------------------------------



