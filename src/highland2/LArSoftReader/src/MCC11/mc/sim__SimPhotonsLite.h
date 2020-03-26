//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Feb 14 10:40:59 2019 by ROOT version 6.12/06)
//      from the StreamerInfo in file /hep/DUNE/DataDir/MCC11/mcc11_protoDUNE_sp_reco_12231045_0_1ee4e6cf-25fb-482c-a231-fbd91e816aa4.root
//////////////////////////////////////////////////////////


#ifndef sim__SimPhotonsLite_h
#define sim__SimPhotonsLite_h
namespace sim {
class SimPhotonsLite;
} // end of namespace.

#include "Rtypes.h"
#include "Riostream.h"
#include <map>

namespace sim {
class SimPhotonsLite {

public:
// Nested classes declaration.

public:
// Data Members.
   int         OpChannel;    //
   std::map<int,int> DetectedPhotons;    //

   SimPhotonsLite();
   SimPhotonsLite(const SimPhotonsLite & );
   virtual ~SimPhotonsLite();

   ClassDef(SimPhotonsLite,11); // Generated by MakeProject.
};
} // namespace
#endif