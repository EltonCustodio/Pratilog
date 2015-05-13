//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FormularioExpressao.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormExpressaoDuasVariaveis *FormExpressaoDuasVariaveis;
//---------------------------------------------------------------------------
__fastcall TFormExpressaoDuasVariaveis::TFormExpressaoDuasVariaveis(TComponent* Owner)
   : TForm(Owner)
{
   Status, Expressao =0;
}
//---------------------------------------------------------------------------
void __fastcall TFormExpressaoDuasVariaveis::RadioButtonExpUmDuasVarClick(
      TObject *Sender)
{
   Expressao = 1;
}
//---------------------------------------------------------------------------
void __fastcall TFormExpressaoDuasVariaveis::ButtonPraticarClick(TObject *Sender)
{
   Status = 4;
   Close();
}
//---------------------------------------------------------------------------
void __fastcall TFormExpressaoDuasVariaveis::RadioButtonExpDoisDuasVarClick(
      TObject *Sender)
{
   Expressao = 2;
}
//---------------------------------------------------------------------------

void __fastcall TFormExpressaoDuasVariaveis::RadioButtonExpTresDuasVarClick(
      TObject *Sender)
{
   Expressao = 3;
}
//---------------------------------------------------------------------------

void __fastcall TFormExpressaoDuasVariaveis::ButtonVoltarClick(TObject *Sender)
{
   Status = 5;
   Close();   
}
//---------------------------------------------------------------------------

