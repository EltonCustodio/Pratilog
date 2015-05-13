//---------------------------------------------------------------------------

#ifndef FormularioExpUmDuasVariaveisH
#define FormularioExpUmDuasVariaveisH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TFormExpUmDuasVariaveis : public TForm
{
__published:	// IDE-managed Components
   TPanel *PanelExpUmDuasVar;
   TButton *ButtonPraticar;
   TButton *ButtonComecar;
   TStringGrid *StringGridExpUmDuasVariaveis;
   TButton *ButtonVerificar;
   TImage *ImageExpUmDusVariaveis;
   void __fastcall ButtonComecarClick(TObject *Sender);
   void __fastcall ButtonVoltarClick(TObject *Sender);
   void __fastcall ButtonPraticarClick(TObject *Sender);
   void __fastcall ButtonVerificarClick(TObject *Sender);
   
private:	// User declarations
   int Status;
   double SolucaoUmDuasVariaveis[4][4];
public:		// User declarations
   __fastcall TFormExpUmDuasVariaveis(TComponent* Owner);
   int getStatus(void)
   {
      return Status;
   }

   void setSolucaoUmDuasVariaveis(int [4][4]);
   void verificar(int[4][4]);
   void mostrarStringGrid(void);

};
//---------------------------------------------------------------------------
extern PACKAGE TFormExpUmDuasVariaveis *FormExpUmDuasVariaveis;
//---------------------------------------------------------------------------
#endif
