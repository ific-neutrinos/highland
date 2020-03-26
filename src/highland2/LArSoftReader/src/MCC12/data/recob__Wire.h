//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Mon Jun  3 14:12:50 2019 by ROOT version 6.12/06)
//      from the StreamerInfo in file /hep/DUNE/DataDir/ana_-043d807f-0b76-401e-9889-c1184b96a71c.root
//////////////////////////////////////////////////////////


#ifndef recob__Wire_h
#define recob__Wire_h
namespace recob {
class Wire;
} // end of namespace.

#include "Rtypes.h"
#include "lar__sparse_vector_float_.h"

namespace recob {
class Wire {

public:
// Nested classes declaration.

public:
// Data Members.
   unsigned int fChannel;    //ID of the associated channel.
   Int_t        fView;       //View corresponding to the plane of this wire.
   lar::sparse_vector<float> fSignalROI;    //Signal on the channel as function of time tick.

   Wire();
   Wire(const Wire & );
   virtual ~Wire();

   ClassDef(Wire,20); // Generated by MakeProject.
};
} // namespace
#endif