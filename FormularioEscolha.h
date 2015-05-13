//---------------------------------------------------------------------------

#ifndef FormularioEscolhaH
#define FormularioEscolhaH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TFormEscolha : public TForm
{
__published:	// IDE-managed Components
   TPanel *PanelEscolha;
   TEdit *EditNome;
   TRadioButton *RadioButtonDuasVariaveis;
   TRadioButton *RadioButtonTresVariaveis;
   TRadioButton *RadioButtonQuatroVariaveis;
   TButton *ButtonEscolhaExpressao;
   TButton *ButtonVoltar;
   TImage *ImageEscolha;
   TLabel *LabelEscolha;
   TLabel *LabelNome;
   void __fastcall RadioButtonDuasVariaveisClick(TObject *Sender);
   void __fastcall ButtonVoltarClick(TObject *Sender);
   void __fastcall ButtonEscolhaExpressaoClick(TObject *Sender);
   void __fastcall RadioButtonTresVariaveisClick(TObject *Sender);
   void __fastcall RadioButtonQuatroVariaveisClick(TObject *Sender);
private:	// User declarations
   int Status,Variaveis;
public:		// User declarations
   __fastcall TFormEscolha(TComponent* Owner);
   int getStatus(void)
   {
      return Status;
   }

   int getVariaveis(void)
   {
      return Variaveis;
   }
};
//---------------------------------------------------------------------------
extern PACKAGE TFormEscolha *FormEscolha;
//---------------------------------------------------------------------------
#endif
