//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FormularioExpUmDuasVariaveis.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormExpUmDuasVariaveis *FormExpUmDuasVariaveis;
//---------------------------------------------------------------------------
__fastcall TFormExpUmDuasVariaveis::TFormExpUmDuasVariaveis(TComponent* Owner)
   : TForm(Owner)
{
   for(int i=0; i<4; ++i)
   {
      for(int j=0; j<4; ++j)
      {
         SolucaoUmDuasVariaveis[i][j] = NULL;
      }
   }
}
//---------------------------------------------------------------------------
void __fastcall TFormExpUmDuasVariaveis::ButtonComecarClick(
      TObject *Sender)
{
   Status = 1;
   Close();
}
//---------------------------------------------------------------------------
void TFormExpUmDuasVariaveis::setSolucaoUmDuasVariaveis(int ASolucaoUmDuasVariaveis[4][4])
{
   for(int i=0;i<2;++i)
   {
      for(int j=0;j<4;++j)
      {
         SolucaoUmDuasVariaveis[i][j] = ASolucaoUmDuasVariaveis[i][j];
         if (SolucaoUmDuasVariaveis[i][j] == 1)
         {
            StringGridExpUmDuasVariaveis->Cells[i+1][j+1] = "V";
         }else
          {
            StringGridExpUmDuasVariaveis->Cells[i+1][j+1] = "F";
          }
      }
   }


}

//---------------------------------------------------------------------------

void TFormExpUmDuasVariaveis::mostrarStringGrid()
{
   StringGridExpUmDuasVariaveis->Cells[0][1] = "L1";
   StringGridExpUmDuasVariaveis->Cells[0][2] = "L2";
   StringGridExpUmDuasVariaveis->Cells[0][3] = "L3";
   StringGridExpUmDuasVariaveis->Cells[0][4] = "L4";
   StringGridExpUmDuasVariaveis->Cells[1][0] = "P";
   StringGridExpUmDuasVariaveis->Cells[2][0] = "Q";
   StringGridExpUmDuasVariaveis->Cells[3][0] = "~Q";
   StringGridExpUmDuasVariaveis->Cells[4][0] = "P ^ ~Q";
}
void __fastcall TFormExpUmDuasVariaveis::ButtonVoltarClick(TObject *Sender)
{
   Status = 2;
   Close();
}
//---------------------------------------------------------------------------

void __fastcall TFormExpUmDuasVariaveis::ButtonPraticarClick(
      TObject *Sender)
{
   Status = 2;
   Close();
}
//---------------------------------------------------------------------------


void TFormExpUmDuasVariaveis::verificar(int ASolucaoUmDuasVariaveis[4][4])
{
   for(int i = 2; i<4; ++i)
   {
     for (int j = 0; j<4;++j)
     {
        if(ASolucaoUmDuasVariaveis[i][j]==1)
        {
            if (StringGridExpUmDuasVariaveis->Cells[i+1][j+1] == "V" || StringGridExpUmDuasVariaveis->Cells[i+1][j+1] == "v")
            {
              StringGridExpUmDuasVariaveis->Cells[i+1][j+1] = "V";
            }else
            {
               StringGridExpUmDuasVariaveis->Cells[i+1][j+1] = " ";
            }
        }else if(ASolucaoUmDuasVariaveis[i][j]==0)
         {
            if (StringGridExpUmDuasVariaveis->Cells[i+1][j+1] == "F" || StringGridExpUmDuasVariaveis->Cells[i+1][j+1] == "f")
            {
              StringGridExpUmDuasVariaveis->Cells[i+1][j+1] = "F";
            }else
            {
               StringGridExpUmDuasVariaveis->Cells[i+1][j+1] = " ";
            }
         }
     }
   }

}

void __fastcall TFormExpUmDuasVariaveis::ButtonVerificarClick(
      TObject *Sender)
{
   Status = 3;
   Close();
}
//---------------------------------------------------------------------------

