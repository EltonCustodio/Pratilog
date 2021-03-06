//---------------------------------------------------------------------------

#ifndef FormularioExpTresQuatroVariaveisH
#define FormularioExpTresQuatroVariaveisH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TFormExpTresQuatroVariaveis : public TForm
{
__published:	// IDE-managed Components
   TPanel *PanelExpTresQuatroVar;
   TStringGrid *StringGridExpTresQuatroVariaveis;
   TButton *ButtonComecar;
   TButton *ButtonVerificar;
   TButton *ButtonPraticar;
   TImage *ImageExpTresQuatroVariaveis;
   void __fastcall ButtonComecarClick(TObject *Sender);
   void __fastcall ButtonVerificarClick(TObject *Sender);
   void __fastcall ButtonPraticarClick(TObject *Sender);
private:	// User declarations
   int Status;
   int SolucaoTresQuatroVariaveis[14][16];
public:		// User declarations
   __fastcall TFormExpTresQuatroVariaveis(TComponent* Owner);
   void verificar(int[14][16]);
   void setSolucaoTresQuatroVariaveis(int[14][16]);
   void mostrarStringGrid(void);

   int getStatus(void)
   {
      return Status;
   }
};
//---------------------------------------------------------------------------
extern PACKAGE TFormExpTresQuatroVariaveis *FormExpTresQuatroVariaveis;
//---------------------------------------------------------------------------
#endif
