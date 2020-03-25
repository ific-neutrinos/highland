//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Feb 13 18:08:35 2020 by ROOT version 6.16/00)
//      from the StreamerInfo in file ../np04_raw_run005834_0126_dl7_reco_22481932_0_20190828T190321.root
//////////////////////////////////////////////////////////


#ifndef beam__ProtoDUNEBeamEvent_h
#define beam__ProtoDUNEBeamEvent_h
namespace beam {
class ProtoDUNEBeamEvent;
} // end of namespace.

#include "Rtypes.h"
#include <utility>
#include "Riostream.h"
#include <map>
#include "beam__FBM.h"
#ifdef __MAKECINT__
#pragma link C++ class pair<string,beam::FBM >+;
#endif
#include <vector>
#include "beam__CKov.h"
#include "recob__Track.h"

namespace beam {
class ProtoDUNEBeamEvent {

public:
// Nested classes declaration.

public:
// Data Members.
   pair<double,double> t0;          //
   Long64_t            CTBTimestamp;    //
   Long64_t            RDTimestamp;     //
   std::vector<std::pair<std::string,beam::FBM> > fiberMonitors;    //
   int                                            TOFChan;          //
   double                                         theTOF;           //
   vector<double>                                 MultipleTOFs;     //
   vector<int>                                    MultipleTOFChans;    //
   vector<unsigned long>                          UpstreamTriggers;    //
   vector<unsigned long>                          DownstreamTriggers;    //
   vector<double>                                 TOFCal;                //
   beam::CKov                                     CKov0;                 //
   beam::CKov                                     CKov1;                 //
   vector<recob::Track>                           Tracks;                //
   unsigned long                                  activeTrigger;         //
   bool                                           isMatched;             //
   vector<double>                                 RecoBeamMomenta;       //
   int                                            BITrigger;             //
   int                                            TimingTrigger;         //
   double                                         SpillStart;            //
   double                                         SpillOffset;           //
   double                                         MagnetCurrent;         //

   ProtoDUNEBeamEvent();
   ProtoDUNEBeamEvent(const ProtoDUNEBeamEvent & );
   virtual ~ProtoDUNEBeamEvent();

   ClassDef(ProtoDUNEBeamEvent,36); // Generated by MakeProject.
};
} // namespace
#endif
