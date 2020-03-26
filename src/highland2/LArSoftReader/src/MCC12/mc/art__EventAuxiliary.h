//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun  4 02:53:16 2019 by ROOT version 6.12/06)
//      from the StreamerInfo in file /pnfs/dune/scratch/users/tjyang/v08_21_00/reco/mcc12_protodune_beam_p1GeV_cosmics_12ms_test/19285494_84/mcc12_protodune_beam_p1GeV_cosmics_12ms_test_84_20190601T145951_reco0.root
//////////////////////////////////////////////////////////


#ifndef art__EventAuxiliary_h
#define art__EventAuxiliary_h
namespace art {
class EventAuxiliary;
} // end of namespace.

#include "Rtypes.h"
#include "art__EventID.h"
#include "art__Timestamp.h"

namespace art {
class EventAuxiliary {

public:
// Nested classes forward declaration.
enum ExperimentType { kDefault_ExperimentType };

public:
// Nested classes declaration.

public:
// Data Members.
   art::EventID id_;         //
   art::Timestamp time_;       //
   bool           isRealData_;    //
   Int_t          experimentType_;    //

   EventAuxiliary();
   EventAuxiliary(const EventAuxiliary & );
   virtual ~EventAuxiliary();

   ClassDef(EventAuxiliary,12); // Generated by MakeProject.
};
} // namespace
#endif