//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FormularioMenu.h"
#include "FormularioEscolha.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormMenu *FormMenu;
//---------------------------------------------------------------------------
__fastcall TFormMenu::TFormMenu(TComponent* Owner)
   : TForm(Owner)
{
   Status = 0;
}
//---------------------------------------------------------------------------
void __fastcall TFormMenu::MnPraticarClick(TObject *Sender)
{
   Status = 2;
   Close();
}


//---------------------------------------------------------------------------

void __fastcall TFormMenu::MnSairdoPratLogClick(TObject *Sender)
{
   Status = 3;
   Close();
}
//---------------------------------------------------------------------------

