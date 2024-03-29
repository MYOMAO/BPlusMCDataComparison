//Set your parameters here//

//const int NBins = 6;
//const double ptBins[NBins+1]={1,2,3,5,8,12,20};

//const int NBins = 3;
//const double ptBins[NBins+1]={7,15,20,50};
const int NBins = 1;
const double ptBins[NBins+1]={5,100};

const int CentBins = 200;
const int CentMin = 0;
const int CentMax = 200;


//const int NVar = 14;
const int NVar = 28;

double width = 0.08;
double sidemin = 0.15;
double sidemax = 0.25;
double center = 5.27925;

const int Npt = 10;
double ptmin = 5;
double ptmax = 100;

const int Nalpha = 10;
double alphamin = 0;
double alphamax = 0.10;

const int NProb = 10;
double Probmin = 0;
double Probmax = 1.0;

const int NRatio = 10;
double Ratiomin = 3;
double Ratiomax = 50;

const int NBy = 20;
/*
double ppDymin = -1.0;
double ppDymax = 1.0;
double pPbDymin = ppDymin + 0.465;
double pPbDymax = ppDymax + 0.465;
*/
double Bymin = -2.4;
double Bymax = 2.4;


const int NBDTG = 30;
const double BDTGMin = 0.2;
const double BDTGMax = 0.9;


const int NBtrk1D0 = 10;
const double Btrk1D0Min = -0.3;
const double Btrk1D0Max = 0.3;

const int NBtrk2D0 = 20;
const double Btrk2D0Min = -0.3;
const double Btrk2D0Max = 0.3;

const int NBtrk1D0Err = 10;
const double Btrk1D0ErrMin = 0;
const double Btrk1D0ErrMax = 0.010;

const int NBtrk2D0Err = 20;
const double Btrk2D0ErrMin = 0;
const double Btrk2D0ErrMax = 0.2;


const int NBtrk1Pt = 10;
const double Btrk1PtMin = 0;
const double Btrk1PtMax = 8;

const int NBtrk2Pt = 20;
const double Btrk2PtMin = 0;
const double Btrk2PtMax = 8;

const int NBtrk1Eta = 10;
const double Btrk1EtaMin = -3;
const double Btrk1EtaMax = 3;

const int NBtrk2Eta = 20;
const double Btrk2EtaMin = -3;
const double Btrk2EtaMax = 3;



const int NBmu1Eta = 10;
const double Bmu1EtaMin = -2;
const double Bmu1EtaMax = 2;

const int NBmu2Eta = 10;
const double Bmu2EtaMin = -2;
const double Bmu2EtaMax = 2;

const int NBmu1Pt = 10;
const double Bmu1PtMin = 0;
const double Bmu1PtMax = 20;

const int NBmu2Pt = 10;
const double Bmu2PtMin = 0;
const double Bmu2PtMax = 20;

const int NDecayTime = 10;
const double DecayTimeMin = 0;
const double DecayTimeMax = 0.05;

const int NBmass = 10;
const double BMassMin = 5.0;
const double BMassMax = 5.5;

const int NBtrk1Dz= 10;
const double Btrk1DzMin = -0.1;
const double Btrk1DzMax = 0.1;

const int NBtrk2Dz = 5;
const double Btrk2DzMin = -0.1;
const double Btrk2DzMax = 0.1;

const int MBD0Ratio = 10;
const double BD0RatioMin = 300;
const double BD0RatioMax = 2000;

const int NBtrk1Y = 10;
const double Btrk1YMin = -3;
const double Btrk1YMax = 3;

const int NBtrk2Y = 40;
const double Btrk2YMin = -3;
const double Btrk2YMax = 3;

const int NBvtxX = 15;
const double BvtxXMin = -0.5;
const double BvtxXMax = 0.5;

const int NBvtxY = 15;
const double BvtxYMin = -0.5;
const double BvtxYMax = 0.5;

const int NDecayLength = 15;
const double DecayLengthMin = 0;
const double DecayLengthMax = 0.80;

const int NDecayLengthError = 10;
const double DecayLengthErrorMin = 0;
const double DecayLengthErrorMax = 0.05;

const int NBD0 = 10;
const double BD0Min = 0.00;
const double BD0Max = 0.40;

