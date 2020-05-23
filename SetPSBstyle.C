/*
 *  SetPSBstyle.c
 *
 *  Style file for easy loading for baseline reasonable plots
 *  Easily modified fof specific papers or journals
 *  Avoids common pitfalls for plot titles, stat boxes, etc.
 *
 *  Usage: at top of script, include the following line:
 *
 *  gROOT->ProcessLine(".x SetPSBstyle.C");
 *
 *  Created by Phillip Barbeau on 10/3/12.
 *
 */

{
	//---------Set Style----------
    gROOT->SetStyle("Plain");
    gStyle->SetPalette(1000);
	gStyle->SetLabelFont(22, "xyz");
	
	int fontStyle = 22;
	gStyle->SetStatFont(fontStyle);
	gStyle->SetTitleFont(fontStyle, "xyz");
	gStyle->SetLabelSize(0.045,"xyz");
	gStyle->SetLabelOffset(0.015,"xyz");
	gStyle->SetTitleFont(fontStyle, "h");
	gStyle->SetTitleSize(0.05,"xyz"); // axis titles
	gStyle->SetTitleSize(0.05,"h"); // histogram title
	gStyle->SetTitleOffset(1.1,"x");
	gStyle->SetTitleOffset(1.2,"y");
	gStyle->SetTitleX(0.12); // spot where histogram title goes
	gStyle->SetTitleW(0.78); // width computed so that title is centered
	
	// set margins
	gStyle->SetPadTopMargin(0.08);
	gStyle->SetPadBottomMargin(0.12);
	gStyle->SetPadLeftMargin(0.14);
	gStyle->SetPadRightMargin(0.1);
	
	// Set Data/Stat/... and other options
	gStyle->SetOptDate(0);
	gStyle->SetDateX(0.01);
	gStyle->SetDateY(0.01);
	gStyle->SetOptFile(0);
	gStyle->SetOptFit(111);
	gStyle->SetOptLogx(0);
	gStyle->SetOptLogy(0);
	gStyle->SetOptLogz(0);
	gStyle->SetOptStat(0);
	//gStyle->SetOptStat(1110);// no histogram title
	gStyle->SetStatFormat("6.4f");
	gStyle->SetFitFormat("6.4f");
	gStyle->SetStatStyle(0); // hollow
	//gStyle->SetStatStyle(1001); // filled
	gStyle->SetStatBorderSize(0);
	gStyle->SetStatW(0.25);
	gStyle->SetStatH(0.125);
	//gStyle->SetStatX(0.90);
	//gStyle->SetStatY(0.90);
	gStyle->SetStatX(1.0-gStyle->GetPadRightMargin()-0.02);
	gStyle->SetStatY(1.0-gStyle->GetPadTopMargin()-0.02);
	gStyle->SetOptTitle(1);
    
	// Set tick marks and turn off grids
	// gStyle->SetNdivisions(1005,"xyz");
	gStyle->SetNdivisions(510,"xyz");
	gStyle->SetPadTickX(1);
	gStyle->SetPadTickY(0);
	gStyle->SetTickLength(0.02,"xyz");
	gStyle->SetPadGridX(0);
	gStyle->SetPadGridY(0);

	gStyle->SetPaperSize(TStyle::kUSLetter);
	
	gStyle->SetHistMinimumZero(kTRUE);
	
	// Set Line Widths
	gStyle->SetFrameLineWidth(1);
	gStyle->SetFuncWidth(1);
	gStyle->SetHistLineWidth(1);
	
	// Set all fill styles to be empty and line styles to be solid
	gStyle->SetFrameFillStyle(0);
	gStyle->SetHistFillStyle(1001);
	gStyle->SetFrameLineStyle(0);
	gStyle->SetHistLineStyle(0);
	gStyle->SetTitleStyle(0);
	gStyle->SetFuncStyle(1);
	
	gROOT->ForceStyle();
	
	//---------End Set Style----------	
}

