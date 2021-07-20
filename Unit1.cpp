//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

int x = -10;
int y = 10;
int pl = 0;
int pp = 0;
int minuty = 5;
int sekundy = 0;
int l_v_pion = 0;
int l_v_poz = 0;
int p_v_pion = 0;
int p_v_poz = 0;

void koniec_gry(int x)
{
    Form1->czas->Enabled = false;
    Form1->kr->Enabled = false;
    Form1->krazek->Visible = false;
    Form1->krazek->Enabled = false;
    Form1->lewy->Visible = false;
    Form1->prawy->Visible = false;
    if(x == 1)
    {switch(Application->MessageBox("Czerwony wygra³!!! Jeszcze raz?", "KONIEC", MB_YESNO | MB_ICONQUESTION))
     {
     case IDYES:
     {
      pl = 0;
        pp = 0;
        minuty = 5;
        sekundy = 0;
        Form1->tb_l->Caption = "0";
        Form1->tb_p->Caption = "0";
        Form1->zegar->Caption = "05 : 00";
        Form1->czas->Enabled = true;
        Form1->gol->Visible = false;
        Form1->punkty_l->Visible = false;
        Form1->punkty_p->Visible = false;
        Form1->myslnik->Visible = false;
        Form1->graj_dalej->Visible = false;
        Form1->graj_dalej->Enabled = false;
        Form1->lewy->Left = 288;
        Form1->lewy->Top = 360;
        Form1->lewy->Enabled = true;
        Form1->lewy->Visible = true;
        Form1->prawy->Left = 834;
        Form1->prawy->Top = 360;
        Form1->prawy->Enabled = true;
        Form1->prawy->Visible = true;
        Form1->krazek->Left = 580;
        Form1->krazek->Top = 600;
        Form1->kr->Enabled = true;
        Form1->krazek->Enabled = true;
        Form1->krazek->Visible = true;
        break;
        }
      case IDNO:
      {
       Form1->Close();
       break;
      }
     }
     }
    if(x == 2)
    {switch(Application->MessageBox("¯ó³ty wygra³!!! Jeszcze raz?", "KONIEC", MB_YESNO | MB_ICONQUESTION))
    {
    case IDYES:
    {
        pl = 0;
        pp = 0;
        minuty = 5;
        sekundy = 0;
        Form1->tb_l->Caption = "0";
        Form1->tb_p->Caption = "0";
        Form1->zegar->Caption = "05 : 00";
        Form1->czas->Enabled = true;
        Form1->gol->Visible = false;
        Form1->punkty_l->Visible = false;
        Form1->punkty_p->Visible = false;
        Form1->myslnik->Visible = false;
        Form1->graj_dalej->Visible = false;
        Form1->graj_dalej->Enabled = false;
        Form1->lewy->Left = 288;
        Form1->lewy->Top = 360;
        Form1->lewy->Enabled = true;
        Form1->lewy->Visible = true;
        Form1->prawy->Left = 834;
        Form1->prawy->Top = 360;
        Form1->prawy->Enabled = true;
        Form1->prawy->Visible = true;
        Form1->krazek->Left = 580;
        Form1->krazek->Top = 600;
        Form1->kr->Enabled = true;
        Form1->krazek->Enabled = true;
        Form1->krazek->Visible = true;
        break;
        }
        case IDNO:
        {
         Form1->Close();
         break;
        }
    }
    }
    if(x == 3)
    {switch(Application->MessageBox("Remis!!! Jeszcze raz?", "KONIEC", MB_YESNO | MB_ICONQUESTION))
    {
    case IDYES:
    {
        pl = 0;
        pp = 0;
        minuty = 5;
        sekundy = 0;
        Form1->tb_l->Caption = "0";
        Form1->tb_p->Caption = "0";
        Form1->zegar->Caption = "05 : 00";
        Form1->czas->Enabled = true;
        Form1->gol->Visible = false;
        Form1->punkty_l->Visible = false;
        Form1->punkty_p->Visible = false;
        Form1->myslnik->Visible = false;
        Form1->graj_dalej->Visible = false;
        Form1->graj_dalej->Enabled = false;
        Form1->lewy->Left = 288;
        Form1->lewy->Top = 360;
        Form1->lewy->Enabled = true;
        Form1->lewy->Visible = true;
        Form1->prawy->Left = 834;
        Form1->prawy->Top = 360;
        Form1->prawy->Enabled = true;
        Form1->prawy->Visible = true;
        Form1->krazek->Left = 580;
        Form1->krazek->Top = 600;
        Form1->kr->Enabled = true;
        Form1->krazek->Enabled = true;
        Form1->krazek->Visible = true;
        break;
        }
        case IDNO:
        {
        Form1->Close();
        break;
        }
    }
     }

}