const int NBD0Err = 10;
const double BD0ErrMin = 0.0;
const double Bd0ErrMax = 0.00010;

const int NPVz = 30;
const double PVzMin = -30;
const double PVzMax = 30;

const int NOfficialB2D0 = 10;
const double OfficialB2D0Min = 0.00;
const double OfficialB2D0Max = 0.40;

const int NOfficialB2DErr = 10;
const double OfficialB2DErrMin = 0.002;
const double OfficialB2DErrMax = 0.020;



const int NBtrk1DxyErr = 10;
const double Btrk1DxyErrMin = 0;
const double Btrk1DxyErrMax = 0.010;

const int NBtrk1Dxy = 10;
const double Btrk1DxyMin = -0.3;
const double Btrk1DxyMax = 0.3;



double Binning[NVar] ={NOfficialB2D0,NOfficialB2DErr,NBtrk1Dxy,NPVz,NBtrk1Y,MBD0Ratio,Npt,Nalpha,NProb,NRatio,NBy,NBtrk1D0,NBtrk1D0Err,NBtrk1Pt,NBmu1Eta,NBmu2Eta,NBmu1Pt,NBmu2Pt,NBmass,NBtrk1Eta,NBtrk1Dz,NBvtxX,NBvtxY,NDecayLength,NDecayLengthError,NBD0,NBD0Err,CentBins};
double Min[NVar]	= {OfficialB2D0Min,OfficialB2DErrMin,Btrk1DxyMin,PVzMin,Btrk1YMin,BD0RatioMin,ptmin,alphamin,Probmin,Ratiomin,Bymin,Btrk1D0Min,Btrk1D0ErrMin,Btrk1PtMin,Bmu1EtaMin,Bmu2EtaMin,Bmu1PtMin,Bmu2PtMin,BMassMin,Btrk1EtaMin,Btrk1DzMin,BvtxXMin,BvtxYMin,DecayLengthMin,DecayLengthErrorMin,BD0Min,BD0ErrMin,CentMin};
//double Max[NVar]	= {ptmax,alphamax,Probmax,Ratiomax,Bymax,BDTGMax,Dtrk1D0Max,Dtrk2D0Max,Dtrk1YMax,Dtrk2YMax,DecayTimeMax,DMassMax,Dtrk1EtaMax,Dtrk2EtaMax};
double Max[NVar]	= {OfficialB2D0Max,OfficialB2DErrMax,Btrk1DxyMax,PVzMax,Btrk1YMax,BD0RatioMax,ptmax,alphamax,Probmax,Ratiomax,Bymax,Btrk1D0Max,Btrk1D0ErrMax,Btrk1PtMax,Bmu1EtaMax,Bmu2EtaMax,Bmu1PtMax,Bmu2PtMax,BMassMax,Btrk1EtaMax,Btrk1DzMax,BvtxXMax,BvtxYMax,DecayLengthMax,DecayLengthErrorMax,BD0Max,Bd0ErrMax,CentMax};


/*
   const int NRatio = 20;
   double Ratiomin = 0;
   double Ratiomax = 50;
   */


//double DyBin[7]={-1,-0.6,-0.3,0,0.3,0.6,1};

//double MaxY[NVar] ={0.2,0.2,0.80,0.25,0.20,0.30,0.20,0.15,0.15,0.15,0.15,0.15,0.15,0.15,0.15,0.15,0.15};

double MaxY[NVar] ={1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0};


TString VarSData[NVar] = {"BsvpvDistance_2DhisSData","BsvpvDisErr_2DhisSData","Btrk1DxyhisSData","PVzhisSData","Btrk1YhisSData","MBD0RatiohisSData","pthisSData","alphahisSData","ProbhisSData","RatiohisSData","ByhisSData","Btrk1D0hisSData","Btrk1D0ErrhisSData","Btrk1PthisSData","Bmu1EtahisSData","Bmu2EtahisSData","Bmu1PthisSData","Bmu2PthisSData","BmassSData","Btrk1EtaSData","Btrk1DzSData","BvtxXSData","BvtxYSData","BDcayLengthSData","BDcayLengthErrSData","BDcayLength2DSData","BDcayLength2DErrSData","CentSData"};  

