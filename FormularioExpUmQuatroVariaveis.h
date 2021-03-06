//---------------------------------------------------------------------------

#ifndef FormularioExpUmQuatroVariaveisH
#define FormularioExpUmQuatroVariaveisH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TFormExpUmQuatroVariaveis : public TForm
{
__published:	// IDE-managed Components
   TPanel *PanelExpressaoUmQuatroVariaveis;
   TStringGrid *StringGridExpUmQuatroVariaveis;
   TButton *ButtonPraticar;
   TButton *ButtonSolucionar;
   TImage *ImageExpUmQuatroVariaveis;
   void __fastcall ButtonSolucionarClick(TObject *Sender);
   void __fastcall ButtonPraticarClick(TObject *Sender);
   
private:	// User declarations
   int Status;
   int SolucaoUmQuatroVariaveis[16][16];
public:		// User declarations
   __fastcall TFormExpUmQuatroVariaveis(TComponent* Owner);
   void setSolucaoUmQuatroVariaveis(int[16][16]);
   void mostrarStringGrig(void);
   int getStatus(void)
   {
      return Status;
   }
};
//---------------------------------------------------------------------------
extern PACKAGE TFormExpUmQuatroVariaveis *FormExpUmQuatroVariaveis;
//---------------------------------------------------------------------------
#endif
