//---------------------------------------------------------------------------

#ifndef FormularioExpressaoH
#define FormularioExpressaoH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TFormExpressaoDuasVariaveis : public TForm
{
__published:	// IDE-managed Components
   TPanel *PanelExpressao;
   TRadioButton *RadioButtonExpUmDuasVar;
   TRadioButton *RadioButtonExpDoisDuasVar;
   TRadioButton *RadioButtonExpTresDuasVar;
   TButton *ButtonPraticar;
   TButton *ButtonVoltar;
   TImage *ImageExpDuasVariaveis;
   TLabel *LabelExpressao;
   void __fastcall RadioButtonExpUmDuasVarClick(TObject *Sender);
   void __fastcall ButtonPraticarClick(TObject *Sender);
   void __fastcall RadioButtonExpDoisDuasVarClick(TObject *Sender);
   void __fastcall RadioButtonExpTresDuasVarClick(TObject *Sender);
   void __fastcall ButtonVoltarClick(TObject *Sender);
private:	// User declarations
   int Status,Expressao;
public:		// User declarations
   __fastcall TFormExpressaoDuasVariaveis(TComponent* Owner);
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
extern PACKAGE TFormExpressaoDuasVariaveis *FormExpressaoDuasVariaveis;
//---------------------------------------------------------------------------
#endif
