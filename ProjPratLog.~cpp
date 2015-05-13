//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Controle.h"
USERES("ProjPratLog.res");
USEUNIT("Controle.cpp");
USEFORM("FormularioMenu.cpp", FormMenu);
USEFORM("FormularioExpUmDuasVariaveis.cpp", FormExpUmDuasVariaveis);
USEUNIT("Solucao.cpp");
USEUNIT("Resolve.cpp");
USEUNIT("Estrutura.cpp");
USEFORM("FormularioEscolha.cpp", FormEscolha);
USEFORM("FormularioExpressao.cpp", FormExpressaoDuasVariaveis);
USEFORM("FormularioExpUmTresVariaveis.cpp", FormExpUmTresVariaveis);
USEFORM("FormularioExpressaoTresVariaveis.cpp", FormExpressaoTresVariaveis);
USEFORM("FormularioExpressaoQuatroVariaveis.cpp", FormExpressaoQuatroVariaveis);
USEFORM("FormularioExpUmQuatroVariaveis.cpp", FormExpUmQuatroVariaveis);
USEFORM("FormularioExpDoisDuasVariaveis.cpp", FormExpDoisDuasVariaveis);
USEFORM("FormularioExpTresDuasVariaveis.cpp", FormExpTresDuasVariaveis);
USEFORM("FormularioExpDoisTresVariaveis.cpp", FormExpDoisTresVariaveis);
USEFORM("FormularioExpTresTresVariaveis.cpp", FormExpTresTresVariaveis);
USEFORM("FormularioExpDoisQuatroVariaveis.cpp", FormExpDoisQuatroVariaveis);
USEFORM("FormularioExpTresQuatroVariaveis.cpp", FormExpTresQuatroVariaveis);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
   Controle *pCc = new Controle();
   try
   {
       pCc->ativar();
       Application->Initialize();
       Application->Run();
   }
   catch (Exception &exception)
   {
       Application->ShowException(&exception);
   }
   return 0;
}
//---------------------------------------------------------------------------
