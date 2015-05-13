//---------------------------------------------------------------------------

#ifndef FormularioMenuH
#define FormularioMenuH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Menus.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TFormMenu : public TForm
{
__published:	// IDE-managed Components
   TPanel *PanelMenu;
   TMainMenu *MainMenu1;
   TMenuItem *MnMenu;
   TMenuItem *MnPraticar;
   TMenuItem *MnSair;
   TMenuItem *MnSairdoPratLog;
   TImage *ImageMenu;
   void __fastcall MnPraticarClick(TObject *Sender);
   void __fastcall MnSairdoPratLogClick(TObject *Sender);
private:	// User declarations
   int Status;
public:		// User declarations
   __fastcall TFormMenu(TComponent* Owner);
   int getStatus(void)
   {
      return Status;
   }
};
//---------------------------------------------------------------------------
extern PACKAGE TFormMenu *FormMenu;
//---------------------------------------------------------------------------
#endif