TString VarBData[NVar] = {"BsvpvDistance_2DhisBData","BsvpvDisErr_2DhisBData","Btrk1DxyhisBData","PVzhisBData","Btrk1YhisBData","MBD0RatiohisBData","pthisBData","alphahisBData","ProbhisBData","RatiohisBData","ByhisBData","Btrk1D0hisBData","Btrk1D0ErrhisBData","Btrk1PthisBData","Bmu1EtahisBData","Bmu2EtahisBData","Bmu1PthisBData","Bmu2PthisBData","BmassBData","Btrk1EtaBData","Btrk1DzBData","BvtxXBData","BvtxYBData","BDcayLengthBData","BDcayLengthErrBData","BDcayLength2DBData","BDcayLength2DErrBData","CentBData"};  


//TString VarBData[NVar] = {"pthisBData","alphahisBData","ProbhisBData","RatiohisBData","ByhisBData","BDTGhisBData","Btrk1D0hisBData","Btrk2D0hisBData","Dtrk1YhisBData","Dtrk2YhisBData","DecayTimnehisBData","DmassBData","Dtrk1EtaBData","Dtrk2EtaBData"}; 

TString VarYData[NVar] = {"BsvpvDistance_2DhisYData","BsvpvDisErr_2DhisYData","Btrk1DxyhisYData","PVzhisYData","Btrk1YhisYData","MBD0RatiohisYData","pthisYData","alphahisYData","ProbhisYData","RatiohisYData","ByhisYData","Btrk1D0hisYData","Btrk1D0ErrhisYData","Btrk1PthisYData","Bmu1EtahisYData","Bmu2EtahisYData","Bmu1PthisYData","Bmu2PthisYData","BmassYData","Btrk1EtaYData","Btrk1DzYData","BvtxXYData","BvtxYYData","BDcayLengthYData","BDcayLengthErrYData","BDcayLength2DYData","BDcayLength2DErrYData","CentYData"};  


//TString VarYData[NVar] = {"pthisYData","alphahisYData","ProbhisYData","RatiohisYData","ByhisYData","BDTGhisYData","Btrk1D0hisYData","Btrk2D0hisYData","Dtrk1YhisYData","Dtrk2YhisYData","DecayTimnehisYData","DmassYData","Dtrk1EtaYData","Dtrk2EtaYData"};  

TString VarSMC[NVar] = {"BsvpvDistance_2DhisSMC","BsvpvDisErr_2DhisSMC","Btrk1DxyhisSMC","PVzhisSMC","Btrk1YhisSMC","MBD0RatiohisSMC","pthisSMC","alphahisSMC","ProbhisSMC","RatiohisSMC","ByhisSMC","Btrk1D0hisSMC","Btrk1D0ErrhisSMC","Btrk1PthisSMC","Bmu1EtahisSMC","Bmu2EtahisSMC","Bmu1PthisSMC","Bmu2PthisSMC","BmassSMC","Btrk1EtaSMC","Btrk1DzSMC","BvtxXSMC","BvtxYSMC","BDcayLengthSMC","BDcayLengthErrSMC","BDcayLength2DSMC","BDcayLength2DErrSMC","CentSMC"};