void __fastcall TForm1::lewy_lTimer(TObject *Sender)
{
    if(lewy->Left >= 170)
    {
        lewy->Left -= 7;
    }
    else lewy_l->Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::lewy_upTimer(TObject *Sender)
{
     if(lewy->Top >= 170)
     {
        lewy->Top -= 7;
     }
     else lewy_up->Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::lewy_pTimer(TObject *Sender)
{
        if(lewy->Left <= 440)
        {
        lewy->Left += 7;
        }
        else lewy_p->Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::lewy_downTimer(TObject *Sender)
{
        if(lewy->Top <= 570)
        {
        lewy->Top += 7;
        }
        else lewy_down->Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        if((Key == 'a') || (Key == 'A'))
        {
                if(lewy->Left >= 150)
                lewy_l->Enabled = true;
                l_v_poz = -10;
        }
        if((Key == 's') || (Key == 'S'))
        {
                if(lewy->Top <= 695)
                lewy_down->Enabled = true;
                l_v_pion = 10;
        }
        if((Key == 'd') || (Key == 'D'))
        {
                if(lewy->Left <= 440)
                lewy_p->Enabled = true;
                l_v_poz = 10;
        }
        if((Key == 'w') || (Key == 'W'))
        {
                if(lewy->Top >= 105)
                lewy_up->Enabled = true;
                l_v_pion = -10;
        }




        if(Key == VK_LEFT)
        {
              prawy_l->Enabled = true;
              p_v_poz = -10;
        }
        if(Key == VK_RIGHT)
        {
              prawy_p->Enabled = true;
              p_v_poz = 10;
        }
        if(Key == VK_UP)
        {
              prawy_up->Enabled = true;
              p_v_pion = -10;
        }
        if(Key == VK_DOWN)
        {
              prawy_down->Enabled = true;
              p_v_pion = 10;
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormKeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        if((Key == 'a') || (Key == 'A'))
        {
              lewy_l->Enabled = false;
              l_v_poz = 0;
        }

        if((Key == 'd') || (Key == 'D'))
        {
              lewy_p->Enabled = false;
              l_v_poz = 0;
        }
        if((Key == 's') || (Key == 'S'))
        {
              lewy_down->Enabled = false;
              l_v_pion = 0;
        }
        if((Key == 'w') || (Key == 'W'))
        {
              lewy_up->Enabled = false;
              l_v_pion = 0;
        }

        if(Key == VK_LEFT)
        {
           prawy_l->Enabled = false;
           p_v_poz = 0;
        }
        if(Key == VK_RIGHT)
        {
              prawy_p->Enabled = false;
              p_v_poz = 0;
        }
        if(Key == VK_UP)
        {
              prawy_up->Enabled = false;
              p_v_pion = 0;
        }
        if(Key == VK_DOWN)
        {
              prawy_down->Enabled = false;
              p_v_pion = 0;
        }

}
//---------------------------------------------------------------------------
void __fastcall TForm1::prawy_lTimer(TObject *Sender)
{
        if(prawy->Left >= 700)
        prawy->Left -= 7;
        else prawy_l->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::prawy_upTimer(TObject *Sender)
{
        if(prawy->Top >= 170)
        prawy->Top -= 7;
        else prawy_up->Enabled = false;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::prawy_downTimer(TObject *Sender)
{
        if(prawy->Top <= 570)
        prawy->Top += 7;
        else prawy_down->Enabled = false;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::prawy_pTimer(TObject *Sender)
{
        if(prawy->Left <= 970)
        prawy->Left += 7;
        else prawy_p->Enabled = false;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::krTimer(TObject *Sender)
{
        krazek->Left += x;
        krazek->Top += y;
        //sciana
        if((krazek->Left >= 1060) || (krazek->Left <= 100)) x = -x;
        if((krazek->Top <= 100) || (krazek->Top >= 660)) y = -y;

        ///przedpole - zabezpieczenie
        if(x == 0 && krazek->Left < 170) x = 10;
        if(x == 0 && krazek->Left > 970) x = -10;
        if(x == 0 && krazek->Left > 440 && krazek->Left < 700) x = -10;
        if(y == 0 && krazek->Top < 170) y = 10;
        if(y == 0 && krazek->Top > 570) y = -10;

        ///odbicie od lewego drazka
        if((lewy->Left - krazek->Left)*(lewy->Left - krazek->Left) + ((lewy->Top - krazek->Top)*(lewy->Top - krazek->Top)) <= 2400)
        {
           if(l_v_poz == 0 && l_v_pion == 0)
           {
           //lewa strona
                if(krazek->Left + 40 - lewy->Left >= -30 && krazek->Left + 40 - lewy->Left <= 30) {    x = -x;   krazek->Left -= 10; }
           //góra
                if(krazek->Top + 40 - lewy->Top <= 30 && krazek->Top + 40 - lewy->Top >= -30) {  y = -y; krazek->Top -= 10; }
           //prawa strona
                if(krazek->Left - lewy->Left - 60 >= -30 && krazek->Left - lewy->Left - 60 <= 30) {    x = -x;  krazek->Left += 10; }
           //dó³
                if(krazek->Top - lewy->Top - 60 <= 30 && krazek->Top - lewy->Top - 60 >= -30) { y = -y; krazek->Top += 10; }
           }
           else
           {
                x = l_v_poz;
                if(x > 0 && krazek->Top < 650 && krazek->Top > 115 && krazek->Left > 105 && krazek->Left < 1060) krazek->Left += 10;
                if(x < 0 && krazek->Top < 650 && krazek->Top > 115 && krazek->Left > 105 && krazek->Left < 1060) krazek->Left -= 10;
                y = l_v_pion;
                if(y > 0 && krazek->Top < 650 && krazek->Top > 115 && krazek->Left > 105 && krazek->Left < 1060) krazek->Top += 10;
                if(y < 0 && krazek->Top < 650 && krazek->Top > 115 && krazek->Left > 105 && krazek->Left < 1060) krazek->Top -= 10;
           }
        }
        ///odbicie od prawego dr¹¿ka
         if((prawy->Left - krazek->Left)*(prawy->Left - krazek->Left) + ((prawy->Top - krazek->Top)*(prawy->Top - krazek->Top)) <= 2400)
        {
           if(p_v_poz == 0 && p_v_pion == 0)
           {
           //lewa strona
                if(krazek->Left + 40 - prawy->Left >= -30 && krazek->Left + 40 - prawy->Left <= 30) {    x = -x;  krazek->Left -= 10; }
           //góra
                if(krazek->Top + 40 - prawy->Top <= 30 && krazek->Top + 40 - prawy->Top >= -30) { y = -y; krazek->Top -= 10; }
           //prawa strona
                if(krazek->Left - prawy->Left - 60 >= -30 && krazek->Left - prawy->Left - 60 <= 30)   {  x = -x; krazek->Left += 10; }
           //dó³
                if(krazek->Top - prawy->Top - 60 <= 30 && krazek->Top - prawy->Top - 60 >= -30) { y = -y; krazek->Top += 10; }
           }
           else
           {
                x = p_v_poz;
                if(x > 0 && krazek->Top < 650 && krazek->Top > 115 && krazek->Left > 105 && krazek->Left < 1050) krazek->Left += 10;
                if(x < 0 && krazek->Top < 650 && krazek->Top > 115 && krazek->Left > 105 && krazek->Left < 1050) krazek->Left -= 10;
                y = p_v_pion;
                if(y > 0 && krazek->Top < 650 && krazek->Top > 115 && krazek->Left > 105 && krazek->Left < 1050) krazek->Top += 10;
                if(y < 0 && krazek->Top < 650 && krazek->Top > 115 && krazek->Left > 105 && krazek->Left < 1050) krazek->Top -= 10;
           }
        }
        ////gol
        if((krazek->Top > 290) && (krazek->Top < 480) && (krazek->Left <= 100))
        {
            x = -10;
            y = -10;
            pp++;
            kr->Enabled = false;
            krazek->Visible = false;
            krazek->Enabled = false;
            lewy->Visible = false;
            prawy->Visible = false;
            if(pp < 9)
            {gol->Visible = true;
            punkty_l->Visible = true;
            punkty_p->Caption = pp;
            punkty_l->Caption = pl;
            tb_p->Caption = pp;
            tb_l->Caption = pl;
            punkty_p->Visible = true;
            myslnik->Visible = true;
            graj_dalej->Enabled = true;
            graj_dalej->Visible = true;}
            else {tb_p->Caption = pp; koniec_gry(2);}
        }
        if((krazek->Top > 290) && (krazek->Top < 440) && (krazek->Left >= 1060))
        {
            x = 10;
            y = -10;
            pl++;
            kr->Enabled = false;
            krazek->Visible = false;
            krazek->Enabled = false;
            lewy->Visible = false;
            prawy->Visible = false;
            if(pl < 9)
            {gol->Visible = true;
            punkty_l->Visible = true;
            punkty_l->Caption = pl;
            punkty_p->Caption = pp;
            tb_l->Caption = pl;
            tb_p->Caption = pp;
            punkty_p->Visible = true;
            myslnik->Visible = true;
            graj_dalej->Enabled = true;
            graj_dalej->Visible = true;}
            else {tb_p->Caption = pp; koniec_gry(1); }
        }

}
//---------------------------------------------------------------------------



void __fastcall TForm1::graj_dalejClick(TObject *Sender)
{
        gol->Visible = false;
        punkty_l->Visible = false;
        punkty_p->Visible = false;
        myslnik->Visible = false;
        graj_dalej->Visible = false;
        graj_dalej->Enabled = false;
        lewy->Left = 288;
        lewy->Top = 360;
        lewy->Enabled = true;
        lewy->Visible = true;
        prawy->Left = 834;
        prawy->Top = 360;
        prawy->Enabled = true;
        prawy->Visible = true;
        krazek->Left = 580;
        krazek->Top = 600;
        kr->Enabled = true;
        krazek->Enabled = true;
        krazek->Visible = true;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::czasTimer(TObject *Sender)
{
         sekundy--;
         if(sekundy < 0)
         {
          if(minuty > 0)
          {sekundy = 59;
          minuty--;}

         }
         if(sekundy == 0 && minuty == 0) {
         zegar->Caption = "0"+IntToStr(minuty)+" "+":"+" "+"0"+IntToStr(sekundy);
         if(pl > pp){  koniec_gry(1); }
         else if(pp > pl){  koniec_gry(2); }
         else if(pp == pl){ koniec_gry(3); }
         }
         if(sekundy < 10)

             zegar->Caption = "0"+IntToStr(minuty)+" "+":"+" "+"0"+IntToStr(sekundy);

          else zegar->Caption = "0"+IntToStr(minuty)+" "+":"+" "+IntToStr(sekundy);
}
//---------------------------------------------------------------------------




void __fastcall TForm1::Button1Click(TObject *Sender)
{
        czas->Enabled = true;
        gol->Visible = false;
        punkty_l->Visible = false;
        punkty_p->Visible = false;
        myslnik->Visible = false;
        graj_dalej->Visible = false;
        graj_dalej->Enabled = false;
        lewy->Left = 288;
        lewy->Top = 360;
        lewy->Enabled = true;
        lewy->Visible = true;
        prawy->Left = 834;
        prawy->Top = 360;
        prawy->Enabled = true;
        prawy->Visible = true;
        krazek->Left = 580;
        krazek->Top = 600;
        kr->Enabled = true;
        krazek->Enabled = true;
        krazek->Visible = true;
        Button1->Visible = false;
        Button2->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
    instrukcja->Visible = true;
    tlo->Visible = false;
    Button1->Visible = false;
    Button2->Visible = false;
    Button3->Visible = true;
    tb_l->Visible = false;
    tb_p->Visible = false;
    zegar->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
    instrukcja->Visible = false;
    tlo->Visible = true;
    Button1->Visible = true;
    Button2->Visible = true;
    Button3->Visible = false;
    tb_l->Visible = true;
    tb_p->Visible = true;
    zegar->Visible = true;
}
//---------------------------------------------------------------------------

