//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Mon Jun  3 14:12:50 2019 by ROOT version 6.12/06)
//      from the StreamerInfo in file /hep/DUNE/DataDir/ana_-043d807f-0b76-401e-9889-c1184b96a71c.root
//////////////////////////////////////////////////////////


#ifndef recob__OpHit_h
#define recob__OpHit_h
namespace recob {
class OpHit;
} // end of namespace.

#include "Rtypes.h"

namespace recob {
class OpHit {

public:
// Nested classes declaration.

public:
// Data Members.
   int         fOpChannel;    //
   unsigned short fFrame;        //
   double         fPeakTime;     //
   double         fPeakTimeAbs;    //
   double         fWidth;          //
   double         fArea;           //
   double         fAmplitude;      //
   double         fPE;             //
   double         fFastToTotal;    //

   OpHit();
   OpHit(const OpHit & );
   virtual ~OpHit();

   ClassDef(OpHit,15); // Generated by MakeProject.
};
} // namespace
#endif