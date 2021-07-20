//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TImage *tlo;
        TImage *lewy;
        TImage *prawy;
        TTimer *lewy_l;
        TTimer *lewy_up;
        TTimer *lewy_p;
        TTimer *lewy_down;
        TTimer *prawy_l;
        TTimer *prawy_up;
        TTimer *prawy_down;
        TTimer *prawy_p;
        TImage *krazek;
        TTimer *kr;
        TLabel *gol;
        TLabel *punkty_l;
        TLabel *myslnik;
        TLabel *punkty_p;
        TButton *graj_dalej;
        TLabel *tb_l;
        TLabel *tb_p;
        TLabel *zegar;
        TTimer *czas;
        TButton *Button1;
        TImage *instrukcja;
        TButton *Button2;
        TButton *Button3;
        void __fastcall lewy_lTimer(TObject *Sender);
        void __fastcall lewy_upTimer(TObject *Sender);
        void __fastcall lewy_pTimer(TObject *Sender);
        void __fastcall lewy_downTimer(TObject *Sender);
        void __fastcall FormKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall FormKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall prawy_lTimer(TObject *Sender);
        void __fastcall prawy_upTimer(TObject *Sender);
        void __fastcall prawy_downTimer(TObject *Sender);
        void __fastcall prawy_pTimer(TObject *Sender);
        void __fastcall krTimer(TObject *Sender);
        void __fastcall graj_dalejClick(TObject *Sender);
        void __fastcall czasTimer(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
