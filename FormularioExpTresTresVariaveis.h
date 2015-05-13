//---------------------------------------------------------------------------

#ifndef FormularioExpTresTresVariaveisH
#define FormularioExpTresTresVariaveisH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TFormExpTresTresVariaveis : public TForm
{
__published:	// IDE-managed Components
   TPanel *PanelExpTresTresVar;
   TStringGrid *StringGridExpTresTresVariaveis;
   TButton *ButtonComecar;
   TButton *ButtonVerificar;
   TButton *ButtonPraticar;
   TImage *ImageExpTresTresVariaveis;
   void __fastcall ButtonComecarClick(TObject *Sender);
   void __fastcall ButtonVerificarClick(TObject *Sender);
   void __fastcall ButtonPraticarClick(TObject *Sender);
private:	// User declarations
   int Status;
   int SolucaoTresTresVariaveis[8][8];
public:		// User declarations
   __fastcall TFormExpTresTresVariaveis(TComponent* Owner);
   void verificar(int[8][8]);
   void setSolucaoTresTresVariaveis(int[8][8]);
   void mostrarStringGrid(void);

   int getStatus(void)
   {
      return Status;
   }
};
//---------------------------------------------------------------------------
extern PACKAGE TFormExpTresTresVariaveis *FormExpTresTresVariaveis;
//---------------------------------------------------------------------------
#endif
