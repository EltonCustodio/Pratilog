//---------------------------------------------------------------------------

#ifndef FormularioExpTresDuasVariaveisH
#define FormularioExpTresDuasVariaveisH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TFormExpTresDuasVariaveis : public TForm
{
__published:	// IDE-managed Components
   TPanel *PanelExpTresDuasVar;
   TImage *ImageExpTresDuasVariaveis;
   TButton *ButtonComecar;
   TButton *ButtonVerificar;
   TButton *ButtonPraticar;
   TStringGrid *StringGridExpTresDuasVariaveis;
   void __fastcall ButtonComecarClick(TObject *Sender);
   void __fastcall ButtonVerificarClick(TObject *Sender);
   void __fastcall ButtonPraticarClick(TObject *Sender);
private:	// User declarations
   int Status;
   int SolucaoTresDuasVariaveis[7][4];
public:		// User declarations
   __fastcall TFormExpTresDuasVariaveis(TComponent* Owner);
   void setSolucaoTresDuasVariaveis(int[7][4]);
   void verificar(int[7][4]);
   void mostrarStringGrid(void);

   int getStatus(void)
   {
      return Status;
   }
};
//---------------------------------------------------------------------------
extern PACKAGE TFormExpTresDuasVariaveis *FormExpTresDuasVariaveis;
//---------------------------------------------------------------------------
#endif
