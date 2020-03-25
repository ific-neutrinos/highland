//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Feb 13 18:08:35 2020 by ROOT version 6.16/00)
//      from the StreamerInfo in file ../np04_raw_run005834_0126_dl7_reco_22481932_0_20190828T190321.root
//////////////////////////////////////////////////////////


#ifndef beam__CKov_h
#define beam__CKov_h
namespace beam {
class CKov;
} // end of namespace.

#include "Rtypes.h"

namespace beam {
class CKov {

public:
// Nested classes declaration.

public:
// Data Members.
   short       trigger;     //
   double      pressure;    //
   double      timeStamp;    //

   CKov();
   CKov(const CKov & );
   virtual ~CKov();

};
} // namespace
#endif
