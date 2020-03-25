//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Feb 13 18:14:53 2020 by ROOT version 6.16/00)
//      from the StreamerInfo in file ../PDSPProd2_protoDUNE_sp_reco_35ms_sce_off_23473772_0_452d9f89-a2a1-4680-ab72-853a3261da5d.root
//////////////////////////////////////////////////////////


#ifndef anab__CosmicTag_h
#define anab__CosmicTag_h
namespace anab {
class CosmicTag;
} // end of namespace.

#include "Rtypes.h"
#include "Riostream.h"
#include <vector>

namespace anab {
class CosmicTag {

public:
// Nested classes declaration.

public:
// Data Members.
   vector<float> endPt1;      //x,y,z assuming t_0 = t_beam
   vector<float> endPt2;      //x,y,z assuming t_0 = t_beam
   float         fCosmicScore;    //-1 means very likely neutrino,
   Int_t         fCosmicType;     //

   CosmicTag();
   CosmicTag(const CosmicTag & );
   virtual ~CosmicTag();

   ClassDef(CosmicTag,4); // Generated by MakeProject.
};
} // namespace
#endif
