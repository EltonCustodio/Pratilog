//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FormularioEscolha.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormEscolha *FormEscolha;
//---------------------------------------------------------------------------
__fastcall TFormEscolha::TFormEscolha(TComponent* Owner)
   : TForm(Owner)
{
   Status = 0;
   Variaveis = 0;
}
//---------------------------------------------------------------------------
void __fastcall TFormEscolha::RadioButtonDuasVariaveisClick(TObject *Sender)
{
   Variaveis = 2;
}
//---------------------------------------------------------------------------
void __fastcall TFormEscolha::ButtonVoltarClick(TObject *Sender)
{
   Status = 6;
   Close();
}
//---------------------------------------------------------------------------

void __fastcall TFormEscolha::ButtonEscolhaExpressaoClick(TObject *Sender)
{
   Status = 5;
   Close();
}
//---------------------------------------------------------------------------

void __fastcall TFormEscolha::RadioButtonTresVariaveisClick(
      TObject *Sender)
{
   Variaveis = 3;
}
//---------------------------------------------------------------------------

void __fastcall TFormEscolha::RadioButtonQuatroVariaveisClick(
      TObject *Sender)
{
   Variaveis = 4;   
}
//---------------------------------------------------------------------------