TString VarBMC[NVar] = {"BsvpvDistance_2DhisBMC","BsvpvDisErr_2DhisBMC","Btrk1DxyhisBMC","PVzhisBMC","Btrk1YhisBMC","MBD0RatiohisBMC","pthisBMC","alphahisBMC","ProbhisBMC","RatiohisBMC","ByhisBMC","Btrk1D0hisBMC","Btrk1D0ErrhisBMC","Btrk1PthisBMC","Bmu1EtahisBMC","Bmu2EtahisBMC","Bmu1PthisBMC","Bmu2PthisBMC","BmassBMC","Btrk1EtaBMC","Btrk1DzBMC","BvtxXBMC","BvtxYBMC","BDcayLengthBMC","BDcayLengthErrBMC","BDcayLength2DBMC","BDcayLength2DErrBMC","CentBMC"};
TString VarYMC[NVar] = {"BsvpvDistance_2DhisYMC","BsvpvDisErr_2DhisYMC","Btrk1DxyhisYMC","PVzhisYMC","Btrk1YhisYMC","MBD0RatiohisYMC","pthisYMC","alphahisYMC","ProbhisYMC","RatiohisYMC","ByhisYMC","Btrk1D0hisYMC","Btrk1D0ErrhisYMC","Btrk1PthisYMC","Bmu1EtahisYMC","Bmu2EtahisYMC","Bmu1PthisYMC","Bmu2PthisYMC","BmassYMC","Btrk1EtaYMC","Btrk1DzYMC","BvtxXYMC","BvtxYYMC","BDcayLengthYMC","BDcayLengthErrYMC","BDcayLength2DYMC","BDcayLength2DErrYMC","CentYMC"};
TString VarGMC[NVar] = {"BsvpvDistance_2DhisGMC","BsvpvDisErr_2DhisGMC","Btrk1DxyhisGMC","PVzhisGMC","Btrk1YhisGMC","MBD0RatiohisGMC","pthisGMC","alphahisGMC","ProbhisGMC","RatiohisGMC","ByhisGMC","Btrk1D0hisGMC","Btrk1D0ErrhisGMC","Btrk1PthisGMC","Bmu1EtahisGMC","Bmu2EtahisGMC","Bmu1PthisGMC","Bmu2PthisGMC","BmassGMC","Btrk1EtaGMC","Btrk1DzGMC","BvtxXGMC","BvtxYGMC","BDcayLengthGMC","BDcayLengthErrGMC","BDcayLength2DGMC","BDcayLength2DErrGMC","CentGMC"};

TString VarYMCRatio[NVar] = {"BsvpvDistance_2DhisYRatioMC","BsvpvDisErr_2DhisYRatioMC","Btrk1DxyhisYRatioMC","PVzhisYRatioMC","Btrk1YhisYMCRatio","MBD0RatiohisYMCRatio","pthisYMCRatio","alphahisYMCRatio","ProbhisYMCRatio","RatiohisYMCRatio","ByhisYMCRatio","Btrk1D0hisYMCRatio","Btrk1D0ErrhisYMCRatio","Btrk1PthisYMCRatio","Bmu1EtahisYMCRatio","Bmu2EtahisYMCRatio","Bmu1PthisYMCRatio","Bmu2PthisYMCRatio","BmassYMCRatio","Btrk1EtaYMCRatio","Btrk1DzYMCRatio","BvtxXYMCRatio","BvtxYYMCRatio","BDcayLengthYMCRatio","BDcayLengthErrYMCRatio","BDcayLength2DYMCRatio","BDcayLength2DErrYMCRatio","CentYMCRatio"};
TString VarGMCRatio[NVar] = {"BsvpvDistance_2DhisGRatioMC","BsvpvDisErr_2DhisGRatioMC","Btrk1DxyhisGRatioMC","PVzhisGRatioMC","Btrk1YhisGMCRatio","MBD0RatiohisGMCRatio","pthisGMCRatio","alphahisGMCRatio","ProbhisGMCRatio","RatiohisGMCRatio","ByhisGMCRatio","Btrk1D0hisGMCRatio","Btrk1D0ErrhisGMCRatio","Btrk1PthisGMCRatio","Bmu1EtahisGMCRatio","Bmu2EtahisGMCRatio","Bmu1PthisGMCRatio","Bmu2PthisGMCRatio","BmassGMCRatio","Btrk1EtaGMCRatio","Btrk1DzGMCRatio","BvtxXGMCRatio","BvtxYGMCRatio","BDcayLengthGMCRatio","BDcayLengthErrGMCRatio","BDcayLength2DGMCRatio","BDcayLength2DErrGMCRatio","CentGMCRatio"};

/*
TString VarBMC[NVar] = {"pthisBMC","alphahisBMC","ProbhisBMC","RatiohisBMC","DyhisBMC","BDTGhisBMC","Dtrk1D0hisBMC","Dtrk2D0hisBMC","Dtrk1YhisBMC","Dtrk2YhisBMC","DecayTimehisBMC","DmassBMC","Dtrk1EtaBMC","Dtrk2EtaBMC"};
TString VarYMC[NVar] = {"pthisYMC","alphahisYMC","ProbhisYMC","RatiohisYMC","DyhisYMC","BDTGhisYMC","Dtrk1D0hisYMC","Dtrk2D0hisYMC","Dtrk1YhisYMC","Dtrk2YhisYMC","DecayTimehisYMC","DmassYMC","Dtrk1EtaYMC","Dtrk2EtaYMC"};  
TString VarGMC[NVar] = {"pthisGMC","alphahisGMC","ProbhisGMC","RatiohisGMC","DyhisGMC","BDTGhisGMC","Dtrk1D0hisGMC","Dtrk2D0hisGMC","Dtrk1YhisGMC","Dtrk2YhisGMC","DecayTimehisGMC","DmassGMC","Dtrk1EtaGMC","Dtrk2EtaGMC"};  
*/



