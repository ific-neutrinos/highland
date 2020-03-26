//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Feb 13 18:14:53 2020 by ROOT version 6.16/00)
//      from the StreamerInfo in file ../PDSPProd2_protoDUNE_sp_reco_35ms_sce_off_23473772_0_452d9f89-a2a1-4680-ab72-853a3261da5d.root
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