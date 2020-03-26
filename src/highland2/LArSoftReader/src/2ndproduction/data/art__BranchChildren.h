//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Feb 13 18:08:35 2020 by ROOT version 6.16/00)
//      from the StreamerInfo in file ../np04_raw_run005834_0126_dl7_reco_22481932_0_20190828T190321.root
//////////////////////////////////////////////////////////


#ifndef art__BranchChildren_h
#define art__BranchChildren_h
namespace art {
class BranchChildren;
} // end of namespace.

#include "Rtypes.h"
#include "Riostream.h"
#include <map>
#include "art__ProductID.h"
#include <set>
namespace std {} using namespace std;
#ifdef __MAKECINT__
#pragma link C++ class pair<art::ProductID,vector<art::ProductID> >+;
#endif

namespace art {
class BranchChildren {

public:
// Nested classes declaration.

public:
// Data Members.
   std::vector<std::pair<art::ProductID,std::vector<art::ProductID> > > childLookup_;    //

   BranchChildren();
   BranchChildren(const BranchChildren & );
   virtual ~BranchChildren();

   ClassDef(BranchChildren,12); // Generated by MakeProject.
};
} // namespace
#endif