//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FormularioExpressaoQuatroVariaveis.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormExpressaoQuatroVariaveis *FormExpressaoQuatroVariaveis;
//---------------------------------------------------------------------------
__fastcall TFormExpressaoQuatroVariaveis::TFormExpressaoQuatroVariaveis(TComponent* Owner)
   : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormExpressaoQuatroVariaveis::ButtonPraticarClick(
      TObject *Sender)
{
   Status = 4;
   Close();   
}
//---------------------------------------------------------------------------
void __fastcall TFormExpressaoQuatroVariaveis::RadioButtonExpUmQuatroVariaveisClick(
      TObject *Sender)
{
   Expressao = 1;   
}
//---------------------------------------------------------------------------
void __fastcall TFormExpressaoQuatroVariaveis::RadioButtonExpDoisQuatroVariaveisClick(
      TObject *Sender)
{
   Expressao = 2;   
}
//---------------------------------------------------------------------------


void __fastcall TFormExpressaoQuatroVariaveis::RadioButtonExpTresQuatroVariaveisClick(
      TObject *Sender)
{
   Expressao = 3;   
}
//---------------------------------------------------------------------------

void __fastcall TFormExpressaoQuatroVariaveis::ButtonVoltarClick(
      TObject *Sender)
{
   Status = 5;
   Close();   
}
//---------------------------------------------------------------------------

