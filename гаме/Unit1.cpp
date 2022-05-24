//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <vector>
#include <ctime>

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

using namespace std;

TForm1 *Form1;
Graphics::TBitmap *Ris1 = new Graphics::TBitmap(), *Ris2 = new Graphics::TBitmap(), *bimba = new Graphics::TBitmap(), *skr = new Graphics::TBitmap();
int l=0,r=0,d=0,tbb = 0,u=0,X1 = 0, live = 0, sb = 0, sec = 0, secs = 0, kbb = 1, Y1 = 0, tm = 0, sl = 50, sls = 5, kol = 0,looo = 0, krx = 0, bim = 0, kkk = 1, slb = 0, tb = 0, kkb = 1, slt = 0;
int rn;
struct ed
{
	int XX;
	int YY;
//	Graphics::TBitmap *RR = new Graphics::TBitmap();
	int ind;
};
struct bimb
{
	int XB;
	int YB;
};
struct bonus
{
	int XB;
	int YB;
	int ind;
};
vector <bimb> bib;
vector <TBitmap*> foodbtm(5);
vector <ed> eda;
vector <bonus> bon;
vector <TBitmap*> bonu(3);
void TForm1::end()
{
    Label4 -> Caption = "";
	Label3 -> Caption = "";
	Timer2 -> Enabled = false;
	Timer1 -> Enabled = false;
	Image2 -> Visible = false;
	Image3 -> Visible = false;
	Image1 -> Picture -> LoadFromFile("fonend.bmp");
	BitBtn6 -> Visible = true;
	Label1 -> Visible = false;
	Label2 -> Visible = true;
	Label2 -> Caption = kol;
}
void TForm1::restart()
{
	sb = 0;
	secs = 0;
	sec = 0;
	live = 0;
	slt = 0;
	kkb = 1;
	tb = 0;
	slb = 0;
	l = 0;
	r = 0;
	d = 0;
	u = 0;
	X1 = 0;
	Y1 = 0;
	tm = 0;
	sl = 50;
	sls = 5;
	kol = 0;
	looo = 0;
	krx = 1;
	kkk = 1;
	tbb = 0;
	kbb = 1;
	eda.clear();
	BitBtn1 -> Visible = false;
	BitBtn2 -> Visible = true;
	BitBtn3 -> Visible = true;
	BitBtn4 -> Visible = true;
	BitBtn5 -> Visible = true;
	BitBtn6 -> Visible = false;
	bim = 0;
	bib.clear();
	Label1 -> Caption = "";
	Label2 -> Caption = "";
	Label2 -> Visible = false;
	Image1 -> Picture -> LoadFromFile("fonstart.bmp");
	bon.clear();
}
void TForm1::start()
{
	kkb = rand() % slb + 50;
	kkk = rand() % sl + slt;
	kbb = rand() % sb + 60;
	Label1 -> Caption = kol;
	Label4 -> Caption = "Defuse kits : " + IntToStr(live);
	Timer1 -> Enabled = true;
	Image2 -> Visible = true;
	Image3 -> Visible = true;
	Image1 -> Picture -> LoadFromFile("fon.bmp");
	BitBtn2 -> Visible = false;
	BitBtn3 -> Visible = false;
	BitBtn4 -> Visible = false;
	BitBtn5 -> Visible = false;
	Label1 -> Visible = true;
	for (int i = 0; i < 3; i++)
	{
		Image1 -> Canvas -> Draw (krx,0,skr);
		krx += 80;
	}


	krx = 0;
}



