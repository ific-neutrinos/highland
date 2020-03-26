//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Sat Mar  9 10:19:31 2019 by ROOT version 6.12/06)
//      from the StreamerInfo in file ../../../protoDuneExampleAnalysis/v0r0/cmt/np04_raw_run005250_0014_dl9_reco_13061912_0_20181110T220718.root
//////////////////////////////////////////////////////////


#ifndef beam__FBM_h
#define beam__FBM_h
namespace beam {
class FBM;
} // end of namespace.

#include "Rtypes.h"
#include "Riostream.h"
#include <vector>

namespace beam {
class FBM {

public:
// Nested classes declaration.

public:
// Data Members.
   short       fibers[192];    //
   double      fiberData[6];    //
   double      timeData[4];     //
   double      timeStamp;       //
   int         ID;              //
   vector<short> active;          //
   bool          decoded;         //

   FBM();
   FBM(const FBM & );
   virtual ~FBM();

};
} // namespace
#endif