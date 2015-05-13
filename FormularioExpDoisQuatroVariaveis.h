//---------------------------------------------------------------------------

#ifndef FormularioExpDoisQuatroVariaveisH
#define FormularioExpDoisQuatroVariaveisH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TFormExpDoisQuatroVariaveis : public TForm
{
__published:	// IDE-managed Components
   TPanel *PanelExpDoisQuatroVar;
   TStringGrid *StringGridExpDoisQuatroVariaveis;
   TButton *ButtonComecar;
   TButton *ButtonVerificar;
   TButton *ButtonPraticar;
   TImage *ImageExpDoisQuatroVariaveis;
   void __fastcall ButtonComecarClick(TObject *Sender);
   void __fastcall ButtonVerificarClick(TObject *Sender);
   void __fastcall ButtonPraticarClick(TObject *Sender);
private:	// User declarations
   int Status;
   int SolucaoDoisQuatroVariaveis[13][16];
public:		// User declarations
   __fastcall TFormExpDoisQuatroVariaveis(TComponent* Owner);
   void setSolucaoDoisQuatroVariaveis(int[13][16]);
   void verificar(int[13][16]);
   void mostrarStringGrid(void);

   int getStatus(void)
   {
      return Status;
   }
};
//---------------------------------------------------------------------------
extern PACKAGE TFormExpDoisQuatroVariaveis *FormExpDoisQuatroVariaveis;
//---------------------------------------------------------------------------
#endif
