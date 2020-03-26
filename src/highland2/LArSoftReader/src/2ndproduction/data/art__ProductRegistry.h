//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Feb 13 18:08:35 2020 by ROOT version 6.16/00)
//      from the StreamerInfo in file ../np04_raw_run005834_0126_dl7_reco_22481932_0_20190828T190321.root
//////////////////////////////////////////////////////////


#ifndef art__ProductRegistry_h
#define art__ProductRegistry_h
namespace art {
class ProductRegistry;
} // end of namespace.

#include "Rtypes.h"
#include "Riostream.h"
#include <map>
#include "art__BranchKey.h"
#include "art__BranchDescription.h"
#ifdef __MAKECINT__
#pragma link C++ class pair<art::BranchKey,art::BranchDescription >+;
#endif

namespace art {
class ProductRegistry {

public:
// Nested classes declaration.

public:
// Data Members.
   std::vector<std::pair<art::BranchKey,art::BranchDescription> > productList_;    //

   ProductRegistry();
   ProductRegistry(const ProductRegistry & );
   virtual ~ProductRegistry();

   ClassDef(ProductRegistry,13); // Generated by MakeProject.
};
} // namespace
#endif