//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
	Image1 -> Picture -> LoadFromFile("fonstart.bmp");
	srand(time(NULL));
	Image3 -> Canvas -> Pen -> Color = clWhite;
	Image2 -> Canvas -> Pen -> Color = clWhite;
	Image3 -> Canvas -> Rectangle(0,0, Image2 -> Width, Image2 -> Height);
	Ris1 -> LoadFromFile("chel.bmp");
	Ris1 -> Transparent = true;
	Ris2 -> LoadFromFile("krest.bmp");
	Ris2 -> Transparent = true;
	bonu[0] = new Graphics::TBitmap();
	bonu[1] = new Graphics::TBitmap();
	bonu[2] = new Graphics::TBitmap();
	foodbtm[0] = new Graphics::TBitmap();
	foodbtm[1] = new Graphics::TBitmap();
	foodbtm[2] = new Graphics::TBitmap();
	foodbtm[3] = new Graphics::TBitmap();
	foodbtm[4] = new Graphics::TBitmap();
	bonu[0] -> LoadFromFile("defuse.bmp");
	bonu[1] -> LoadFromFile("live.bmp");
	bonu[2] -> LoadFromFile("zelie.bmp");
	bonu[0] -> Transparent = true;
	bonu[1] -> Transparent = true;
	bonu[2] -> Transparent = true;
	foodbtm[0] -> LoadFromFile("redstone.bmp");
	foodbtm[1] -> LoadFromFile("svet.bmp");
	foodbtm[2] -> LoadFromFile("sleza.bmp");
	foodbtm[3] -> LoadFromFile("narost.bmp");
	foodbtm[4] -> LoadFromFile("magma.bmp");
	foodbtm[0] -> Transparent = true;
	foodbtm[1] -> Transparent = true;
	foodbtm[2] -> Transparent = true;
	foodbtm[3] -> Transparent = true;
	foodbtm[4] -> Transparent = true;
	bimba -> LoadFromFile ("bimba.bmp");
	bimba -> Transparent = true;
	skr -> LoadFromFile ("skr.bmp");
	skr -> Transparent = true;

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Image3MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{

	//Image3 -> Canvas -> Rectangle(0,0, Image3 -> Width, Image3 -> Height);
	if (X > 713 - (Ris1 -> Width)/2)
		X = 713 - (Ris1 -> Width)/2;
	if (X < (Ris1 -> Width)/2)
		X = (Ris1 -> Width)/2;
	X1 = X;
	Y1 = 745 - Ris1 -> Height;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	Image2 -> Canvas -> Rectangle(0,0, Image2 -> Width, Image2 -> Height);
	tm++;
	tb++;
	tbb++;
	if (tbb == kbb)
	{
		bonus a;
		a.XB = rand() % 673;
		a.YB = 0;
		a.ind = rand() % 3;
		bon.push_back(a);
		kbb = rand() % sb + 60;
		tbb = 0;
    }
	if (tb == kkb)
	{
		bimb b;
		b.XB = rand() % 673;
		b.YB = 0;
		bib.push_back(b);
		kkb = rand() % slb + 50;
		tb = 0;
	}
	if (tm == kkk)
	{
		ed k;
		k.XX = rand() % 673;
		k.YY = 0;
		k.ind = rand() % 5;
		eda.push_back(k);
		kkk = rand() % sl + slt;
		tm = 0;
	}
		if (looo == 3)
		{
			end();
		}
	for (int i = 0; i < bon.size(); i++)
	{
		bon[i].YB += sls;
		Image2 -> Canvas -> Draw(bon[i].XB,bon[i].YB,bonu[bon[i].ind]);
		if (bon[i].YB > 745)
		{
			bon.erase(bon.begin() + i);
			i--;
            continue;
		}
		if ((((bon[i].YB + (bonu[bon[i].ind] -> Height/2)) < 750 - (Ris1 -> Height)*3/4)) && ((bon[i].YB + (bonu[bon[i].ind] -> Height/2)) > (740 - (Ris1 -> Height)*3/4)) && ((bon[i].XB + (bonu[bon[i].ind] -> Width)/2) > (X1 - (Ris1 -> Width)/2)) && (((bon[i].XB + (bonu[bon[i].ind] -> Width/2))) < ((X1 + (Ris1 -> Width)/2))))
		{
			if (bon[i].ind == 0)
				{
					live++;
					Label4 -> Caption = "Defuse kits : " + IntToStr(live);
				}
			if (bon[i].ind == 1)
			{
				if  (krx != 0)
					{
						krx -= 80;
						Image1 -> Canvas -> Draw (krx,0,skr);
						looo--;
                    }
			}
			if (bon[i].ind == 2)
			{
			   sec = secs;
			   Timer2 -> Enabled= true;
            }
			bon.erase(bon.begin() + i);
			i--;
		}
	}
	for (int i = 0; i < eda.size(); i++)
	{
		eda[i].YY += sls;
		Image2 -> Canvas -> Draw(eda[i].XX,eda[i].YY,foodbtm[eda[i].ind]);
		if (eda[i].YY > 745)
		{
			eda.erase(eda.begin() + i);
			i--;
			looo++;
			Image1 -> Canvas -> Draw (krx,0,Ris2);
			krx += 80;
			continue;
		}
		if (((eda[i].YY + (foodbtm[eda[i].ind] -> Height / 2)) < 750 - (Ris1 -> Height)*3/4) && ((eda[i].YY + (foodbtm[eda[i].ind] -> Height/2)> (740 - (Ris1 -> Height)*3/4)) && ((eda[i].XX + (foodbtm[eda[i].ind] -> Width)/2) > (X1 - (Ris1 -> Width)/2)) && (((eda[i].XX + (foodbtm[eda[i].ind] -> Width/2))) < ((X1 + (Ris1 -> Width)/2)))))
		{
			eda.erase(eda.begin() + i);
			i--;
			if (Timer2 -> Enabled == true)
				kol += 2;
			else
				kol++;
			Label1 -> Caption = kol;
		}
	}

	for (int i = 0; i < bib.size(); i++)
	{
		bib[i].YB += sls - 4;
		Image2 -> Canvas -> Draw(bib[i].XB,bib[i].YB,bimba);
		if (bib[i].YB > 745)
		{
			bib.erase(bib.begin() + i);
			i--;
		}
		if ((((bib[i].YB + (bimba -> Height/2)) < 750 - (Ris1 -> Height)*3/4)) && ((bib[i].YB + (bimba -> Height/2)) > (740 - (Ris1 -> Height)*3/4)) && ((bib[i].XB + (bimba -> Width)/2) > (X1 - (Ris1 -> Width)/2)) && (((bib[i].XB + (bimba -> Width/2))) < ((X1 + (Ris1 -> Width)/2))))
		{
			bib.erase(bib.begin() + i);
			i--;
			if (live == 0)
			   looo = 3;
			else
				{
					live--;
					Label4 -> Caption = "Defuse kits : " + IntToStr(live);
				}
		}
	}

	Image2 -> Canvas -> Draw (X1 - (Ris1 -> Width)/2,745 - Ris1 -> Height,Ris1);


}
//---------------------------------------------------------------------------


void __fastcall TForm1::BitBtn1Click(TObject *Sender)
{
	BitBtn1 -> Visible = false;
	BitBtn2 -> Visible = true;
	BitBtn3 -> Visible = true;
	BitBtn4 -> Visible = true;
	BitBtn5 -> Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn2Click(TObject *Sender)
{
	sl = 60;
	sls = 5;
	slb = 500;
	slt = 20;
	secs = 20;
	sb = 400;
	start();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn3Click(TObject *Sender)
{
	sl = 45;
	sls = 7;
	slb = 400;
	slt = 15;
	secs = 15;
	sb = 300;
	start();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn4Click(TObject *Sender)
{
	sl = 30;
	sls = 9;
	slb = 200;
	slt = 10;
	secs = 10;
	sb = 200;
	start();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn5Click(TObject *Sender)
{
	sl = 5;
	sls = 16;
	slb = 100;
	slt = 7;
	secs = 5;
	sb = 100;
	start();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn6Click(TObject *Sender)
{
	restart();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
	Label3 -> Caption = "Bonus time : " + IntToStr(sec);
	if (sec == 0)
	{
		Timer2 -> Enabled = false;
		Label3 -> Caption = "";
	}
	sec--;
}
//---------------------------------------------------------------------------

