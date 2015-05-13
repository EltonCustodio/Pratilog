//---------------------------------------------------------------------------

#ifndef FormularioExpressaoTresVariaveisH
#define FormularioExpressaoTresVariaveisH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TFormExpressaoTresVariaveis : public TForm
{
__published:	// IDE-managed Components
   TPanel *PanelExpressaoTresVar;
   TRadioButton *RadioButtonExpUmTresVar;
   TRadioButton *RadioButtonExpDoisTresVar;
   TRadioButton *RadioButtonExpTresTresVar;
   TButton *ButtonPraticar;
   TButton *ButtonVoltar;
   TImage *ImageExpTresVariaveis;
   TLabel *LabelExpressao;
   void __fastcall RadioButtonExpUmTresVarClick(TObject *Sender);
   void __fastcall ButtonPraticarClick(TObject *Sender);
   void __fastcall RadioButtonExpDoisTresVarClick(TObject *Sender);
   void __fastcall RadioButtonExpTresTresVarClick(TObject *Sender);
   void __fastcall ButtonVoltarClick(TObject *Sender);
private:	// User declarations
   int Status, Expressao;
public:		// User declarations
   __fastcall TFormExpressaoTresVariaveis(TComponent* Owner);
   int getStatus(void)
   {
      return Status;
   }

   int getExpressao(void)
   {
      return Expressao;
   }
};
//---------------------------------------------------------------------------
extern PACKAGE TFormExpressaoTresVariaveis *FormExpressaoTresVariaveis;
//---------------------------------------------------------------------------
#endif