TString Var[NVar] = {"BsvpvDistance_2D","BsvpvDisErr_2D","Btrk1Dxy","PVz","Btrk1Y","Bd0/Bd0Err","Bpt","Balpha","Bchi2cl","BsvpvDistance/BsvpvDisErr","By","Btrk1D0", "Btrk1D0Err", "Btrk1Pt","Bmu1eta","Bmu2eta","Bmu1pt","Bmu2pt","Bmass","Btrk1Eta","Btrk1Dz","BvtxX","BvtxY","BsvpvDistance","BsvpvDisErr","Bd0","Bd0Err","hiBin"};  

TString Name[NVar] = {"BsvpvDistance_2D","BsvpvDisErr_2D","Btrk1Dxy","PVz","Btrk1Y","2DDecayLRatio","Bpt","Balpha","Bchi2cl","Ratio","By","Btrk1D0","Btrk1D0Err","Btrk1Pt","Bmu1Eta","Bmu2Eta","Bmu1Pt","Bmu2Pt","Bmass","Btrk1Eta","Btrk1Dz","BvtxX","BvtxY","BsvpvDistance","BsvpvDisErr","Bd0","Bd0Err","hiBin"};  
TString XName[NVar] = {"BsvpvDistance_2D","BsvpvDisErr_2D","Btrk1Dxy","PVz (cm)","Btrk1Y","2DDecayLRatio","Bpt (GeV/c)","Balpha","Bchi2cl","Ratio","By","Btrk1D0","Btrk1D0Err","Btrk1Pt","Bmu1Eta","Bmu2Eta","Bmu1Pt","Bmu2Pt","Bmass (GeV/c)","Btrk1Eta","Btrk1Dz","BvtxX","BvtxY","BsvpvDistance","BsvpvDisErr","Bd0","Bd0Err","hiBin"};  
TString YName[NVar] = {"Normalized Counts","Normalized Counts","Normalized Counts","Normalized Counts","Normalized Counts","Normalized Counts","Normalized Counts","Normalized Counts","Normalized Counts","Normalized Counts","Normalized Counts","Normalized Counts","Normalized Counts","Normalized Counts","Normalized Counts","Normalized Counts","Normalized Counts","Normalized Counts","Normalized Counts","Normalized Counts","Normalized Counts","Normalized Counts","Normalized Counts","Normalized Counts","Normalized Counts","Normalized Counts","Normalized Counts","Normalized Counts"};  


TString HisName[NVar] = {"Normalized BsvpvDistance_2D (Official) Distribution","Normalized BsvpvDisErr_2D (Official) Distribution","Normalized Btrk1Dxy Distribution","Normalized PVz Distribution","Normalized B Track 1 Rapidity Distribution","Normalized 2D Decay Length Ratio Distribution","Normalized Bpt Distribution","Normalized Balpha Distribution","Normalized Vertex Probability Distribution","Normalized Decay Length Ratio Distribution","Normalized By Distribution","Normalized Btrk1D0 Distribution","Normalized Btrk1D0Err Distribution","Normalized Btrk1Pt Distribution","Normalized Bmu1Eta Distribution","Normalized Bmu2Eta Distribution","Normalized Bmu1Pt Distribution","Normalized Bmu2Pt Distribution","Normalized B^{+} Invariant Mass Distribution","Normalized Btrk1Eta Distribution","Normalized Btrk1Dz Distribution","Normalized BvtxX Distribution","Normalized BvtxY Distribution","Normalized DecayLength Distribution","Normalized DecayLength Error Distribution","Normalized 2D DecayLength Distribution","Normalized 2D DecayLength Error Distribution","Normalized hiBin Distribution"};  


TString weightfunctionreco;
TString BptWeight;
TString CentWeight;
TString PVzWeight;
TString WeightType;



