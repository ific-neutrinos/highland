//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Feb 13 18:08:35 2020 by ROOT version 6.16/00)
//      from the StreamerInfo in file ../np04_raw_run005834_0126_dl7_reco_22481932_0_20190828T190321.root
//////////////////////////////////////////////////////////


#ifndef art__Parentage_h
#define art__Parentage_h
namespace art {
class Parentage;
} // end of namespace.

#include "Rtypes.h"
#include "Riostream.h"
#include <vector>
#include "art__ProductID.h"

namespace art {
class Parentage {

public:
// Nested classes declaration.

public:
// Data Members.
   vector<art::ProductID> parents_;    //

   Parentage();
   Parentage(const Parentage & );
   virtual ~Parentage();

   ClassDef(Parentage,12); // Generated by MakeProject.
};
} // namespace
#endif
