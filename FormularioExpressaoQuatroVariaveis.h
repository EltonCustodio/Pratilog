//---------------------------------------------------------------------------

#ifndef FormularioExpressaoQuatroVariaveisH
#define FormularioExpressaoQuatroVariaveisH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TFormExpressaoQuatroVariaveis : public TForm
{
__published:	// IDE-managed Components
   TPanel *PanelExpressaoQuatroVariaveis;
   TRadioButton *RadioButtonExpUmQuatroVariaveis;
   TRadioButton *RadioButtonExpDoisQuatroVariaveis;
   TRadioButton *RadioButtonExpTresQuatroVariaveis;
   TButton *ButtonPraticar;
   TButton *ButtonVoltar;
   TImage *ImageExpQuatroVariaveis;
   TLabel *LabelExpressao;
   void __fastcall ButtonPraticarClick(TObject *Sender);
   void __fastcall RadioButtonExpUmQuatroVariaveisClick(TObject *Sender);
   void __fastcall RadioButtonExpDoisQuatroVariaveisClick(TObject *Sender);
   void __fastcall RadioButtonExpTresQuatroVariaveisClick(TObject *Sender);
   void __fastcall ButtonVoltarClick(TObject *Sender);
private:	// User declarations
   int Status, Expressao;
public:		// User declarations
   __fastcall TFormExpressaoQuatroVariaveis(TComponent* Owner);
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
extern PACKAGE TFormExpressaoQuatroVariaveis *FormExpressaoQuatroVariaveis;
//---------------------------------------------------------------------------
#endif
