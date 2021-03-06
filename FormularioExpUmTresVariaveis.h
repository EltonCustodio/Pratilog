//---------------------------------------------------------------------------

#ifndef FormularioExpUmTresVariaveisH
#define FormularioExpUmTresVariaveisH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TFormExpUmTresVariaveis : public TForm
{
__published:	// IDE-managed Components
   TPanel *PanelExpUmTresVar;
   TStringGrid *StringGridExpUmTresVariaveis;
   TButton *ButtonPraticar;
   TButton *ButtonVerificar;
   TButton *ButtonComecar;
   TImage *ImageExpUmTresVariaveis;
   void __fastcall ButtonVerificarClick(TObject *Sender);
   void __fastcall ButtonPraticarClick(TObject *Sender);
   void __fastcall ButtonComecarClick(TObject *Sender);
   
private:	// User declarations
   int Status;
   int SolucaoUmTresVariaveis[6][8];
public:		// User declarations
   __fastcall TFormExpUmTresVariaveis(TComponent* Owner);
   void setSolucaoUmTresVariaveis(int[6][8]);
   void mostrarStringGrid(void);
   void verificar(int[6][8]);

   int getStatus(void)
   {
      return Status;
   }
};
//---------------------------------------------------------------------------
extern PACKAGE TFormExpUmTresVariaveis *FormExpUmTresVariaveis;
//---------------------------------------------------------------------------
#endif
